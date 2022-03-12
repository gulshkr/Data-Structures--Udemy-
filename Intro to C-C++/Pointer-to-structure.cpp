#include<bits/stdc++.h>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};
int main(){
    //struct Rectangle r={10,5};  // in c you have to write struct to access it
    // Rectangle r ={10, 5}; //In c++ you don't need to write struct to accesss it
    // cout<<r.length<<endl;
    // cout<<r.breadth<<endl;

    //for using dynamically in heap
    Rectangle *p;
    // p=(struct Rectangle *)malloc(sizeof(struct Rectangle)); //for using in c
    p=new Rectangle; // for c++ heap
    p->length=15;
    p->breadth=7;
    // in pointer to access it you need to use arrow operator
    // Rectangle *p=&r;
    cout<<p->length<<endl; 
    cout<<p->breadth<<endl;
    return 0;
}