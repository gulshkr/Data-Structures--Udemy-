#include<bits/stdc++.h>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
    char x;
};
//even you can declare struct here also like the global function
// {
//     int length;
//     int breadth;
// }r1;

//->Declaring struct outside the main function 
// struct Rectangle r1;

int main(){
    //-> declaring struct inside the main function
    struct Rectangle r1={10,5};

    r1.length=14;
    r1.breadth=4;
    
    cout<<r1.length<<endl;
    cout<<r1.breadth<<endl;
    return 0;
}