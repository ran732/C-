#include<iostream>
using namespace std;
  
  int PBVsquare(int x){  //pass by value
    x=x*x;
  }

  int PBRsquare(int &x){ //pass by reference
    x=x*x;
    return x;
  }

  int main (){
    int num=7;
    PBVsquare(num);
    cout<<num<<endl;
    
    PBRsquare(num);
    cout<<num<<endl;


    return 0;
  }