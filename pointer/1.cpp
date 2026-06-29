#include<iostream>
using namespace std;


  int main(){
    int a=10;
    int* ptr=&a;

    int** parptr = &ptr; //level up   pointer to pointer
    
    cout<<&ptr<<endl;
    cout<<parptr<<endl;
    cout<<&parptr<<endl;

    cout<<*(&a)<<endl; // dereference operator   #10
    cout<<*(ptr)<<endl; // dereference operator  #10
    cout<<**(parptr)<<endl; // double dereference operator  #10

    cout<<&a<<endl;
    cout<<ptr<<endl;

    return 0;
  }