//link bai: https://oj.vforge.edu.vn/course/vforge-hsgt-tran-sy-hai/lesson/3170/problem/next_greater/
#include<bits/stdc++.h>
using namespace std;

long long a[1000005];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for(int i=1;i<=n;i++){
        cin >> a[i];
    }

    int q;
    cin >> q;

    a[0] = -2e18;

    for(int i=0;i<q;i++){
        long long x;
        cin >> x;

        long long g = upper_bound(a + 1, a + n + 1, x) - a;

        if(g >= 1 && g <= n){
            cout << a[g] << " ";
        }else{
            cout << "-1 ";
        }
    }
    return 0;
}