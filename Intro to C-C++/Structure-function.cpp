#include<bits/stdc++.h>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

void initialize(struct Rectangle *r,int l,int b)
{
    r->length=l;
    r->breadth=b;
};

int area(struct Rectangle r){
    return r.length*r.breadth;
}
int perimeter(Rectangle r){     //it is a c++ program so not need to write struct as you can see
    int peri;
    peri=2*(r.length+r.breadth);

    return peri;
}
int main(){
    Rectangle r={0,0};

    int l,b;
    cout<<"Enter length and breadth: "<<endl;
    cin>>l>>b;

    initialize(&r, l, b);
    
    int a = area(r);
    int peri=perimeter(r);

    cout<<"Area = "<<a<<endl<<"Peri = "<<peri<<endl;
    return 0;
}