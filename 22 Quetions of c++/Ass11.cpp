#include<iostream>
using namespace std;

class Ass11 {
    int A[3][3], B[3][3], C[3][3];
    int R1, C1, R2, C2;
public:

    Ass11() {
        cout<<"----MATRIX MULTIPLICATION----"<<endl<<endl;
        cout<<"Enter rows of first matrix (0 - 3) - ";
        cin>>R1;
        cout<<"Enter columns of first matrix (0 - 3) - ";
        cin>>C1;
        cout<<"Enter rows of second matrix (0 - 3) - ";
        cin>>R2;
        cout<<"Enter columns of second matrix (0 - 3) - ";
        cin>>C2;

        if (isMatrixCorrect()) {
            cout<<endl;
            getElements();
            cout<<endl;
            showArrays();
            cout<<endl;
            multiplyMatrix();
        }

    }

    bool isMatrixCorrect() {
        return C1 == R2 && R1 <= 3 && R2 <= 3 && C1 <= 3 && C2 <= 3
            && R1 > 0 && R2 > 0 && C1 > 0 && C2 > 0;
    }

    void getElements() {
        cout<<"First Array: ";
        cout<<"Enter element of a "<<R1<<"x"<<C1<<" array - \n";
        for (int i = 0; i < R1; i++){
            for (int j = 0; j < C1; j++) {
                cout<<"["<<i+1<<"x"<<j+1<<"] - ";
                cin>>A[i][j];
            }
        }

        cout<<"Second Array: ";
        cout<<"Enter element of a "<<R2<<"x"<<C2<<" array - \n";
        for (int i = 0; i < R2; i++){
            for (int j = 0; j < C2; j++) {
                cout<<"["<<i+1<<"x"<<j+1<<"] - ";
                cin>>B[i][j];
            }
        }
    }

    void showArrays() {
        cout<<"First Array: "<<endl;
        for (int i = 0; i < R1; i++){
            for (int j = 0; j < C1; j++) {
                cout<<A[i][j]<<" ";
            }
            cout<<endl;
        }

        cout<<"Second Array: "<<endl;
        for (int i = 0; i < R2; i++){
            for (int j = 0; j < C2; j++) {
                cout<<B[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    void multiplyMatrix() {
        cout<<"Matrix Multiplication: "<<endl;
        for (int i = 0; i < R1; i++) {
            for (int j = 0; j < C2; j++) {
                C[i][j] = 0;
                for (int k = 0; k < R2; k++){
                    C[i][j] += A[i][k] * B[k][j];
                }
                cout<<C[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};


int main() {
    Ass11 a;
}
