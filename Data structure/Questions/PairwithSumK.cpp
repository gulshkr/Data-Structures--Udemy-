// Find a pair of sum K (Like a+b = k) e.g 7+3 =10,8+2=10.....//
// #include<bits/stdc++.h>
// using namespace std;
// int pairOfSumK(int A[],int n,int k){
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(A[i]+A[j]==k){
//             cout<< "pair of "<<A[i] <<" And "<<A[j]<<" of sum " <<k<<endl;
//             }
//         }
//     }
//     return 0;
// }
// int main(){
//     int A[]={1,6,3,8,10,7,5,2,9,14};
//     int k= 10;
//     int n=sizeof(A)/sizeof(A[0]);
//     if(pairOfSumK(A,n,k)){
//         cout<<"Valid pair exists"<<endl;
//     }
//     else{
//         cout<<"Valid pair not present"<<k<<endl;
//     }
//     return 0;
// }


// Find a pair of sum K using hqashing method(Like a+b = k) e.g 7+3 =10,8+2=10.....//
#include<bits/stdc++.h>
using namespace std;

int pairOfSumKHash(int A[],int n,int k){
    int H[]={0};
    for(int i=0;i<n;i++){
        if(H[k-A[i]]!=0){
            cout<< "pair of "<<A[i] <<" And "<<k-A[i]<<" of sum " <<k<<endl;
        }
    }
    return 0;
}
int main(){
    int A[]={1,6,3,8,10,7,5,2,9,14};
    // int H[]={0};
    int k= 10;
    int n = sizeof(A)/sizeof(A[0]);
    if(pairOfSumKHash(A,n,k)){
        cout<<"Valid pair exists"<<endl;
    }
    else{
        cout<<"Valid pair not present for sum "<<k<<endl;
    }
    return 0;
}