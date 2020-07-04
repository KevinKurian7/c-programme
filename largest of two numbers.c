#include<conio.h>
#include<stdio.h>
void main()
{
int a,b;
printf("enter first number : \n");
scanf("%d",&a);
printf("enter second number: \n");
scanf("%d",&b);

if(a>b)
{
printf("First number %d is greater than second number %d",a,b);

}
else{
    printf("second number %d is greater than first number %d",b,a);
}
getch();


}