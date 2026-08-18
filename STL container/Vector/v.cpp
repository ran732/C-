#include<iostream>
#include<vector>
using namespace std;

  int main(){

    vector<int> vec;

    vector<int> vec1 = {2,3,59,88,9};

    vector<int> vec2(vec1); // initionalise vec2 with vec1

    vec.push_back(23);
    vec.push_back(45);
    vec.push_back(75);
   

    cout<<vec.size()<<endl;          //size()
    cout<<vec.capacity()<<endl;      // capacity()
    for(int value:vec){
        cout<<value<<" ";

    }
    cout<<endl;
    
    return 0;
  }
