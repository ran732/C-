#include<iostream>
using namespace std;

  void greet(){ //without parameter
    cout<<"Hello Brother"<<endl;
  }

  void welcome(){   //without parameter
    cout<<"Welcome"<<endl; 
  }

  void printSquare(int x){ //with parameter, no return Type
    cout<<x*x<<endl;
  }

  int returnSquare(int x){ //with parameter, no return Type
    return x*x;
  }

  int main(){
    greet();
    welcome();
    printSquare(5);

    cout<<returnSquare(6)<<endl;
    
    return 0;
  }