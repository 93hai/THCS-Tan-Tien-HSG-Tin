//link bai: https://oj.vforge.edu.vn/course/vforge-hsgt-tran-sy-hai/lesson/3170/problem/count_in_range/
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> a(n+1);

    for(int i=1;i<=n;i++){
        cin >> a[i];
    }

    int q;
    cin >> q;

    a[0] = -2e18;

    for(int i=0;i<q;i++){
        long long l,r,x;
        cin >> l >> r >> x;

        long long R = upper_bound(a.begin() + l, a.begin() + r, x) - a.begin();
        long long L = lower_bound(a.begin() + l, a.begin() + r, x) - a.begin();

        cout << R - L << " ";
    }
    return 0;
}