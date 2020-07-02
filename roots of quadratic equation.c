#include<conio.h>
#include<stdio.h>
void main()
{

float d,r1,r2,a,b,c;
printf("Enter a b c in that order \n");
scanf("%f%f%f",&a,&b,&c);
d=b*b-(4*a*c);
r1=(-b + d)/2*a;
r2=(-b - d)/2*a;
if(d>0)
{
    printf("roots are real and unequal\nr1=%f\nr2=%f",r1,r2);

}
else if(d<0)
{
    printf("the roots are imaginary");

}
else{

    printf("the roots are equal r1=r2 %f=%f",r1,r2);
}





getch();

}