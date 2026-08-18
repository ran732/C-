#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
using namespace std;


  int main(){

    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
 
    cout<<"Before size : "<<q.size()<<endl;

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    cout<<"After size : "<<q.size()<<endl;
   
    
    return 0;
  }