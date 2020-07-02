#include<conio.h>
#include<stdio.h>
void main()
{
    int a;
    printf("Enter a number :");
    scanf("%d",&a);
    if(a%7==0)
    {
        printf("%d is multiple of seven",a);
    }
    else{

        printf("%d is not a multiple of seven",a);
    }


getch();


}