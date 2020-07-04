#include<conio.h>
#include<stdio.h>
void main()
{
    int i,j,n;
    printf("enter number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {for(int k=1;k<i;k++)
    {
        printf(" ");
    }
        for(j=i;j<=n;j++)
        {

            printf("*");

        }
        printf("\n");
        
    }

}