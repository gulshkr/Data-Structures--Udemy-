#include<bits/stdc++.h>
using namespace std;

class Rectangle{
private:
    int length;
    int breadth;
public:

void initialize(int l,int b)
{
    length=l;
    breadth=b;
}

int area(){
    return length*breadth;
}
int perimeter(){     //it is a c++ program so not need to write struct as you can see
    int peri;
    peri=2*(length+breadth);

    return peri;
}
};

int main(){
    Rectangle r;   //Object (memory is allocated now)

    int l,b;
    cout<<"Enter length and breadth: "<<endl;
    cin>>l>>b;

    r.initialize(l, b);
    
    int a = r.area();
    int peri=r.perimeter();

    cout<<"Area = "<<a<<endl<<"Peri = "<<peri<<endl;
    return 0;
}