#include<iostream>
#include<vector>
#include<deque>
using namespace std;


  int main(){
    
     deque <int> d;

    d.emplace_back(1);
    d.push_back(2);
    d.emplace_front(4);
    d.push_back(3);
    d.push_front(12);
    d.pop_back();
    d.pop_front();

    for(int val:d){
        cout<<val<<"  ";

    }
    cout<<endl;

    

    return 0;
  }