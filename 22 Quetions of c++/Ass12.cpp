#include<iostream>
#include<string>
using namespace std;

class Ass12 {
    int n;
    string s;
public:
    void get(){
        cout<<"Enter a Number -- ";
        cin>>n;
        s = to_string(n);
    }
    void printPattern(){
        string t = "";
        cout<<"\nSeries is -- \n\n";
        for (int i = 0; i < s.length(); i++){
            for (int j = i; j < s.length(); j++){
                t = t + s[j];
                cout<<t<<" ";
            }
            t = "";
        }
    }
};

int main(){
    Ass12 a;
    a.get();
    a.printPattern();
}
