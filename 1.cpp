#include<iostream>
using namespace std;
int main(){


    int n;
    cout<<"Enter a num :";
    cin>>n;

    if (n>0){
        cout<<" Positvie Number";
    }else if (n==0){
        cout<<"Zero";
    }else if (n<0){
        cout<<"Negative number";
    }else{
        cout<<"Please enter any number";
    }


return 0;
}

