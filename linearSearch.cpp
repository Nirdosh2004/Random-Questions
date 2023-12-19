#include<iostream>
using namespace std;

inline bool linearSearch(int arr[] , int size , int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return 1;
        }
        
    }
    return 0;
}

int main(){

    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    int arr[size];
    cout<<"Enter elements of array : \n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter target to search : ";
    cin>>target;

    if(linearSearch(arr , size , target)){
        cout<<"available";
    }
    else{
        cout<<"not available";
    }



    return 0;
}