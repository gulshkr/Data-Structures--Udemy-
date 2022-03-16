//Implement to find the duplicate no in the array//
// #include<bits/stdc++.h>
// using namespace std;
// int duplicateNo(int A[],int n){
// for(int i=0;i<n-1;i++){
//     if (A[i]==A[i+1]){
//         int j=i+1;
//         while(A[j]==A[i])j++;
//         printf("%d is appearing %d times\n",A[i],j-1);
//         i=j-1;
//     }
// }
// }
// int main(){
//     int A[]={1,2,4,4,5,6,6};
//     int dup= duplicateNo(A,7);
//     printf("Duplicate no is: ",dup);
//     return 0;
// }

//*********finding duplicates in the given array**********//
#include<bits/stdc++.h>  //universal header lib//
#define MAX_size 20;  //macros//
using namespace std;
int duplicateNo(int A[],int n){
    int count =0;
    //Input size of array
    printf("Enter the size of array: ");
    scanf("%d",&n);

    // Input element array
    printf("Enter any %d elements in array: ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(A[i]==A[j]){
                count++;
                printf("Duplicates  %d is: ",count);    
                printf("%d\n",A[i]);
            }
        }
    }
}
int main(){
    int A[20],n,i;
    int dup =duplicateNo(A,n);
    return 0;
}