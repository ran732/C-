#include<iostream>
#include<vector>
#include<list>
#include<deque>
using namespace std;


  int main(){

    pair<int,int> p ={3,7};
    cout<<p.first<<endl;
    cout<<p.second<<endl;

    pair<string,int> p2 ={"pk",7};
    cout<<p2.first<<endl;
    cout<<p2.second<<endl;

    pair<pair<string,string>,int> p1 ={{"Ranjeet","Singh"},50};
    cout<<p1.first.first<<endl;
    cout<<p1.first.second<<endl;
    cout<<p1.second<<endl;
    
    return 0;
  }