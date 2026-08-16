#include<iostream>
#include<vector>
using namespace std;

void change(int &b){
  b=23;


}

  int main(){
    int a=34;
    change(a);
    cout<<a;
    
    return 0;
  }