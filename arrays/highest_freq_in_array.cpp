#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

// int highest_freq(vector<int> v){
//   int n=v.size();
//   int maxc=-1;

//   for(int i=0;i<n;i++ ){
//     int c=0;
//     for(int j=0;j<n;j++){
//       if(i=j){
//         continue;
//       }
//       if(v[i]==v[j]){
//         c++;
//         maxc=max(maxc,c);
//       }
//     }
//   }
//   return maxc;

// }
int highest_freq_by_better_approach(vector<int> v){

  int n=v.size();

  
  int maxfreq=0;
  int s=0;//start

  if(v.empty()){
    return -1;
  }
   int ans=v[0];
  sort(v.begin(),v.end());
  while(s < v.size()){
    int e=s;//end
    while(e < v.size() && v[e]==v[s]){
      e++;
    }
    int curentfreq = e-s;
    int curentans = v[s];

    if((curentfreq > maxfreq ) || ((curentfreq == maxfreq) && (curentans < ans)))
    {
      maxfreq = curentfreq;
      ans = curentans;
      
       
    }
    s=e;
  }
return ans;
}

int main(){

  vector<int> v={1,3,2,1,3,2,2,2,2,3};
  cout<<"highest freq is element is "<<highest_freq_by_better_approach(v)<<endl;
  
}

