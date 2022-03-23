// 1-st methid to chnage reverse the element in a string using Other array (Copying the elemwnt in the other Array B[])
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     char A[]="HelloGulsh";
//     char B[11];
//     int i,j;
//     for(i=0;A[i]!='\0';i++){

//     }
//     i=i-1;
//     for(j=0;i>=0;i--,j++){
//         B[j]=A[i];
//     }
//     B[j]='\0';
//     cout<<"Reversed element is "<<B<<endl;
//     return 0;
// }

//2-----------mrthod to reverse the element in the string without using array(using temp variable and using the same array)
#include<bits/stdc++.h>
using namespace std;
int main(){
    char A[] ="GulshHello";
    char temp;  // You can take t as temporary variable
    int i,j;
    for(j=0;A[j]!='\0';j++){

    }
    j=j-1;
    for(i=0;i<j;i++,j--){
        temp=A[i];
        A[i]=A[j];
        A[j]=temp;
    }
    cout<<"Revesed element is "<<A<<endl;
    return 0;
}