#include<bits/stdc++.h>
using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;
    public:

    //default constructor
    Rectangle(){
        length=0;
        breadth=0;
    }
    // Parametrized constructor
    Rectangle(int l,int b){
        length=l;
        breadth=b;
    }

    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
    void setLength(int l){
        length=l;
    }
    void setBreadth(int b){
        breadth=b;
    }
    int getLength(){
        return length;
    }
    int getBreadth(){
        return breadth;
    }
    // Destructor
    ~Rectangle(){
        cout<<"Destructor";
    }
};
int main(){
    Rectangle r(10,5);

    cout<<"Area: "<<r.area()<<endl;
    cout<<"Perimeter: "<<r.perimeter()<<endl;

    return 0;
}