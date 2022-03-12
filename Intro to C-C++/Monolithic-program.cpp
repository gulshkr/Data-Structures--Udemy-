#include<bits/stdc++.h>
using namespace std;
int main(){
    float length=0,breadth=0,area,peri;

    //for c
    // printf("Enter the length and breadth: ");
    // scanf("%f\n %f\n",&length,&breadth);

    cout<<"Enter the Length and Breadth: "<<endl;
    cin>>length>>breadth;

    area=length*breadth;
    peri=2*(length+breadth);

    // printf("Area=%d\nPerimeter=%d\n",area,peri);

    cout<<"Area = "<<area<<endl<<"Peri = "<<peri<<endl;
    return 0;
}