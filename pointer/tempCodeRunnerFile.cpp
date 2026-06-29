#include<iostream>
#include<vector>
using namespace std;

int change(int a){
    int a=23;
    return a;
}

  int main(){
    int a=34;
    change(&a);
    cout<<a;
    
    return 0;
  }