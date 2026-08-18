#include<iostream>
#include<vector>
using namespace std;


  int main(){
    
    vector<int> vec = {1,2,3,4,5,6,7,8,9};

    vector<int>::iterator i;
    for (i=vec.begin();i!=vec.end();i++){
        cout<<*(i)<<" ";
    }

    cout<<endl;
    // vector<int>::reverse_iterator i;
    for(auto i=vec.rbegin();i!=vec.rend();i++){
        cout<<*(i)<<" ";
    }

   



    return 0;
  }