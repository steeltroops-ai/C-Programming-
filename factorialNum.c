#include <stdio.h>
int main(){
    int n,i,fact=1;
    printf("Enter the number n :");
    scanf("%d",&n);

    for (i=1;i<n;i++){
    fact=fact*i;
    }
    printf("the factorial of the number is %d",fact);
    return 0;
}