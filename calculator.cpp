#include<iostream>
using namespace std;
int main (){

   int a;
   int b;
   string c;
   cout<<"Enter first number :";
   cin>>a;
   cout<<"Enter second number :";
   cin>>b;
   cout<<"Enter parameter :";
   cin>>c;

   if (c == "+")
   {
     cout<<a+b;
   }else if (c == "-"){
    cout<<a-b;
   } else if (c == "*")
   {
     cout<<a*b;
   }else if (c == "/"){
    if (b==0)
    {
        cout<<"Denominator can't be zero.";
    }else{
       cout<<a/b;
    }
    ;
   }

    return 0;
}