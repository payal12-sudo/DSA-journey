#include<iostream>
#include<vector>
using namespace std;

int lower_boundd(vector<int>& v,int t){//LOG(n) time complexity
  //the greatest number that is greateer and equal to target (v[ans]>=t)
  int l=0;
  int h=v.size()-1;
  int mid;
  int ans=v.size();
  while(l<=h){
     mid=l+(h-l)/2;
    if(v[mid]>=t){
      ans=mid;
      h=mid-1;
    }else l=mid+1;
  }
  return v[ans];
}
int lower(vector<int> v,int t){
  int l=lower_bound(v.begin(),v.end(),t) - v.begin();
  return v[l];

}

int main(){
  vector<int> v={1,2,3,4,5,5,5,9,9};
  cout<<lower_boundd(v,8)<<endl;
  cout<<lower(v,5)<<endl;
}