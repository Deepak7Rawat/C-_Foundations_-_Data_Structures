#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Ass13 {
    string name;
public:
    void get (){
        cout<<"Enter A Name -- ";
        getline(cin, name);
    }
    void showPattern(){
        cout<<"Star in front of Alphabet on their position - "<<endl<<endl;
        for (int i = 0; i < name.length(); i++){
            if (name[i] == ' ') continue;
            int p = toupper(name[i])-64;
            cout<<name[i]<<" - "<<setw(p)<<"*"<<endl;
        }
    }
};

int main(){
    Ass13 a;
    a.get();
    a.showPattern();
}
