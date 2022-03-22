// Calculatiing no of vowels and consonants
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     char A[]="How are you";
//     int i,vcount=0,ccount=0;
//     for(i=0;A[i]!='\0';i++){
//         if(A[i]=='a' || A[i]=='e' || A[i]=='i' || A[i]=='o' || A[i]=='u' || A[i]=='A' || A[i]=='E' || A[i]=='I' || A[i]=='O' || A[i]=='U'){
//             vcount++;
//         }
//         else if((A[i]>=65 && A[i]<=90)||(A[i]>=97 && A[i]<=122)){
//             ccount++;
//         }
//     }
//         cout<<"No of consonant are:"<<ccount<<endl;
//         cout<<"No of Vowels are:" <<vcount<<endl;
//     return 0;
// }

//2----------Calculating no of words
#include<bits/stdc++.h>
using namespace std;
int main(){
    char A[]="How are you my friend?";
    int i,word=1;
    for(i=0;A[i]!='\0';i++){
        if(A[i]==' ' && A[i-1]!=' ')
        word++;
    }
    cout<<"Total no of words are: "<<word<<endl;
    return 0;
}