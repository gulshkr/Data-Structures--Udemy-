// #include<bits/stdc++.h>
// using namespace std;

// struct Array{
//     int *A;
//     int size;
//     int length;
// };
// //Display function
// void Display(struct Array arr){
//     int i;
//     printf("\nElements are\n");
//     for ( i = 0; i < arr.length; i++)
//     {
//         printf("%d ",arr.A[i]);
//     }
    
// }
// //Insrt at the end of the index
// void InsertEnd(struct Array *arr,int x){
//     if(arr->length<arr->size)
//     arr->A[arr->length++]=x;
// }

// void Insert(struct Array *arr,int index,int x){
//     if(index>=0 && index <=arr->length){
//     for (int i = arr->length; i > index; i--)
//         arr->A[i]=arr->A[i-1];
//         arr->A[index]=x;
//         arr->length++;
    
//     }
// }
// int main(){
//     struct Array arr;
//     int n,i;
//     printf("Enter the size of te array: ");
//     scanf("%d",&arr.size);
//     arr.A=(int *)malloc(arr.size*sizeof(int));
//     arr.length=0;

//     printf("Enter the total numbers you want to stored ");
//     scanf("%d",&n);

//     printf("Enter all elements\n");
//     for ( i = 0; i < n; i++)
//         scanf("%d",&arr.A[i]);
//         arr.length=n;
//     InsertEnd(&arr,10);
//     Insert(&arr,6,13);
//     Display(arr);
    
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int findMissingNo (int A[], int n){
   int s;  
   s  = ((n+1)*(n+2))/2;  
   for (int i = 0; i<n; i++)    
      s -= A[i];  
   return s;
}
int main() {
   int n;   
   cout<<"Enter the size of array: "; 
   cin>>n;    
   int A[n-1];  
   cout<<"Enter array elements: ";   
   for(int i=0; i<n; i++){    
      cin>>A[i];  
   } 
   int missingNo = findMissingNo(A,11); 
   cout<<"Missing Number is: "<<missingNo;
   return 0;
}