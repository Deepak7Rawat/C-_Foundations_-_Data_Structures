#include<iostream>
using namespace std;

class Ass9 {
    int N;
    int arr[15];
public:
    bool validArray = true;
    Ass9() {
        cout<<"Enter size of Array (1-10): ";
        cin>>N;
        if (N <= 0 || N > 10){
            cout<<"Invalid Size of Array...";
            validArray = false;
            return;
        }
        cout<<endl<<"Enter "<<N<<" elements of array: \n";
        for (int i = 0; i < N; i++){
            cout<<"Element ["<<i+1<<"] - ";
            cin>>arr[i];
        }
        cout<<endl;
    }
    void insertElement(){
        int value, pos;
        cout<<"Enter a number to insert in array -- ";
        cin>>value;
        cout<<"Enter the position to insert the data at (0 - "<<N<<") -- ";
        retry:
        cin>>pos;

        if (pos < 0 || pos > N){
            cout<<"Invalid index..."<<endl;
            cout<<"Enter valid index (0 - "<<N<<") -- ";
            goto retry;
        }

        for (int i = N; i > pos; i--){
            arr[i] = arr[i-1];
        }
        arr[pos] = value;
        N++;
        cout<<endl;
    }
    void showArray(){
        cout<<"Array is - ";
        for (int i = 0; i < N; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl<<endl;
    }
};

int main(){
    Ass9 a;
    if (a.validArray){
        a.showArray();
        a.insertElement();
        a.showArray();
    }
}
