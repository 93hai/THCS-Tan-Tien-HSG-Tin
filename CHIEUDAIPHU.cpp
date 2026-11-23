//link bai:https://oj.vforge.edu.vn/course/vforge-hsgt-tran-sy-hai/lesson/3169/problem/covered_length/
#include<bits/stdc++.h>
using namespace std;

const long long N = 1000005;
pair<int, int> a[N];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    
    for(int i=1;i<=n;i++){
        cin >> a[i].first >> a[i].second; 
    }

    sort(a+1, a +n+1);
//1 - 10, 5 - 8
    long long ans = 0;
    long long u = a[1].first, v = a[1].second;
    for(int i=2;i<=n;i++){
        if(v >= a[i].first){
            v = max((long long) a[i].second,v);
        }else{
            ans += v - u;
            u = a[i].first;
            v = a[i].second;
        }
    }
    ans += v - u;
    cout << ans;
    return 0;
}