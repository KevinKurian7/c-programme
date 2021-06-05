//array implementation
#include<iostream>
using namespace std;
#define MAX_SIZE 10
int top=-1;
void push(int array[],int x);
void pop(int array[]);
void seek(int array[]);
void isEmpty(int array[]);
int main(){
    int array[MAX_SIZE];
    char c;
    int x;
    int choice;
    do{
        cout<<"1.push\n2.pop\n3.top\n4.isEmpty\n5.exit";
        cout<<"\nenter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"enter value of x:    ";
                cin>>x;
                push(array,x);
                break;
            case 2:
                pop(array);
                break;
            case 3:
                seek(array);
                break;
            case 4:
                isEmpty(array);
                break;
            case 5:
                exit(0);
                break;    
            default:
                cout<<"wrong choice\n";
                break;                
        }
        cout<<"if you want to do that again enter  y or Y:  ";
        cin>>c;

    }while(c=='y'||c=='Y');
    return 0;
}
void push(int array[],int x){
    if(top==MAX_SIZE-1){
        cout<<"overflow\n";return;
    }
    else{
        array[++top]=x;
    }
}
void pop(int array[]){
    if(top==-1){
        cout<<"the stack is empty\n";
        return;
    }
    else{
        top--;
    }
}
void seek(int array[]){
    cout<<array[top];
}
void isEmpty(int array[]){
    if(top==-1){
        cout<<"the stack is empty\n";
        }
    else{
        cout<<"The stack is not empty\n";
    }
}