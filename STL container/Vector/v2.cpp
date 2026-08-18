#include<iostream>
#include<vector>
using namespace std;


  int main(){
    
    vector<int> vec = {12,3,4,5,7,87,3,2};

    cout<<*vec.begin()<<endl;

    cout<<*vec.erase(vec.begin())<<endl;

    cout<<*(vec.end())<<endl;



    return 0;
  }