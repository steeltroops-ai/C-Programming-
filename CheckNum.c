#include<stdio.h>
int main(){
    int num;
    printf("Enter the Number :");
    scanf("%d",&num);
    if(num==0){
        printf("Num is Zero");
    }
    else if (num>0){
        printf("Num is a Positive number");
    }
    else if (num<0){
        printf("Num is a Negative Number");
    }
}