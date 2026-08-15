// Reverse of Array
#include<iostream>
using namespace std;
   

   void RevArr(int arr[],int size){  //Array is always pass by reference
        int start=0;
        int  end=size-1;
        while (start<end)
        {
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
        

    }

   int main (){
    int arr[]={34,31,23,45,73,98};
    int size=sizeof(arr)/4;
    cout<<"Original array is \t";
     for (int i=0;i<size;i++){
        cout<<arr[i]<< " ";
    }

    RevArr(arr,size);

    cout<<"\nReverse of arr is "<<endl;
    for (int i=0;i<size;i++){
        cout<<arr[i]<< " ";
    }
      

     return 0;
   }