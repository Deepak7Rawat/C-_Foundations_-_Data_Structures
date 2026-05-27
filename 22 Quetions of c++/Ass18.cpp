#include<iostream>
#include<string>
using namespace std;

class Ass18 {
public:
    int n, t, l;
    void get(){
        cout << "Enter a Number -- ";
        cin>>n;
        t = n;
        l = to_string(n).length();
    }
    void swapData(){
        int arr[l];
        for (int i = l-1; i >= 0; i--, t/=10){
            arr[i] = t % 10;
        }
        for (int i = 0; i < l-1; i+=2){
            int x = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = x;
        }
        t = 0;
        for (int i = 0; i < l; i++){
            t = (t * 10) + arr[i];
        }
    }
    void showData(){
        cout<<"Before swap -- "<<n<<endl<<endl;
        cout<<"After swap -- "<<t<<endl<<endl;
    }
};

int main(){
    Ass18 a;
    a.get();
    a.swapData();
    a.showData();
}
