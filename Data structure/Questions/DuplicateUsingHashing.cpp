//find duplicate in array element using Hashing technique
#include<bits/stdc++.h>
#define MAX_No 20;
using namespace std;
// int duplicateUsingHashing(int A[],int n){
//     for(int =0;i<n;i++){
//         H[A[i]]++;  //H - Hashing//
//     }
//     for(int i=0;i<)
// }
int main(){
    int n;
    cout<<"Enter the size of array ";
    cin>>n;
    int A[n];

        cout<<"Enter the element: ";
    for(int i=0;i<n;i++)
        cin>>A[i];

    int Hash[n]={0};
    for(int i=0;i<n;i++)
        Hash[A[i]]++;
    

    for(int i=0;i<n;i++){
        if(Hash[A[i]]==2){
        cout<<A[i];
        break;
        }
    }
    return 0;
}