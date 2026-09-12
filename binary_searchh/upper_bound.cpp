#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int upper_boundd(vector<int> v ,int t){
  //first >= target
  int l=0,h=v.size()-1;
  int mid;
  int ans=v.size();
  while(l<=h){
    mid=l+(h-l)/2;
    if(v[mid]>t){
      ans=mid;
      h=mid-1;
    }else 
      l=mid+1;
  }
  return v[ans];

}
int upper(vector<int> v,int t){
  int u=upper_bound(v.begin(),v.end(),t)-v.begin();
  return u;
}

int main(){
  vector<int> v={1,2,3,4,5,5,5,9,9};
  cout<<upper_boundd(v,5)<<endl;
  // cout<<upper(v,5)<<endl;
}