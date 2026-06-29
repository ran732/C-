#include<iostream>
using namespace std;
int main (){
    int marks[4] ;
    int p=sizeof(marks)/4; 
    for (int i=0; i<p;i++){
    cin>>marks[i];
    }

    for (int i=0; i<p;i++){
        cout<< marks[i] <<endl;
    }

    return 0;
}