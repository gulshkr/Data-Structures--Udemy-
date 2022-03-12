#include<bits/stdc++.h>
using namespace std;
int main(){
    //Pointer
    // int a;
    // //Taking user input
    // cout<<"Enter the number"<<endl;
    // cin>>a;
    // int *p;
    // p=&a;
    // cout<<a<<endl;
    // printf("using pointer %d",*p);

    //-->Pointer to an array
    // int A[5]={2,3,5,6,8};
    int *p;
    // p=&A;  
    // p=(int *)malloc(5*sizeof(int));  //-->using heap(in C prog)
    p=new int[5]; //-->dynamically created memory in heap (in C++)

    p[0]=10;p[1]=12;p[2]=13;p[3]=14;p[4]=15;
    for (int i = 0; i < 5; i++)
    {
        cout<<p[i]<<endl;
    }
    delete [] p;  //--> we need to free memory when using in heap (Deallocated in C++)
    free(p); //-->we need to free memory when using in heap (Deallocated in C)


    return 0;
}