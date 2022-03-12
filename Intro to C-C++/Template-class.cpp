#include<bits/stdc++.h>
using namespace std;

template<class T>
class Arithmetic{
    private:
        T a;
        T b;
    public:
        // Constructor
        Arithmetic(T a,T b);
        //Functions
        T add();
        T sub();
};
        // Constructor (as now it is outside the so to show that it belongs to class Arithmetic we used Arithmetic(::)(with scope resolution) )
        template<class T>
        Arithmetic<T>::Arithmetic(T a,T b){
            this->a=a;   // this keyword (it means that the current object) this->it refers to the int a under the private member
            this->b=b;
        }
        // Add function
        template<class T>
        T Arithmetic<T>::add(){
            T c;
            c=a+b;
            return c;
        }
        // Subtract function
        template<class T>
        T Arithmetic<T>::sub(){
            T c;
            c=a-b;
            return c;
        }

int main(){
    Arithmetic<char> ar('A','C');
    cout<<"Add: "<<(int)ar.add()<<endl;
    cout<<"Sub: "<<(int)ar.sub()<<endl;

    return 0;
}