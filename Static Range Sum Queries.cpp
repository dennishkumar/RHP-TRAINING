#include <iostream>
#include<vector>
using namespace std;

int main() {
    // Your code here
    int n,q,a,b;
    cin>>n>>q;
    vector<long long> arr(n+1,0);
    for (int i=1;i<=n;i++){
        long long int t;
        cin>>t;
        arr[i] = arr[i-1] + t;
    }
    for (int i=0;i<q;i++){
        cin>>a>>b;
        cout<<arr[b] - arr[a-1]<<endl;
    }
    return 0;
}