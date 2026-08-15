#include<iostream>
using namespace std;
int main (){

    int age ;
    cout<< "Enter your age : ";
    cin>> age;
    
    if (age >= 18){
        cout<< " Eligibal to vote !"<<endl;
    } else {
        cout<< " Not eligibal to vote !"<<endl;
    }


    return 0;
}