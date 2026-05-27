#include<iostream>
#include<iomanip>
using namespace std;

class Ass1
{
public:
    void Pattern1()
    {
        int a = 1024, b = 512, c = 64, d = 8, e;
        e = a + b + c + d;
        cout<<"Print Pattern 1 -- "<<endl<<endl;
        cout<<setw(5)<<a<<endl;
        cout<<setw(5)<<b<<endl;
        cout<<setw(5)<<c<<endl;
        cout<<setw(5)<<d<<endl;
        cout<<setw(5)<<"------"<<endl;
        cout<<setw(5)<<e<<endl;
    }

    void Pattern2()
    {
        int N = 5;
        cout<<"Print Pattern 2 -- "<<endl<<endl;
        for (int i = 1; i <= N; i++){
            cout<<setw(N-i)<<setfill(' ')<<"";
            cout<<setw(i+i-1)<<setfill('*')<<""<<endl;
        }
    }

    void Pattern3()
    {
        int N = 5;
        cout<<"Print Pattern 3 -- "<<endl<<endl;

        for (int i = 1; i <= N; i++){
            if (i % 2 == 0){
                cout<<setw(N-2)<<setfill('_')<<"";
                cout<<setw(N+2)<<setfill('*')<<"";
                cout<<setw(N-2)<<setfill('_')<<""<<endl;

            }
            else {
                cout<<setw(N)<<setfill('_')<<"";
                cout<<setw(N-2)<<setfill('*')<<"";
                cout<<setw(N)<<setfill('_')<<""<<endl;
            }
        }
    }
};

int main()
{
    Ass1 a;
    a.Pattern1();
    a.Pattern2();
    a.Pattern3();
}
