#include<iostream>
#include <vector>
using namespace std;


  int main(){

    vector<int> vec1;
    vector<int> vec2 = {2,34,56};
    vector<int> vec3(7,2);
    vector<char> vec4={'a','b','c','d'};
    cout<<" Size = "<<vec4.size()<<endl;
    cout<<" Size = "<<vec3.size()<<endl;
    cout<<" Size = "<<vec1.size()<<endl;

    vec1.push_back(12);
    vec1.push_back(34);
    vec1.push_back(45);
    vec1.push_back(13);
    vec1.pop_back();
    cout<<" Size = "<<vec1.size()<<endl;
    cout<<vec1.front()<<endl;
    cout<<vec1.back()<<endl;
    cout<<vec1.at(0)<<endl;
    
    


    cout<<vec2[0]<<endl;
    cout<<vec2[1]<<endl;
    cout<<vec2[2]<<endl;

    for(int i: vec3){   //forEach loop
        cout<<i<< " ";
    }
    cout<<endl;
    for( char value: vec4){ //forEach loop
        cout<<value<<" ";
    }
    
    
    return 0;
  }