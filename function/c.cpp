#include<iostream>
using namespace std;


  int sumofN(int n){
      int sum=0;
      for (int i=1;i<=n;i++){
          sum=sum+i;
      }
      return sum;
  }
  int factofN(int n){
    int fact=1;
    for (int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
  }

  int main(){
    cout<<sumofN(10)<<endl;
    cout<<sumofN(100)<<endl;
    cout<<sumofN(500)<<endl;
    cout<<"Factorial :"<<endl;
    cout<<factofN(5)<<endl;
    cout<<factofN(4)<<endl;
    
    return 0;
  }