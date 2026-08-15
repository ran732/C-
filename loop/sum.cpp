#include<iostream>
using namespace std;


  int main(){

    int sum=0;
    int a;
    int b;
    cout<<"Enter a : ";
    cin>> a ;

    cout<<"Enter b : ";
    cin>>b;

    // for (int i=a;i<=b;i++){
    //     sum+=i;
    // }

    int c=a;
    while(c<=b){
        sum+=c;
        c++;
    }
    cout<<"Sum of number from a to b is "<<sum<<endl;
    
    return 0;
  }