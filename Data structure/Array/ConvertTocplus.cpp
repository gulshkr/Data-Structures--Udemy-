#include<bits/stdc++.h>
using namespace std;

class Array{
    int *A;
    int size;
    int length;
public:
//Constructor
    Array(){
        size=10;
        length=0;
        A=new int[size];
    }
    Array(int sz){
        size=sz;
        length=0;
        A=new int[size];
    }
    //Destructor
    ~Array(){
        delete []A;
    }
}
int main(){
    
    return 0;
}