#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

class Ass4
{
public:
    int N, sum;
    void GetValues()
    {

        cout<<"Input the values for Nth Term -- ";
        cin>>N;
        sum = 0;
    }
    void Series1()
    {
        cout<<"\nSeries 1 is --- "<<endl;
        for (int i = 1; i <= N; i++){
            cout<<i<<" * "<<i<<" = "<<i*i<<endl;
            sum += i*i;
        }
        cout<<"Sum of above series is -- "<<sum<<endl<<endl;
    }
    void Series2()
    {
        int s = 0;
        cout<<"\nSeries 2 is --- "<<endl;
        for (int i = 1; i <= N; i++){
            s = 0;
            for (int j = 1; j <= i; j++){
                cout<<j<<" + ";
                s += j;
            }
            cout<<"\b\b= "<<s<<endl;
            sum += s;
        }
        cout<<"Sum of above series is -- "<<sum<<endl<<endl;
    }
};

int main()
{
    system("cls");
    Ass4 a;
    cout<<"Series Printer Program\n\n";
    cout<<"1. Series 1\t2. Series 2\t3. Exit\n";
    cout<<"Choose a series to print -- ";
    char c = getche();
    cout<<endl<<endl;

    if (c == '1') {
        a.GetValues();
        a.Series1();
    }
    else if (c == '2') {
        a.GetValues();
        a.Series2();
    }
    else exit(0);

    cout<<"Do you want to continue? Press 1 else any other key...";
    c = getch();
    if (c == '1') main();
}
