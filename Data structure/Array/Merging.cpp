#include <bits/stdc++.h>
using namespace std;
struct Array
{
    int A[10];
    int size;
    int length;
};
// Display function
void Display(struct Array arr)
{
    int i;
    printf("\nElements are\n");
    for (i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }
}
// Merge Function
struct Array *Merge(struct Array *arr1, struct Array *arr2)
{
    int i, j, k;
    i = j = k = 0;

    struct Array *arr3 = (struct Array *)malloc(sizeof(struct
                                                       Array));

    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
            arr3->A[k++] = arr1->A[i++];
        else
            arr3->A[k++] = arr2->A[j++];
    }
    for (; i < arr1->length; i++)
        arr3->A[k++] = arr1->A[i];
    for (; j < arr2->length; j++)
        arr3->A[k++] = arr2->A[j];
    arr3->length = arr1->length + arr2->length;
    arr3->size = 10;

    return arr3;
}
// Union function
struct Array *Union(struct Array *arr, struct Array *arr1)
{
    int i, j, k;
    i = j = k = 0;
    struct Array *arr2 = (struct Array *)malloc(sizeof(struct Array));

    while (i < arr->length && j < arr1->length)
    {
        //array 1 is less than array 2
        if (arr->A[i] < arr1->A[j])
            arr2->A[k++] = arr->A[i++];
        //array 2 is less than array 1
        else if (arr1->A[j] < arr->A[i])
            arr2->A[k++] = arr1->A[j++];
        //If array 1 and array 2 are equal
        else
        {
            arr2->A[k++] = arr->A[i++];
            j++;
        }
    }
    for (; i < arr->length; i++)
        arr2->A[k++] = arr->A[i];
    for (; j < arr2->length; j++)
        arr2->A[k++] = arr1->A[j];
    arr2->length = k;
    arr2->size = 10;

    return arr2;
}

//Intersection
struct Array *Intersection(struct Array *arr, struct Array *arr1)
{
    int i, j, k;
    i = j = k = 0;
    struct Array *arr2 = (struct Array *)malloc(sizeof(struct Array));

    while (i < arr->length && j < arr1->length)
    {
        if (arr->A[i] < arr1->A[j])
           i++;
        else if (arr1->A[j] < arr->A[i])
            j++;
        else if(arr->A[i]==arr1->A[j])
        {
            arr2->A[k++] = arr->A[i++];
            j++;
        }
    }
    arr2->length = k;
    arr2->size = 10;

    return arr2;
}

//Difference Function
struct Array *Difference(struct Array *arr, struct Array *arr1)
{
    int i, j, k;
    i = j = k = 0;
    struct Array *arr2 = (struct Array *)malloc(sizeof(struct Array));

    while (i < arr->length && j < arr1->length)
    {
        if (arr->A[i] < arr1->A[j])
            arr2->A[k++] = arr->A[i++];
        else if (arr1->A[j] < arr->A[i])
           j++;
        else
        {
            i++;
            j++;
        }
    }
    for (; i < arr->length; i++)
        arr2->A[k++] = arr->A[i];
    arr2->length = k;
    arr2->size = 10;

    return arr2;
}
int main()
{
    // struct Array arr = {{2, 4, 6, 7, 8}, 10, 5};  //array 1
    // struct Array arr1 = {{3, 6, 7, 9, 12}, 10, 5}; //array 2
    // struct Array *arr2;
    // arr2=Merge(&arr,&arr1);
    // arr2 = Union(&arr, &arr1);
    // arr2=Intersection(&arr,&arr1);
    // arr2=Difference(&arr,&arr1);
    // Display(*arr2);

    //Menu Driver 
    struct Array arr1;
    int ch;
    printf("Enter the size of the array");
    scanf("%d",&arr1.size);
    arr1.A=(int *)malloc(arr1.size*sizeof(int));
    do{
    printf("Menu\n");
    printf("1. Insert\n");
    printf("2. Delete\n");
    printf("3. Search\n");
    printf("4. Sum\n");
    printf("5. Display\n");
    printf("6. Exit\n");

    printf("Enter your choice:");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1: printf("Enter an element and index ")
        scanf("%d%d",&x,&index);
        Insert(&arr1,index,x);
        break;
    
    case 2: printf("Enter index ");
        scanf("%d",&index);
        x=Delete(&arr1,index);
        printf("Deleted Element is %d\n",x);
        break;
    case 3: printf("Enter element to search ");
        scanf("%d",&x);
        index=LinearSearch(&arr1,x);
        printf("Element index %d",index);
        break;
    case 4: printf("Sum is %d\n",Sum(arr1));
        break;
    case 5: Display(arr1);
    }
    }while(ch<6);
    return 0;
}

// In c++
//  #include <iostream>
//  #include <cstdlib>

// using namespace std;

// class Array{

// private:
//     int* A;
//     int size;
//     int length;

// public:
//     Array(int size, int length, bool sorted=false){

//         this->size = size;
//         this->length = length;

//         A = new int [size];

//         if (sorted){
//             cout << "Enter ints in sorted manner" << endl;
//             for (int i = 0; i < length; i++){
//                 cout << "Enter element " << i << " : " << flush;
//                 cin >> A[i];
//             }
//         } else {
//             for (int i = 0; i < length; i++){

//                 int val;
//                 val = rand() % 100;  // Random int in range 0 to 100

//                 // Generate random binary int and make value negative
//                 if (rand() % 2){
//                     A[i] = -1 * val;
//                 } else {
//                     A[i] = val;
//                 }

//             }
//         }
//     }

//     int Get(int index){
//         if (index >= 0 && index < length){
//             return A[index];
//         }
//     }

//     void Set(int index, int x){
//         if (index >= 0 && index < length){
//             A[index] = x;
//         }
//     }

//     void display(){
//         for (int i = 0; i < length; i++){
//             cout << A[i] << " ";
//         }
//         cout << endl;
//     }

//     Array Merge(Array& B){
//         Array C(length + B.length, length + B.length);
//         int i = 0;
//         int j = 0;
//         int k = 0;
//         while (i < length && j < B.length){
//             if (A[i] < B.Get(j)){
//                 C.Set(k++, A[i++]);
//             } else {
//                 C.Set(k++, B.Get(j++));
//             }
//         }
//         for (; i < length; i++){
//             C.Set(k++, A[i]);
//         }
//         for (; j < B.length; j++){
//             C.Set(k++, B.Get(j));
//         }
//         return C;
//     }

//     ~Array(){
//         delete[] A;
//     }

// };

// int main() {

//     Array X(10, 5, true);
//     Array Y(10, 4, true);

//     Array Z = X.Merge(Y);
//     Z.display();

//     return 0;
// }