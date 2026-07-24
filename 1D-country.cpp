#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> loc(n);
    vector<int> vil(n);
    vector<long long int> prefix(n+1,0);
    for(int i=0;i<n;i++){

        cin>>loc[i];

    }
    for(int i=0;i<n;i++){
        cin>>vil[i];
        prefix[i+1]=prefix[i]+vil[i];
    }
    int q;cin>>q;
    while(q!=0)
    {
        int l,r;cin>>l>>r;
        auto lb=lower_bound(loc.begin(),loc.end(),l);
        auto ub=upper_bound(loc.begin(),loc.end(),r);
        int lower=lb-loc.begin();
        int upper=ub-loc.begin();
        cout<<prefix[upper]-prefix[lower]<<endl;

        q--;
    }


}