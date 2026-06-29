#include <iostream>

using namespace std;

int main() {
    
    while (true){ 
    
        int n;
        cout<<"Welcome at my Shop Sir!";
        cout<<"Choose Menu Items :"<<endl;
        cout<<"1.Simle food"<<endl;
        cout<<"2.Biryani"<<endl;
        cout<<"3.Egg Role"<<endl;
        cout<<"4.Juice"<<endl;
        cout<<"Enter menu number :";
        cin>>n;
        if (n==1){
           cout<<"Ordered Somple food";
        }else if(n==2){
           cout<<"Oredered Biryani";
        }else if(n==3){
           cout<<"Egg Role";
        }else if(n==4){
           cout<<"Oredered Juice";
        }else{
           cout<<"Item currently not available";
        
        if (1<=n<=4){
           cout<<"\nthanks you sir";
        }
    }    

}
return 0;

    
}