#include<iostream>
#include<iomanip>
using namespace std;

class Ass3
{
public:
    int N, x, y, sum, counter, space;

    void GetValues()
    {
        cout<<"Enter length of pattern - ";
        cin>>N;
        sum = (N * (N + 1)) - 1;
        counter = 0;
        x = 1;
        y = 0;
        space = 0;
    }
    void PrintPattern()
    {
        for (int i = 1 ; i <= N+N-1; i++){
            cout<<setw(space)<<setfill(' ')<<"";

            (i < N) ? space++ : space--;

            for (int j = 1; j <= N; j++){
                if (i <= N && j <= N-i+1) {
                    counter++;
                    if (counter < 10) {
                        cout<<x<<" ";
                        x++;
                    }
                    else {
                        cout<<y<<" ";
                        y = (y == 0) ? 9 : 0;
                    }
                }
                else if (j <= i-N+1){
                    counter++;
                    if (counter > sum-9){
                        x--;
                        cout<<x<<" ";
                    }
                    else {
                        cout<<y<<" ";
                        y = (y == 0) ? 9 : 0;
                    }
                }
            }
            cout<<endl;
        }
    }
};

int main()
{
    Ass3 a;
    a.GetValues();
    a.PrintPattern();
}
