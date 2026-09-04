#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> cnt(n+n+n+1,0);
    for(int i=0;i<n;i++){
        int curr;cin>>curr;
        cnt[curr]++;
    }
    int ans=0;

    for(int i=1;i<=n+n;i++){
        int curr=i;
        while(cnt[curr]>k){
            cnt[curr+1]+=cnt[curr]-1;
            cnt[curr]=1;
            curr++;
        }
        ans=max(ans,curr-i);
    }
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
