#include<iostream>
using namespace std;

class Ass2
{
public:
    void GCD()
    {
        cout<<"Greatest Common Divisor .. "<<endl<<endl;
        int n1, n2;
        cout<<"Enter Number 1 -- ";
        cin>>n1;
        cout<<"Enter Number 2 -- ";
        cin>>n2;
        int m = (n1 < n2) ? n1 : n2;
        int gcd;
        for (int i = 1; i <= m; i++){
            if ( n1 % i == 0 && n2 % i == 0)
                gcd = i;
        }
        cout<<"GCD of "<<n1<<" & "<<n2<<" is -- "<<gcd<<endl<<endl;
    }

    void CountAndSum()
    {
        cout<<"Count and Sum of Even and Odd Numbers .."<<endl<<endl;
        int n;
        cout<<"Enter a Number -- ";
        cin>>n;
        int oddSum, evenSum, oddCount, evenCount;
        oddSum = evenSum = oddCount = evenCount = 0;
        for ( ; n > 0; n /= 10){
            int temp = n % 10;
            if (temp % 2 == 0){
                evenSum += temp;
                evenCount++;
            }
            else {
                oddSum += temp;
                oddCount++;
            }
        }
       cout<<"Count of Odd Numbers -- "<<oddCount<<endl;
       cout<<"Sum of Odd Numbers -- "<<oddSum<<endl;
       cout<<"Count of Even Numbers -- "<<evenCount<<endl;
       cout<<"Sum of Even Numbers -- "<<evenSum<<endl<<endl;
    }
};

int main()
{
    Ass2 a;
    a.GCD();
    a.CountAndSum();
}
