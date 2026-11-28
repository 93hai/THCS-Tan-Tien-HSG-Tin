//link bai:https://oj.vforge.edu.vn/course/vforge-hsgt-tran-sy-hai/lesson/3170/problem/first_one/
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n,q;
    cin >> n >> q;

    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    for(int i=0;i<q;i++){
        long long l,r;
        cin >> l >> r;

        long long g = -1;
        while(l <= r){
            long long mid = (l + r) / 2;
            if(a[mid] == 1){
                g = mid;
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }
        cout << g << "\n";
    }
}