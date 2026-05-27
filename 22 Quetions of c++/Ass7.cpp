#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;

class Ass7
{
    string s;
public:
    void get(string x)
    {
        s = x;
        cout<<"Given string is -- "<<s<<endl<<endl;
    }
    void reverseStringOnPostiionWithFun()
    {
        string s1 = "", out = "";
        cout<<"Show Data in Reverse On Position - \n\n";
        stringstream x(s);
        while (x >> s1){
            reverse(s1.begin(), s1.end());
            out += s1 + " ";
        }
        cout<<"After Reverse Operation -- \n-> "<<out<<endl<<endl;
    }
    void reverseStringOnPositionWithoutFun()
    {
        string s1 = "", out = "";
        cout<<"Show Data in Reverse On Position Without Using Function - \n\n";
        stringstream x(s);
        while (x >> s1){
            for (int i = s1.length()-1; i >= 0; i--){
                out += s1[i];
            }
            out += " ";
        }
        cout<<"After Reverse Operation -- \n-> "<<out<<endl<<endl;
    }
    void reverseStringOnPositionWithoutFunPure()
    {
        string s1 = "", out = "";
        cout<<"Show Data in Reverse On Position Without Using Function (Pure) - \n\n";
        for (int i = 0; i < s.length(); i++){
            if (s[i] != ' ') {
                s1 = s[i] + s1;
                if (i == s.length()-1)
                    out += s1;
            }
            else {
                out += s1 + " ";
                s1 = "";
            }
        }
        cout<<"After Reverse Operation -- \n-> "<<out<<endl<<endl;
    }
};

int main()
{
    Ass7 a;
    a.get("Hello World!");
    a.reverseStringOnPostiionWithFun();
    a.reverseStringOnPositionWithoutFun();
    a.reverseStringOnPositionWithoutFunPure();
}
