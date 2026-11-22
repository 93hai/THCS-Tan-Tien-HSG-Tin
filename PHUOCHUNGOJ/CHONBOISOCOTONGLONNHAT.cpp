//link bai: https://phuochungoj.duckdns.org/p/GL0000009?lang=vi
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    
    long long lon_nhat = -1;
    long long j = 2;
    while(j <= n){
        long long sum = 0;
        for(int i=j;i<n;i+=j){
            sum += i;
        }
        lon_nhat = max(lon_nhat, sum);
        cout << lon_nhat << " " << j << "\n";
        j++;;
    }
    cout << lon_nhat;
    return 0;
}