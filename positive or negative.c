#include<conio.h>

#include<stdio.h>
void main(){
int a;
printf("Enter the first number :");
scanf("%d",&a);
if(a>0){
    printf("%d is positive",a);

}
elseif(a<0){

    printf("%d is negative",a);

}
else{
    print("the number is zero");
}
getch();


}