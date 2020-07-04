#include<conio.h>
#include<stdio.h>
void main()
{
    int n,i=1;
    printf("enter the value of n: \n");
    scanf("%d",&n);
   
    while(i<=n)
    {
        printf("\t %d \t",i);
        i=i+2;
    }


getch();
}