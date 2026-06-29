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
        return true;
    }else{
       return false;
    }
  }

  void Prime(int num){
    
    for(int i=1;i<=num;i++){
        if (Isprime(i)){
            cout<<i<<"  ";
        }
    }
    cout<<endl;
  }


  int main(){
    Isprime(5);
    Isprime(15);
    Isprime(7);
    Isprime(19);
    Isprime(20);

    Prime(100);
    
    return 0;
  }