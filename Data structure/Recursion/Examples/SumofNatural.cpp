// Sum of natural number using resursion 
#include<bits/stdc++.h>
using namespace std;\

int Recursivesum(int n){     //With recursion
    if(n==0)
    return 0;
    else
    return Recursivesum(n-1)+n;
}
int Iterativesum(int n){    // Without recursion
    int i,s=0;
    for ( i = 1; i <=n; i++)
    s=s+i;
    return s;
    
}
int main(){
    int r;
    r = Recursivesum(10);
    printf("%d\n",r);
    r = Iterativesum(5);
    printf("%d\n",r);
    return 0;
}



