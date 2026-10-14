#include <iostream>
using namespace std;
int sum_of_arrays(int a[],int n){
  int sum=a[0];

  for(int i=1;i<n;i++){
    sum+=a[i];
  }
  return sum;
}
int main(){
  int arr[]={4, -2, 0, 7, -3};
  int n=sizeof(arr)/sizeof(arr[0]);
  cout<<sum_of_arrays(arr,n);
}