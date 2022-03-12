#include<bits/stdc++.h>
using namespace std;

int main(){
    int A[10]={2,4,6,8,19};
    int *p;
    int i;

    p=(int *)malloc(5*sizeof(int));
    p[0]=3;
    p[1]=4;
    p[2]=2;
    p[3]=6;
    p[4]=10;

    for ( i = 0; i < 5; i++){
        printf("%d ",A[i]);
    }
    printf("\n");
    for ( i = 0; i < 5; i++){
        printf("%d ",p[i]);
    }
    
    return 0;
}