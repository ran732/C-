#include<iostream>
#include<vector>
#include<map>
#include<queue>
using namespace std;


  int main(){
    
    map<string,int> m;
    m["tv"] = 100;
    m["laptop"] = 129;
    m["tablet"] = 78;
    m["phone"] = 23;

    m.insert({"camera",45});

    m.emplace("charger",67);

    m.erase("charger");

    for (pair<string,int> p:m){   // can be ,auto, also
        cout<<p.first<<" "<<p.second<<endl;
    }

    cout<<"Count = "<<m["laptop"]<<endl;

    return 0;
  }