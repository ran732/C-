#include<iostream>
using namespace std;

  bool Isprime(int num){
    int count=0;
    for (int i=1; i<=num; i++){
        if( num%i==0){
           count +=1;
        }

    }
    if (count==2){
        cout<<"\nPrime nnumber";
    }else{
        cout<<"\nNot a prime nnumber";
    }
  }

  


  int main(){
    Isprime(5);
    Isprime(15);
    Isprime(7);
    Isprime(19);
    Isprime(20);


    
    return 0;
  }