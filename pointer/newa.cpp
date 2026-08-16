#include<iostream>
using namespace std;


  int main(){
    int a = 10;
    int* ptr = &a;

    int** potoptr = &ptr;
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<ptr<<endl;

    cout<<&ptr<<endl;
    cout<<potoptr<<endl;
    cout<<&potoptr<<endl;
    return 0;
  }