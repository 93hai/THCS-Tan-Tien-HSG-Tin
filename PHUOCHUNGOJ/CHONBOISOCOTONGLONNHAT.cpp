//link bai: https://phuochungoj.duckdns.org/p/GL0000009?lang=vi
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    
    long long lon_nhat = -1;
    long long vi_tri = 0;
    long long j = 2;
    while(j <= n){
        long long sum = 0;
        for(int i=j;i<n;i+=j){
            sum += i;
        }
        if(lon_nhat < sum){
            lon_nhat = sum;
            vi_tri = j;
        }
        j++;;
    }
    cout << vi_tri;
    return 0;
}