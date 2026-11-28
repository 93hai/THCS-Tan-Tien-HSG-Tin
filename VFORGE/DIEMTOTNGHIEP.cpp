//link bai:https://oj.vforge.edu.vn/course/vforge-hsgt-tran-sy-hai/lesson/3169/problem/rank_score_int/
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n,k;
    cin >> n >> k;

    vector<long long> a(n);

    for(int i=0;i<n;i++){
        cin >> a[i]; 
    }

    sort(a.begin(), a.end(), greater<long long>());

    cout << a[k-1];
}