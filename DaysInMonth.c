#include <stdio.h>
int main(){
    int month;
    printf("Enter Number of month:");
    scanf("%d",&month);

    switch(month) {
        case 1: printf("Total number of days in January : 31"); break;
        case 2: printf("Total number of days in February : 28"); break;
        case 3: printf("Total number of days in March : 31"); break;
        case 4: printf("Total number of days in April : 30"); break;
        case 5: printf("Total number of days in May : 31"); break;
        case 6: printf("Total number of days in June : 30"); break;
        case 7: printf("Total number of days in July : 31"); break;
        case 8: printf("Total number of days in August : 31"); break;
        case 9: printf("Total number of days in September : 30"); break;
        case 10: printf("Total number of days in October : 31"); break;
        case 11: printf("Total number of days in November : 30"); break;
        case 12: printf("Total number of days in December : 31"); break;
        default: printf("Enter the correct number of month.\nPlease give input again."); break;
    }
}