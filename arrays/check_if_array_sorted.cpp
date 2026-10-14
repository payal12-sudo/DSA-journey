#include <iostream>
using namespace std;

  bool array_sorted(int a[],int n){
    for(int i=1;i<n;i++){
      if(!(a[i]>=a[i-1])){
        return false;
      }
    }
    return true;
  }

int main(){

  int arr[]={1,2,3,4,5};
  int n=sizeof(arr)/sizeof(arr[0]);
  cout<<"array is sorted=> "<<array_sorted(arr,n);
  
}