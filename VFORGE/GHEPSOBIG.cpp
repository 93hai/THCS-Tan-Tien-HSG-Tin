//link bai: https://oj.vforge.edu.vn/course/vforge-hsgt-tran-sy-hai/lesson/3169/problem/max_concat/
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    vector<string> a(n);
    
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end(), greater<string>());

    for(int i=0;i<n;i++){
        cout << a[i];
    }
}