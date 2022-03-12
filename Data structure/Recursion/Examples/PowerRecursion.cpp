// Performing Exponent power using recursion
#include<bits/stdc++.h>
using namespace std;

int power(int m,int n){
    if(n==0)
        return 1;
    return power(m,n-1)*m;
}
// When number is even or odd
int power1(int m, int n){
    if(n==0)
        return 1;
    if(n%2==0)
        return power1(m*m,n/2);
    else
        return m*power1(m*m,(n-1)/2);
}
int main(){
    int r = power(2,4);
    printf("%d ",r);
    int r1 = power1(2,9);
    printf("%d ",r1);
    
    return 0;
}