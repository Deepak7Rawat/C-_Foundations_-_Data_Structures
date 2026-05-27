#include<iostream>
#include<string>
using namespace std;

class Ass5
{
    string s;
public:
    void get(string x)
    {
        s = x;
        cout<<"Given String is - "<<s;
    }
    void showWithFunction()
    {
        cout<<"\n\nShow with function -- \n\n";
        for (int i = 0; i < s.length(); i++){
            for (int j = 1; j <= s.length()-i; j++){
                cout<<s.substr(i, j)<<" ";
            }
        }
    }
    void showWithoutFunction()
    {
        string output;
        cout<<"\n\nShow Without function -- \n\n";
        for (int i = 0; i < s.length(); i++, output = ""){
            for (int j = i; j < s.length(); j++){
                output += s[j];
                cout<<output<<" ";
            }
        }
    }
};

int main()
{
    Ass5 a;
    a.get("DOG");
    a.showWithFunction();
    a.showWithoutFunction();
}
