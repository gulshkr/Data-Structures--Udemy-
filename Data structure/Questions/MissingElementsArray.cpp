//Finding missing elements from the array usig the XOR operation
#include<bits/stdc++.h>
using namespace std;
class gulsh{
    /*missingNo function takes array and size of array as argument*/
    public:
    int missingNo(int A[],int n){
        int i;
        int x1 = A[0]; //For Xor of all the elements in array//
        int x2 = 1;  //For XOR of all the elements from 1 to n+1//

        for(i=1;i<n;i++)
            x1=x1^A[i];

        for(i=2;i<=n+1;i++)
            x2=x2^i;

        return (x1^x2);
    }
};

//Driver//
int main(){
    gulsh g;
    int A[]={1,2,4,5,6};
    int miss = g.missingNo(A,5);
    cout<<miss;
    return 0;
}