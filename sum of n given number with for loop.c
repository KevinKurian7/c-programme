#include<conio.h>
#include<stdio.h>
void main()
{   int n,new_n,i,sum=0;
    printf("Enter the no of numberd: \n");
    scanf("%d",&n);
    printf("VALUE ENTERED\n");
    for(i=1;i<=n;i++)
    {   printf("Enter number to be added to sum");
        scanf("%d",&new_n);
        sum=sum+new_n;
    }
    printf("The sum is  %d ",sum);

}