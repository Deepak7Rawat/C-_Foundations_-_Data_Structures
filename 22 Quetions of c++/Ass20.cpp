#include<iostream>
#include<conio.h>
using namespace std;
class Queue
{
public:
    int Queue[10];
};
class QueueOperation : public Queue
{
public:
    int Front, Rear, Maxsize;
    QueueOperation()
    {
        Front = Rear = -1;
        cout<<"Enter Size of Queue -- ";
        cin>>Maxsize;
    }
    int push()
    {
        system("cls");
        cout<<"Push in Queue Module,,\n\n";
        int DATA, PS = 0;
        cout<<"Enter Element You want to Insert -- ";
        cin>>DATA;
        if ( Front == 0 && Rear == Maxsize-1 ){
            cout<<"Queue is Overflow .. \n\n";
            return 0;
        }
        if ( Front == -1 && Rear == -1){
            Front = Rear = 0;
            Queue[Rear] = DATA;
            PS = 1;
        }
        else if ( Rear == Maxsize-1 && Front != 0){
            for( int i = Front ; i <= Rear ; i++){
                    Queue[i-1] = Queue[i];
            }
            Front = Front - 1;
            Queue[Rear]  = DATA;
            PS = 1;
        }
        else {
            Rear = Rear + 1;
            Queue[Rear] = DATA;
            PS = 1;
        }
        if ( PS == 1)
            cout<<"\n\nData Successfully Inserted..\n\n";
    }
    int Pop()
    {
        if (Front == -1 && Rear == -1){
            cout<<"Queue is Underflow/ Empty ..\n\n";
            return 0;
        }
        if (Front == Rear){
            Queue[Front] = 0;
            Front = Rear = -1;
        }
        else{
            Queue[Front] = 0;
            Front = Front + 1;
        }
    }

    int peek()
    {
        if ( Front == -1){
            cout<<"Queue is Empty .. \n\n";
            return 0;
        }
        cout<<"Queue Elements are -- \n\n";
        for( int i = Front ; i <= Rear ; i++){
            cout<<Queue[i]<<" -> ";
        }
        cout<<"\n\n";
    }
    void mainModule()
    {
        system("cls");
        cout<<"Queue Operations -- \n\n";
        cout<<"1. Push .. \n";
        cout<<"2. Pop .. \n";
        cout<<"3. Peek .. \n";
        cout<<"4. Exit \n";
        cout<<"Choose any of these..\n\n";
        char c = getch();
        if(c == '1'){
            push();
        }
        else if( c == '2'){
            Pop();
        }
        else if( c == '3'){
            peek();
        }
        else if ( c == '4'){
            exit(0);
        }
        cout<<"Do you Want to Continue press 1 else any key...\n";
        c = getch();
        if (c == '1'){
            mainModule();
        }
    }
};
int main()
{
    QueueOperation Q;
    Q.mainModule();
}
