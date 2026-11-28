//link bai: https://oj.vforge.edu.vn/problem/21_hsg9_quangtri_songnguyento/
#include<bits/stdc++.h>
using namespace std;

const long long MAXN = 1000000;
vector<long long> sangso(MAXN + 5, 2);
vector<long long> dp(MAXN + 5, 0);

void sang(){
    for(int i=2;i*i<=MAXN;i++){
        if(sangso[i] == 2){
            for(long long j=i+i;j<=MAXN;j+=i){
                sangso[j]++;
            }
        }
    }

    for(int i=2;i<=MAXN;i++){
        if(sangso[sangso[i]] == 2){
            dp[i] = dp[i-1] + 1;
        }else{
            dp[i] = dp[i-1];
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    for(int i=0;i<n;i++){
        long long a,b;
        cin >> a >> b;

        cout << dp[b] - dp[a-1] << "\n";
    }
    return 0;
}