#include<bits/stdc++.h>
using namespace std;

int main(){
    //<-------------2-d array------------------>
    int A[3][4]={{1,2,3},{4,5,6},{7,8,9}};
    int *B[3];
    int **C;
    int i,j;

    // for ( i = 0; i < 3; i++){
    //     for ( j = 0; j < 4; j++){
    //         printf("%d ",A[i][j]);
    //     }
    //         printf("\n"); //new line after every row so that it should be in a manner like matrix
    // }
    
    //<------2-d array using pointer--------------->
    B[0]=(int *)malloc(4*sizeof(int));
    B[1]=(int *)malloc(4*sizeof(int));
    B[2]=(int *)malloc(4*sizeof(int));
    // for ( i = 0; i < 3; i++){
    //     for ( j = 0; j < 4; j++){
    //         printf("%d ",B[i][j]);
    //     }
    //         printf("\n");  //new line after every row so that it should be in a manner like matrix
    // }

    //<---------2-d array using double pointer ----------------->
    C=(int **)malloc(3*sizeof(int *));
    C[0]=(int *)malloc(4*sizeof(int));
    C[1]=(int *)malloc(4*sizeof(int));
    C[2]=(int *)malloc(4*sizeof(int));
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 4; j++){
            printf("%d ",C[i][j]);
        }
            printf("\n");  //new line after every row so that it should be in a manner like matrix
    }
    return 0;
}

//😎😎😎😎😎😎//