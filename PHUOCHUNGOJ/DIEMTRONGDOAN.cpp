//link bai:https://oj.vforge.edu.vn/course/vforge-hsgt-tran-sy-hai/lesson/3169/problem/segments_over_points/
#include<bits/stdc++.h>
using namespace std;

const int N = 1e8;
int a[N + 5];

void hehe(){
        long long n,q;
        cin >> n >> q;

        long long rmax = -1;
        for(int i=0;i<n;i++){
            long long l,r;
            cin >> l >> r;

            a[l]++;
            a[r+1]--;
            rmax = max(rmax, r);
        }

        for(int i=1;i<=rmax;i++){
            a[i] = a[i] + a[i-1];
        }

        for(int i=0;i<q;i++){
            long long x;
            cin >> x;
            cout << a[x] << "\n";
        }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    for(int i=0;i<t;i++){
        hehe();
        memset(a, 0,sizeof a);
    }
}