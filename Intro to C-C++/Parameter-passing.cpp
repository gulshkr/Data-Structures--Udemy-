//<------------------Parameter passing--------------------->
// 1.) Call by value - actual parameter will not change but the formal patameter will change
// #include<bits/stdc++.h>
// using namespace std;
// int add(int a,int b){
//     // int c;
//     // c=a+b;

//     a++;
//     cout<<a<<endl;
//     return 0;
// }
// int main(){
//     int num1=10,num2=15,sum;
//     sum=add(num1,num2);
//     cout<<num1;
//     return 0;
// }

//<------------------------------------------------------------------------------------------------>

//Call by address(it uses pointer and access another function inditrectly)
// #include<bits/stdc++.h>
// using namespace std;
// void swap(int *x, int *y){
//     int temp;
//     temp=*x;
//     *x=*y;
//     *y=temp;
// }

// int main(){
//     int num1=12,num2=11;
//     swap(&num1, &num2);
//     cout<<"First number is "<<num1<<endl;
//     cout<<"Second number is "<<num2<<endl;

//     return 0;
// }

//<-------------------------------------------------------------------------------------------->

//Call by referernce(It is nothing but just anotehr name to the variable)
#include<bits/stdc++.h>
using namespace std;
void swap(int &x, int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}

int main(){
    int num1=12,num2=11;
    swap(num1, num2);
    cout<<"First number is "<<num1<<endl;
    cout<<"Second number is "<<num2<<endl;

    return 0;
}