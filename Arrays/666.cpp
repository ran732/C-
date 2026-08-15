#include<iostream>
using namespace std;


  void Rev(int arr[],int size){
    int s=0;
    int e= size-1;

    while (s<e)
    {
        int temp=arr[s];
        arr[s]=arr[e];
        arr[e]=temp;

        s+=1;
        e-=1;
    }
    

  }

  int main(){

    // int arr[]={12,3,4,5,75,23,1};
    int arr[]={1,2,3,4,5,6,7,8,9};
    Rev(arr,9);
    for(int i=0;i<=8;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
  }