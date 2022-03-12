//Performing tree recursion : as you can see at line no 8 and 9 we are calling the function again and again so this is tree recursion//
#include<bits/stdc++.h>
using namespace std;

void fun(int n){
    if(n>0){
        printf("%d ",n);
        fun(n-1);
        fun(n-1);
    }
}
int main(){
    fun(3);
    return 0;
}