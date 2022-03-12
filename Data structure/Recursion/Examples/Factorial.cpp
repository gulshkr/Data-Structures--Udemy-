// Performing factorial using recursion
#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n==0)
    return 1;
    else
    return fact(n-1)*n;
}
// Performing factorial using Iterative
int Ifact(int n){
    int f = 1;
    int i;
    for (i = 1; i <= n; i++)
    {
        f=f*i;
    }
        return f;
}

int main(){
    int r,number;
    printf("Enter the no. to get factorial: ");
    scanf("%d",&number);
    r = fact(number);
    r = Ifact(number);
    printf("factorial of %d is %d\n ",number,r);
    return 0;
}


