#include<conio.h>
#include<stdio.h>
void main()
{
 int n,i;
 printf("enter the value of n : \n");
 scanf("%d",&n);
 i=n;
 while(i>0)
 {
     printf("%d\t",i);
     i--;
 }
getch();
}