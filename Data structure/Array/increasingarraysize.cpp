//How to increase array size
#include<bits/stdc++.h>
using namespace std;

int main(){
    int *p,*q;
    int i;
    p=(int *)malloc(5*sizeof(int));
    p[0]=3;p[1]=4;p[2]=6;p[3]=8;p[4]=12;

    q=(int *)malloc(10*sizeof(int));

    for ( i = 0; i < 5; i++){
        q[i]=p[i];
    }
    free(p);
    p=q;
    q=NULL;
    
    for ( i = 0; i < 5; i++){
        printf("%d \n",p[i]);
    }
    
    return 0;
}