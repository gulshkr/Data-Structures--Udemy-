#include<bits/stdc++.h>
using namespace std;

struct Array{
    // int *A;
    int A[20];
    int size;
    int length;
};

void Display(struct Array arr){
    int i;
    printf("\nElements are\n");
    for ( i = 0; i < arr.length; i++){
        printf("%d ",arr.A[i]);
    }
    
}
void InsertAtEnd(struct Array *arr,int x){
    if(arr->length<arr->size)
        arr->A[arr->length++]=x;
}
void Insert(struct Array *arr,int index,int x){
    if(index>=0 && index <=arr->length){
        for(int i=arr->length;i>index;i--)
            arr->A[i]=arr->A[i-1];
        arr->A[index]=x;
        arr->length++;
    }
}
int main(){
    struct Array arr={{2,3,4,6,5},20,5};
    InsertAtEnd(&arr,10);
    Insert(&arr,3,20);
    Display(arr);
    return 0;
}