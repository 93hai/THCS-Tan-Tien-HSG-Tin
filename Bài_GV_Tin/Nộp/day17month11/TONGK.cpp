#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,k;
    cin >> n >> k;

    if(k < 0){
        cout << -1;
        return 0;
    }

    vector<long long> a(n);

    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    sort(a.begin(),a.end());

    vector<long long> dp(n,0);
    long long dem = 0;
    dp[0] = a[0];

    if(dp[0] <= k){
        dem = 1;
    }
    
    for(int i=1;i<n;i++){
        dp[i] = dp[i-1] + a[i];
        if(dp[i] <= k){
            dem = i+1;
        }
    }
    cout << dem;
}