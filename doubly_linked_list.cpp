#include <iostream>
#include <stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node* head = NULL;
void insert_at_head(int x);
struct node *getnewnode(int x);
void print();
void reverseprint();
void insert_at_tail(int x);

int main()
{
    int x;
    int choice;
    char c = 'y';
    do
    {
        cout << "1.inser at head\n2,print\n3.reverseprint\n4.insert at tsil\n5.exit\n";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout<<"nter the item you wish to enter";
                cin>>x;
                insert_at_head(x);
                break;
            case 2:
                print();
                break;
            case 3:
                reverseprint();
                break;
            case 4:
                cout<<"enter the number you wish to insert at tail";
                cin>>x;
                insert_at_tail(x);
                break;
            case 5:
                exit(0);
                break;    

            default:
                cout<<"wrong choice";        
                break;
        }
        cout << "do you wsih to do again enter y or Y:  ";
        cin >>c;
    }
     while (c == 'y' or c == 'Y');

    return 0;
}


void insert_at_head(int x){
    node* newnode=new node();
    newnode->data=x;
    newnode->next=NULL;
    newnode->prev=NULL;

    if(head==NULL){
        head=newnode;
        return;
    }
    head->prev=newnode;
    newnode->next=head;
    head=newnode;
}


void print(){
    node* temp=head;
    cout<<"forward here";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"\n";
}

void reverseprint(){
    node*temp=head;
    if(temp==NULL){
        return;
    }
    while(temp->next!=NULL){
            temp=temp->next;
    }
    cout<<"reverse";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->prev;
    }
    cout<<"\n";
}

void insert_at_tail(int x){
    node* newnode=new node();
    newnode->data=x;
    newnode->next=NULL;
    newnode->prev=NULL;

    if(head==NULL){
        head=newnode;
        return;
        
    }
    node* temp=head;
    while(temp->next!=NULL){
 
        temp=temp->next;
    }
       temp->next=newnode;
   
    newnode->prev=temp;
    
 

}
