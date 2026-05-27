#include<iostream>
#include<string>
#include<sstream>
using namespace std;

class Ass17 {
    string s;
public:
    void getString(){
        cout<<"Enter a string with numbers - ";
        getline(cin, s);
    }
    void showSum() {
        int sum = 0, n = 0;
        for (int i = 0, j; i < s.length(); i++){
            if (isdigit(s[i])) {
                n = n * 10 + (s[i] - 48);
            }
            else {
                sum += n;
                n = 0;
            }
        }

        cout << "Total sum is - " << sum;
    }
};

int main()
{
    Ass17 a;
    a.getString();
    a.showSum();
}
