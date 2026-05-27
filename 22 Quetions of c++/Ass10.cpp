#include<iostream>
#include<conio.h>
using namespace std;

class Ass10 {
public:
    static void showArray(int arr[], int length){
        cout<<"Array is - ";
        for (int i = 0; i < length; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl<<endl;
    }
    static void selectionSort(int arr[], int length){
        int temp;
        for (int i = 0; i < length; i++){
            for (int j = i+1; j < length; j++){
                if (arr[i] > arr[j]){
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
    static void bubbleSort(int arr[], int length){
        int temp;
        for (int i = 0; i < length-1; i++){
            for (int j = 0; j < length-1; j++){
                if (arr[j] > arr[j+1]){
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }
};

int main(){
    int arr[10];

    cout<<"Enter 10 elements for array -- \n";
    for (int i = 0; i < 10; i++){
        cout<<"Element ["<<i+1<<"] - ";
        cin>>arr[i];
    }

    Ass10::showArray(arr, 10);

    cout<<"Select a algorithm to sort...\n";
    cout<<"1. Selection Sort\t2. Bubble Sort\n";
    char c = getch();

    switch(c){
        case '1':
            cout<<"Sorting Array through Selection Sort...\n\n";
            Ass10::selectionSort(arr, 10);
            break;
        case '2':
            cout<<"Sorting Array through Bubble Sort...\n\n";
            Ass10::bubbleSort(arr, 10);
            break;
        default:
            cout<<"You selected invalid option\n\n";
            break;
    }

    Ass10::showArray(arr, 10);
}
