#include<iostream>
#include<climits>
using namespace std;
int main (){
  


    int arr[5];
    cout<< "Enter the array "<<endl;

    int smallest=INT_MAX;
    int largest=INT_MIN;
    for(int i=0;i<5;i++){
        cin>>arr[i] ;

    }    
    for(int i=0;i<5;i++){    
        if (arr[i]<smallest){
            smallest = arr[i];
        }
        largest = max(arr[i],largest);

    }    
    cout<< "Smallest is "<<smallest<<endl;
    cout<< "Largest is "<<largest<<endl;
    cout<<arr[largest];
         
        
    
    

    return 0;
}