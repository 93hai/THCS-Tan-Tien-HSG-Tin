//link bài:https://oj.vforge.edu.vn/course/vforge-hsgt-tran-sy-hai/lesson/3170/problem/solve_cubic/
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long q;
    cin >> q;

    for(int i=0;i<q;i++){
        long long k;
        cin >> k;

        if(k == 4){
            cout << 1 << "\n";
            continue;
        }

        if(k < 5){
            cout << "-1" << "\n";
            continue;
        }

        long long l = 0, r = 1e6 + 5;
        long long g = -1;
        while(l <= r){
            long long n = (l + r) / 2;
            long long hehe = n * n * n - 2 * n + 5;
            if(hehe >= k){
                g = n;
                r = n - 1;
            }else{
                l = n + 1;
            }
        }
        if(g*g*g - 2 * g + 5 == k && g != -1) cout << g << "\n";
        else cout << "-1" << "\n";
    }
    return 0;
}