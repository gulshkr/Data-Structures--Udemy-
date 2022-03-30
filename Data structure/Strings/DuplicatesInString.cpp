// Finding duplicates in a string using Hashing
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     char A[]="finding";
//     int i,H[26]={0};
//     for(i=0;A[i]!='\0';i++){
//         H[A[i]-97]+=1;
//     }
//     for(i=0;i<26;i++){
//     if(H[i]>1){
//         cout<<i+97;
//         cout<<H[i]<<endl;
//     }
//     }
//     return 0;
// }


//Program to find duplicates using bitwise operators
#include<bits/stdc++.h>
using namespace std;
int main(){
    char A[]="finding";
    long int H=0,x=0;   //H is a long int because we are using bitwise operators
    int i;
    for(i=0;A[i]!='\0';i++){
        x=1;
        x=x<<(A[i]-97);
        if((x&H)>0){
            cout<<" Duplicate value is -> "<<A[i]<<" ";
        }
        else{
            H=x|H;
        }
    }
    return 0;
}