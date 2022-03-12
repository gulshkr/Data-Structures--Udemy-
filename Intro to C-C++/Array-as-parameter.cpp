// #include<bits/stdc++.h>
// using namespace std;
// //Arrays are always passed by address never passed by value
// void fun(int *A,int n){    //you can also write int A[] as *A
//     // cout<<sizeof(A)/sizeof(int)<<endl;
//     // for (int i = 0; i < n; i++)
//     // cout<<A[i]<<endl;
//     A[0]=12;          //Whatever element you change here it will change in the actual parameter (this is call by address or pass by address)
    
    
// }
// int main(){
//     int A[ ]={2,3,5,6,8};
//     int n=5;
//     fun(A,n);
//     for(int x:A)
//     cout<<x<<" ";
//     return 0;
// }

// Dynammic Array
#include<bits/stdc++.h>
using namespace std;

int *fun(int size){
    int *p;
    p=new int(size);
    for (int i = 0; i < size; i++)
    p[i]=i+1;

    return p;
}
int main(){
    int *ptr,sz=5;
    ptr=fun(sz);
    for (int i = 0; i < sz; i++)
    cout<<ptr[i]<<endl;
    
    return 0;
}