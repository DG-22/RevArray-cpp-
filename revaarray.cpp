#include<iostream>
using namespace std;

void print( int arr[] , int n)
{
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void rev( int arr[], int n)
{
    int start=0;
    int end=n-1;
    
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}


int main(){
    
    int arr[5]={1,8,5,4,3};
    int brr[5]={6,9,7,4,3};
    
    
    rev(arr,5);
    rev(brr,5);
    
    print(arr,5);
    print(brr,5);
}