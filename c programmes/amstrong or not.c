#include<conio.h>
#include<stdio.h>
void main()
{
    int n,new_n;
    int rem=0,nm=0;

    printf("Enter the number to be reversed:\t");
    scanf("%d",&n);
    new_n=n;
    
    while(n>0)
    {
        rem=n%10;
        nm=nm + rem*rem*rem;
        n=n/10;

    }

    
    if(new_n==nm)
    {
        printf("\n\tTHE NUMBER IS AMSTRONG");
    }
    else{
        printf("\n\tTHE NUMBER IS NOT AMSTRONG");
    }
}