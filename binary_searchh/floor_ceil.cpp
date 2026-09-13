#include<iostream>
#include<vector>
using namespace std;

class Solution{
  public:
  int floor_in_sorted_array(vector<int> v,int t){

    //*********(largest number that is smaller than and equal to target )(largest<=target)
    
    int l=0,h=v.size()-1,mid,ans=v.size();
    while(l<=h){
      mid=l+(h-l)/2;
      if(v[mid]<=t){//{2,3,(5),6, 7 ,8,9,12,14}
        ans=mid;
        l=mid+1;
      }
      else {
        
        h=mid-1;
      }
    }
    return ans;
  }

  int findceil(vector<int> v,int t){

    //*********(smallest number that is greater than and equal to target )(smallest>=target)
    int ans=v.size(),l=0,mid,h=v.size()-1;
    while(l<=h){
      mid=l+(h-l)/2;
      if(v[mid]>=t){
        ans=mid;
        h=mid-1;

      }else l=mid+1;
    }
    return ans;
  }
};

int main(){
  vector<int> v={1,2,4,6,8,12,15,19,24};
  Solution s;
  int floor=s.floor_in_sorted_array(v,4);
  int ceil=s.findceil(v,4);
  cout<<floor<<endl<<ceil<<endl;

  return 0;
}