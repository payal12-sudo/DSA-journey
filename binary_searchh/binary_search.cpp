#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int binary_searchh(vector<int>& v,int t,int l,int h){
 
  if(l>h){
    return -1;
  }
  
  int mid=l+(h-l)/2;
  if(v[mid]==t) return mid;
  else if(t<v[mid]){
    return binary_searchh(v,t,l,mid-1);
  }else 
    return binary_searchh(v,t,mid+1,h);

}

int main(){
  vector<int> v={1,2,3,4,5,6,7,8,9};
  // int res=binary_searchh(v,18,0,9);
  // if(!binary_searchh(v,4,0,9)){
  //   cout<<"notfound"<<endl;
  // }else cout<<"Found"<<endl;
  int res=binary_searchh(v,7,0,9);
  cout<<res<<endl;
}