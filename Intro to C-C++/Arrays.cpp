#include<bits/stdc++.h>
using namespace std;
int main(){

    //->printing array individually 
    // int A[5];
    // A[0]=12;
    // A[1]=12;
    // A[2]=12;
    // A[3]=12;

    //--> Taking input from user 
    int n;
    cout<<"Enter the size";
    cin>>n;
    int A[n];
    A[0]=8;
    // int A[10]={1,2,4,5,6,8};

    // -->Using for loop accesssing array
    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<A[i]<<endl;
    // }
    
    //--> using for each loop
    for (int x:A)
    {
        cout<<x<<endl;
    }
    


    // cout<<sizeof(A)<<endl;
    // cout<<A[2]<<endl;
    // printf("%d\n",A[3]);

    return 0;
}