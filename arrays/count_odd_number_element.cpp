#include <iostream>
using namespace std;

int count_number_of_odd_element(int a[],int n){
  int c=0;
  for(int i=0;i<n;i++){
    if(a[i]%2!=0){
      c++;
    } 
  }
  return c;
}

int count_by_bits(int a[],int n){
  //we know every odd number has 1 in as there LSB
  int c=0;
  for(int i=0;i<n;i++){
    if((a[i] & 1)!=0){
      c++;
    }
  }
  return c;
}
int main(){

  int arr[]={4, -2, 7, -3};
  int n=sizeof(arr)/sizeof(arr[0]);
  cout<<"There are "<<count_number_of_odd_element(arr,n)<<" odd numbers in the given array."<<endl;
  cout<<"There are "<<count_by_bits(arr,n)<<" odd numbers in the given array.";

}