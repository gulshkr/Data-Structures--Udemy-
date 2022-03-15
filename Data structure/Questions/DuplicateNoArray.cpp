//Implement to find the duplicate no in the array//
#include<bits/stdc++.h>
using namespace std;
int duplicateNo(int A[],int n){
for(int i=0;i<n-1;i++){
    if (A[i]==A[i+1]){
        int j=i+1;
        while(A[j]==A[i])j++;
        printf("%d is appearing %d times\n",A[i],j-1);
        i=j-1;
    }
}
}
int main(){
    int A[]={1,2,4,4,5,6,6};
    int dup= duplicateNo(A,7);
    printf("Duplicate no is: ",dup);
    return 0;
}