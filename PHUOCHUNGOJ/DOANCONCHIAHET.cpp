//https://phuochungoj.duckdns.org/p/PS0000011
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    vector<long long> a(n);

    long long dem = 0;
    long long sum = 0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        sum += a[i];

        if(sum % n == 0){
            dem++;
        }
    }
    cout << dem;
    return 0;
}