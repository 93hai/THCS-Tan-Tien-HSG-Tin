//link bai:https://phuochungoj.duckdns.org/p/PH002
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    vector<long long> a(n);

    for(int i=1;i<n;i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    for(long long i=1;i<n;i++){
        if(a[i] != i){
            cout << i;
            return 0;
        }
    }
    cout << n;
    return 0;
}