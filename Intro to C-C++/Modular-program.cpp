#include<bits/stdc++.h>
using namespace std;

int area(int length,int breadth){
    return length*breadth;
}
int perimeter(int length,int breadth){
    int peri;
    peri=2*(length+breadth);

    return peri;
}
int main(){
    int length=0,breadth=0;

    cout<<"Enter length and breadth: "<<endl;
    cin>>length>>breadth;

    int a = area(length,breadth);
    int peri=perimeter(length,breadth);

    cout<<"Area = "<<a<<endl<<"Peri = "<<peri<<endl;
    return 0;
}