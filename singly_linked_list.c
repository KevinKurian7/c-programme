#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node* next;
};

struct node* head=NULL;
void insertathead(int x )
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=head;
    head=temp;

}

void insert_at_end(int x)
{   struct node* temp=(struct node*)malloc(sizeof(struct node));
   
   if(head==NULL)
   {
        temp->data=x;
        temp->next=head;
       head=temp;
       return;
   } 
    temp->data=x;
    temp->next=NULL;
   struct node* ptr=head;
   while(ptr->next!=NULL)
   {
       ptr=ptr->next;

   }
    ptr->next=temp;
}

void print()
{
    struct node* temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void insert_at_n(int x,int n)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=NULL;
    if(n==1)
    {
        temp->next=head;
        head=temp;
        return;
    }
    struct node* temp1;
    temp1=head;
    for(int i=0;i<n-2;i++)
    {
        temp1=temp1->next;

    }
    temp->next=temp1->next;
    temp1->next=temp;

}
void delete_nthlink(int n)
{
    int i;
    struct node* temp1=head;
    for(i=0;i,n-2;i++)
    {
        temp1=temp1->next;

    }
    struct node* temp2=temp1->next;
    temp1->next=temp2->next;
    free(temp2);
}
void reverse()
{
    struct node* current,*prev,*next;
    current=head;
    prev=NULL;
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;

    } 
    head=prev;
}
int  main()
{
    insertathead(9);    print();
    insert_at_end(92);print();
    insert_at_n(123,2);print();
    insertathead(7);    
    print();
    delete_nthlink(2);
    print();
    reverse();
    print();
    return 0;
}
