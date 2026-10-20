#include <iostream>
#include <vector>

using namespace std;

vector<int> reverse_array(vector<int> v){
  int n=v.size();
  vector<int> temp;
  

  for(int i=n-1;i>=0;i--){
    temp.push_back(v[i]);
  }
  v=temp;
  return v;
}
int main(){

  vector<int> v={1,2,3,4,5};
  

  v=reverse_array(v);

  for(auto i : v){
    cout<<i<<" ";
  }


  
}