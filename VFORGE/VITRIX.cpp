//link bai: https://oj.vforge.edu.vn/course/vforge-hsgt-tran-sy-hai/lesson/3170/problem/find_position/
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

        int l = 1,r = n;
        int g = 0;
        while(l <= r){
            int mid = (l + r) / 2;
            if(a[mid] >= x){
                g = mid;
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }
        if(a[g] == x) cout << g << " ";
        else cout << "-1 ";
    }
    return 0;
}