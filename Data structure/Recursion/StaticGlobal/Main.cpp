// Static and Global variab,e in Recursion
#include<bits/stdc++.h>
using namespace std;
int x = 0;  //-->Global variable
int fun(int n){
    // static int x = 0;  //-->static variable
    if(n>0){
        x++;
        return fun(n-1)+x;
        // return fun(n-1)+n;
    }
    return 0;
}

int main(){

    int r;
    r=fun(5);
    printf("%d\n",r);

    return 0;
}