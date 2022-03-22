#include<bits/stdc++.h>
using namespace std;
int valid(char *name){
    int i;
    for(i=0;i<='\0';i++){
        if(!(name[i]>=65 && name[i]<=90) && !(name[i]>=97 && name[i]<=122) && !(name[i]>=48 && name[i]<=57))
        return 0;
    }
    return 1;
}

int main(){
    // char *name ="----------";
    char *name ="Gulsh@123";
    if(valid(name)){
        cout<<"valid string "<<endl;
    }
    else{
        cout<<"Invalid string "<<endl;
    }
    return 0;
}