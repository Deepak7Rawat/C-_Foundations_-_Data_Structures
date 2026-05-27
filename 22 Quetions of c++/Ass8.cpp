#include<iostream>
using namespace std;

class Ass8 {
    int arr[10];
public:
    void getData(){
        cout<<"Enter 10 elements of array: \n\n";
        for (int i = 0; i < 10; i++){
            cout<<"Element ["<<i+1<<"] - ";
            cin>>arr[i];
        }
    }
    void showSecondMaximum(){
        int max1 = arr[0], max2 = arr[0];
        for (int i = 0; i < 10; i++){
            if (arr[i] > max1){
                max2 = max1;
                max1 = arr[i];
            }
            else if (arr[i] > max2 && arr[i] < max1)
                max2 = arr[i];
        }

        cout<<"Second maximum is - "<<max2;
    }
};

int main(){
    Ass8 a;
    a.getData();
    a.showSecondMaximum();
}
