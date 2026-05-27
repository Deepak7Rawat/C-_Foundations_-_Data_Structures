#include<iostream>
#include<string>
using namespace std;

class Ass16{
    string pass;
    bool uc, lc, ss, pl, dig, sp;
public:
    void get(){
        cout<<"Enter Password - ";
        getline(cin, pass);
        uc = lc = ss = pl = dig = sp = false;
        pl = (pass.length() >= 8);
    }
    void check(){
        for (int i = 0; i < pass.length(); i++){
            if (isupper(pass[i])) uc = true;
            else if (islower(pass[i])) lc = true;
            else if (isdigit(pass[i])) dig = true;
            else if (ispunct(pass[i])) ss = true;
            else if (isspace(pass[i])) sp = true;
        }

        if (uc && lc && ss && pl && dig && !sp){
            cout << "Perfect Password" << endl;
        }
        else {
            cout << "Not a Perfect Password" << endl;
        }
    }
};

int main()
{
    Ass16 a;
    a.get();
    a.check();
}

