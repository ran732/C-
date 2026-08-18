#include<iostream>
#include<vector>
using namespace std;



  int main(){

    vector<pair<int ,int>> vec = {{1,2},{2,3},{3,4}};

    vec.push_back({4,5});  //insert

    vec.emplace_back(6,7);  //in-place objects create

    
    for (auto p:vec){   //auto or pair<int,int>

        cout<< p.first <<"  "<<p.second<<endl;
    }

    return 0;
  }