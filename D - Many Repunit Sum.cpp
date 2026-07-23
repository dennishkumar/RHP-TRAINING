#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
  int n;
  cin>>n;
  vector<int> a(n),ans;
  for(int i=0;i<n;i++) cin>>a[i];
  sort(a.begin(),a.end());
  ll cd=0;
  for(int c=1;c<=a[n-1];c++){
    auto it=lower_bound(a.begin(),a.end(),c);
    int cunt=a.end()-it;
    cd+=cunt;
    ans.push_back(cd%10);
    cd=cd/10;
  }
  while(cd!=0){
    ans.push_back(cd%10);
    cd/=10;
  }
  reverse(ans.begin(),ans.end());
  for(int x : ans){
    cout<<x;
  }
  cout<<'\n';
}
