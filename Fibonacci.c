#include<stdio.h>
int fibonacci_term(int n){
    int a=0,b=1,c;
    for(int i=1; i<n; i++){
        c=a+b;
        a=b;
        b=c;
    }
    return a;
}
int main(){
    int term(){
        int term, result;
        printf("ENter term to find: ");
        scanf("%d",&term);
        result=fibonacci_term(term);
        printf("\nThe Fibonacci term is: %d",result);
    }
    return 0;
}