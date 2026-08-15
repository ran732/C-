#include<iostream>
using namespace std;
int main (){
    int marks[4] ;
    int p=sizeof(marks); 
    cout<<p<<endl;
    for (int i=0; i<p;i++){
    cin>>marks[i];
    }

    for (int i=0; i<p;i++){
        cout<< marks[i] << "  ";
    }

    return 0;
}