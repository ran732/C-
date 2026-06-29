#include<iostream>
using namespace std;

   int LinearSearch(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if (arr[i]==target){
            return i;
        }

    }
    return -1;

   }

   int main(){

    int arr[]={23,3,45,56,67,78,8,7};
    int size =7;
    int target =67;
    cout<<"Index of target is "<<LinearSearch(arr,size,target)<<endl;
   
    return 0;



    



    
   }