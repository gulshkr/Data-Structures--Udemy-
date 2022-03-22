#include<bits/stdc++.h>
using namespace std;
int main(){
    //1-----Uppercase to lowercase
    // char A[]="WELCOME";
    // int i;
    // for(i=0;A[i]!='\0';i++){
    //     A[i]=A[i]+32;
    // }
    // cout<<A<<endl;

    //2-----change uppercase to lowercase and lowercase to uppercase
    char A[]="Welcome";
    int i;
    for(i=0;A[i]!='\0';i++){
        if(A[i]>=65 && A[i]<=90)
            A[i]+=32;
        else if(A[i]>='a' && A[i]<=122)
            A[i]-=32;
    }
    cout<<A<<endl;
    return 0;
}