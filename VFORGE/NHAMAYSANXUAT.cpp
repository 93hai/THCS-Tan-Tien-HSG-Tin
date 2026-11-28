//link bai: https://oj.vforge.edu.vn/course/vforge-hsgt-tran-sy-hai/lesson/3170/problem/factory_machines/
#include<bits/stdc++.h>
using namespace std;

const int N = 2e6;
long long a[N];

bool hehe(long long n, long long mid, long long t){
    long long sum = 0;
    for(int i=0;i<mid;i++){
        if(sum >= t - n / a[i]) return true;
        sum += n / a[i];
    }
    return sum >= t;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n,t;
    cin >> n >> t;

    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    long long l = 0, r = 2e18;

    long long g = -1;
    while(l <= r){
        long long mid = (r + l) / 2;
        if(hehe(mid,n,t)){
            r = mid - 1;
            g = mid;
        }else{
            l = mid + 1;
        }
    }
    cout << g;
    return 0;
}