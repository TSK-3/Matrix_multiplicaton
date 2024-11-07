#include<stdio.h>

int main() {
    int m,n,p,q;

    printf("Enter the order of the matrix A :");
    scanf("%d%d",&m,&n);
    printf("Enter the order of the matrix B :");
    scanf("%d%d",&p,&q);

    if(n!=p){
        printf("Matrix multiplication is not compatible");
    }
    else
    printf("Enter the values for matrix A : ");

    int mat_a[m][n];
    int mat_b[p][q];
    int res[m][q];

    for( int i =0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat_a[i][j]);
        }
    }

    printf("Enter the values of matrix B :");

    for(int i=0;i<p;i++) {
        for(int j=0;j<q;j++){
            scanf("%d",&mat_b[i][j]);
        }
    }



    for(int i =0;i<m;i++){
        for(int j=0;j<q;j++){
            res[i][j] = 0;

            for(int k=0;k<n;k++) {
                res[i][j] += mat_a[i][k] *mat_b[k][j];
            }
        }
    }

    for(int i =0;i<m;i++){
        for(int j=0;j<q;j++){
            printf("%d",res[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}