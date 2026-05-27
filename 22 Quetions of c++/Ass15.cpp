#include<iostream>
using namespace std;

class Base {
public:
    int n;
    Base(int x) {
        n = x;
    }
};

class Ass15 : public Base {
public:
    Ass15(int x) : Base(x){
        int mul = 1;
        while(n > 0){
            int t = n % 10, i = 1;
            if (t != 1){
                for (i = 2; t % i != 0; i++);
            }
            if (i == t) mul *= t;

            n /= 10;
        }

        cout<<"Product of all primes in "<<x<<" is "<<mul<<endl;
    }
};

int main(){
    int n;
    cout<<"Enter a number -- ";
    cin>>n;
    if (n < 1000) {
        cout<<"Given number was less than a 4 digit number";
        return 0;
    }
    Ass15 a(n);
}
