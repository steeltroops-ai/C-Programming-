#include <stdio.h>
int main(){
    int arr[2][3];
    int i,j;
    printf("Enter the matrix:");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    //Displaying array elements
    printf("Two dimensional array elements:\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d ",arr[i][j]);
            if(j==2){
                printf("\n");
            }
        }
    }
    return 0;
}