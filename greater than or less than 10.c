#include<conio.h>
#include<stdio.h>
void main()
{
int a;
printf("Enter the number : ");
scanf("%d",&a);
if(a>10){
    printf("the number is greater than 10, %d >10",a);

}
else if(a<10)
{
    printf("the number is less than 10, %d<10",a);

}
else if(a==10)
{
    printf("the number is 10 itself");

}


getch();
}