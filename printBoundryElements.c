#include <stdio.h>
int main(){
    int i,j,m,n,sum=0;
    printf("Enter the row and column of matrix");
    scanf("%d%d",&m,&n);
    int a[m][n];
    printf("Enter the array: ");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

//Boundary Matrix
    printf("\nBoundary Matrix:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(i==0 || j==0  || i==m-1 || j==n-1){
            printf("%d ",a[i][j]);
            sum=sum+a[i][j];
            }
            else
            printf("  ");
        }
        printf("\n");
    }
    printf("\nSum of Boundaries = %d",sum);
}