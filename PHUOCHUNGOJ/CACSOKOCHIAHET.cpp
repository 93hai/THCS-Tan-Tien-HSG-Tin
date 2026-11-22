//link bài: https://phuochungoj.duckdns.org/p/GL0000003?lang=vi
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a,b,c,d;
    cin >> a >> b >> c >> d;

    long long g = c * d / __gcd(c,d);
    long long tong = b - a;

    
    long long cac_so_chia_het_cho_c = floor((double) b / c) - floor((double) a / c);
    long long cac_so_chia_het_cho_d = floor((double) b / d) - floor((double) a / d);

    long long cac_so_chia_het_cho_g;

    cac_so_chia_het_cho_g = floor((double) b / g) - floor((double) a / g);
    
    cout << tong - (cac_so_chia_het_cho_c + cac_so_chia_het_cho_d - cac_so_chia_het_cho_g);
}