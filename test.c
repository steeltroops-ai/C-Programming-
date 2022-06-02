#include<stdio.h>

/*
void sum(void);
void main(){
    sum();
    sum();
    sum();
}
void sum(){
    int a=5,b=6;
    int c =a+b;
    printf("%d\n",c);
}
*/
void sum(int,int);
void main(){
    int a,b;
    printf("Enter a&b  \n");
    scanf("%d%d",&a,&b);
    int c=sum(a,b);printf("%d\n",c);
    sum(5,6);printf("%d\n",c);
    sum(a,5);printf("%d\n",c);
    sum(5,b);printf("%d\n",c);
}


//Homework
//void pointer 
//Null pointer pointer
//Danglin Pointer
//Dynamic memory allocation
