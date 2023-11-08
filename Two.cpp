#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter value of n : "<<endl;
    cin>>n;
    //for even sum
    int sum1 = 0 ;
    for( int i = 0 ; i < n ; ++i){
        if((i%2)==0){
            sum1 += i;
        }
    }
    cout<<"Sum of even numbers from 1 to n is: "<<sum1<<endl;
    //for odd sum 
    int sum2;
    for(int i=1; i<n;i++){
        if((i%3)==0){
            sum2 += i;
        }
    }
    cout<<"Sum of odd numbers from 1 to n is  :"<<sum2;

    return 0;
}