//<--------------------------------------------------------------------------------->
//Call by reference and value 
// #include<bits/stdc++.h>
// using namespace std;

// struct Rectangle{
//     int length;
//     int breadth;
// };

// void fun(struct Rectangle r){
    // Variable of type structure is access using dot(.) operator
//     r.length=20;
//     cout<<"Length"<<r.length<<endl<<"Breadth"<<r.breadth<<endl;
// }

// int main(){
//     struct Rectangle r={10,5};
//     fun(r);

//     printf("Length %d \nBreadth %d\n",r.length,r.breadth);
//     return 0;
// }

//<----------------------------------------------------------------------------------------------->
//Call by address
// #include<bits/stdc++.h>
// using namespace std;

// struct Rectangle{
//     int length;
//     int breadth;
// };

// void fun(struct Rectangle *p){
//     p->length=20;
//     cout<<"length"<<p->length<<endl<<"breadth"<<p->breadth<<endl;
// }
// int main(){
//     struct Rectangle r={10,5};
//     fun(&r);

//     printf("length %d\nbreadth %d\n",r.length,r.breadth);
//     return 0;
// }

//<--------------------------------------------------------------------------------------------->
//dynamically object created in heap
#include<bits/stdc++.h>
using namespace std;
struct Rectangle{
    int length;
    int breadth;
};
struct Rectangle *fun()
{
    struct Rectangle *p;
    p=new Rectangle;
    // p={struct Rectangle *)malloc(sizeof(struct Rectangle));  ///for c using malloc to crete in heap
    p->length=15;
    p->breadth=7;

    return p;
};

int main(){
    struct Rectangle *ptr=fun();
    cout<<"length "<<ptr->length<<endl<<"breadth "<<ptr->breadth<<endl;

    return 0;
}
