//link bai: https://oj.vforge.edu.vn/course/vforge-hsgt-tran-sy-hai/lesson/3169/problem/buy_drink/
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    
    long long a[n + 5];

    for(int i=1;i<=n;i++){
        cin >> a[i];
    }

    a[n + 1] = 2e18;

    sort(a+1, a + n+1);

    long long q;
    cin >> q;

    for(int i=0;i<q;i++){
        long long x;
        cin >> x;

        long long g = upper_bound(a+1, a + n+2, x) - a;
        if(g - 1 < 0){
            cout << g << "\n";
        }else{
            cout << g - 1 << "\n";
        }
    }
    return 0;
}