//link bai: https://oj.vforge.edu.vn/course/vforge-hsgt-tran-sy-hai/lesson/3170/problem/last_occurrence/
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
        long long x;
        cin >> x;

        long long g = upper_bound(a.begin(), a.end(), x) - a.begin();

        if(a[g-1] != x){
            cout << "-1" << " ";
        }else{
            cout << g - 1 << " ";
        }
    }
    return 0;
}