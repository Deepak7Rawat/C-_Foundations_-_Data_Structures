#include<iostream>
#include<string>
#include<sstream>
using namespace std;

class Ass6
{
    string s;
public:
    void get(string x)
    {
        s = x;
        cout<<"Given String is - "<<s<<endl<<endl;
    }
    void showWithFunction()
    {
        string output, temp;
        for (int i = 0; i < s.length(); i++){
            temp += s[i];
            if (s[i] == ' '){
                output = temp.append(output);
                temp.clear();
            }
            if (i == s.length() - 1)
                output = temp.append(" " + output);
        }
        cout<<"Output With String Function:\n\n-->  "<<output<<endl<<endl;
    }
    void showWithoutFunction()
    {
        string output, temp;
        for (int i = 0; i < s.length(); i++){
            temp += s[i];
            if (s[i] == ' '){
                output = temp + output;
                temp = "";
            }
            if (i == s.length() - 1)
                output = temp + " " + output;
        }
        cout<<"Output Without Using String Function:\n\n-->  "<<output<<endl<<endl;
    }
    void showWithStringStream()
    {
        string output, temp;
        stringstream x(s);
        while (x >> temp){
            output = temp + " " + output;
        }
        cout<<"Output Using String Stream:\n\n-->  "<<output<<endl<<endl;
    }
};

int main()
{
    Ass6 a;
    a.get("Hello World!");
    a.showWithFunction();
    a.showWithoutFunction();
    a.showWithStringStream();
}
