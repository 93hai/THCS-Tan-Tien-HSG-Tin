//link bài: https://phuochungoj.duckdns.org/p/GL0000001?lang=vi
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long l,r,x;
    cin >> l >> r >> x;

    long long trai = floor(l / x);
    long long phai = floor(r / x);

    if(l % x == 0){
        cout << phai - trai + 1;
    }else{
        cout << phai - trai;
    }
}