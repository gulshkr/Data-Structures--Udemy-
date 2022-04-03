//Program to diagonal matrix
// #include<bits/stdc++.h>
// using namespace std;
// struct Matrix{
//     int A[10];
//     int n;
// };

// void Set(struct Matrix *m,int i,int j,int x){
//     if(i==j){
//         m->A[i-1]=x;
//     }
// }
// int Get(struct Matrix m,int i,int j){
//     if(i==j){
//         return m.A[i-1];
//     }
//     else{
//         return 0;
//     }
// }

// void Display(struct Matrix m){
//     int i,j;
//     for(i=0;i<m.n;i++){
//         for(j=0;j<m.n;j++){
//             if(i==j){
//                 printf("%d ",m.A[i-1]);
//             }
//             else{
//                 printf("0 ");
//             }
//             }
//             printf("\n");
//         }
//     }


// int main(){
//     struct Matrix m;
//     m.n=4;
//     Set(&m,1,1,5);Set(&m,2,2,8);Set(&m,3,3,9);Set(&m,4,4,10);
//     printf("%d \n",Get(m,1,1));
//     Display(m);
//     return 0;
// }


//Program for diagonal matrix in c++
#include<bits/stdc++.h>
using namespace std;
class Diagonal{
    private:
        int *A;
        int n;
    public:
        Diagonal(){     //-->Constructor
            n=2;
            A=new int [2];
        }
        Diagonal(int n){
            this->n=n;
            A=new int [n];
        }
        ~Diagonal(){        //-->Destructor
            delete [] A;
        }
        void Set(int i,int j,int x);
        int Get(int i,int j);
        void Display();
};
void Diagonal::Set(int i,int j,int x){
    if(i==j){
        A[i-1]=x;
    }
}
int Diagonal::Get(int i,int j){
        if(i==j){
            return A[i-1];
        }
        else{
            return 0;
        }
    }
    void Diagonal::Display(){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j){
                    cout<<A[i]<<" ";
                }
                else{
                    cout<<"0 ";
                }

            }
            cout<<endl;
        }
    }

int main(){
    Diagonal d(4);
    d.Set(1,1,5);
    d.Set(2,2,8);
    d.Set(3,3,9);
    d.Set(4,4,10);
    d.Display();

    return 0;
}