//link bai: https://phuochungoj.duckdns.org/p/GL0000002?lang=vi
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    vector<long long> a(n);

    long long kq = 2e18;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i] % 2 == 0){
            long long dem = 0;
            while(a[i] % 2 == 0){
                dem++;
                a[i] /= 2;
            }
            kq = min(dem,kq);
        }else{
            cout << "0";
            return 0;
        }
    }
    cout << kq;
}