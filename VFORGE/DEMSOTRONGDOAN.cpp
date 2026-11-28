//link bai: https://oj.vforge.edu.vn/course/vforge-hsgt-tran-sy-hai/lesson/3170/problem/count_in_range/
#include<bits/stdc++.h>
using namespace std;

long long a[1000005];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    int q;
    cin >> q;

    for(int i=0;i<q;i++){
        long long l,r,x;
        cin >> l >> r >> x;

        long long R = upper_bound(a + l, a + r + 1, x) - a;
        long long L = lower_bound(a + l, a + r + 1, x) - a;

        cout << R - L << "\n";
    }
    return 0;
}