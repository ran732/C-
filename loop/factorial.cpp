#include<iostream>
using namespace std;


  int main(){
    int n;
    cout<<"Enter a num :";
    cin>> n;
    int fact=1;

    // for(int i=1;i<=n;i++){
    //     fact*=i;
    //     if (fact == 120){
    //         break;
    //     }
    // }

    int count =1;
    while (count <=n){
        fact *= count;
        count ++;
        if (fact == 120){
            break;
        }
    }
    cout<<"Factorial of number :"<< fact<< endl;
    
    return 0;
  }