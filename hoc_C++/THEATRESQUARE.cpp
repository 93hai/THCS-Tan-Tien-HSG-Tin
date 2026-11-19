//link bài: https://phuochungoj.duckdns.org/p/GL0000005?lang=vi
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n,m,a;
    cin >> n >> m >> a;

    long long dai = ceil((double)n / a);
    long long rong = ceil((double)m / a);

    cout << dai * rong;
}