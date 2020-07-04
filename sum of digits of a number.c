#include<conio.h>
#include<stdio.h>
void main()
{
    int n;
    int rem=0,nm=0;

    printf("Enter the number to be reversed:\t");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        nm=nm +rem;
        n=n/10;

    }
    printf("%d\n",nm);
}