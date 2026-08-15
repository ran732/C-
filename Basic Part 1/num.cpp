#include<iostream>
using namespace std;
int main (){

    int num ;
    cout<< "Enter a number : ";
    
    

    if (!(cin >> num)) {
        cout << "Number type ke le madhrch**D" << endl;
        return 0;
    }

    if (num > 0){
        cout<< "Positive Number"<<endl;
    } else if (num<0){
        cout<< "Negative NUmber"<<endl;
    }else{
        cout<< "Zero"<<endl;
    }


    return 0;
}