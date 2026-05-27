#include<iostream>
#include<math.h>
using namespace std;

class Ass14 {
public:
    Ass14(string s) {
        int decimal = 0;
        for (int i = 0; i < s.length(); i++){
            decimal += ((int)(s[s.length() - 1 - i])-48) * pow(2,i);
        }
        cout<<"Decimal of "<<s<<" is -- "<<decimal<<endl;
    }
};

int main(){
    string binary;
    cout<<"Enter a binary number -- ";
    cin>>binary;
    Ass14 a(binary);
}
