//link bài: https://oj.vforge.edu.vn/course/vforge-hsgt-tran-sy-hai/lesson/3169/problem/conflicting_shows/
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<pair<int,int>> a(n);

    for(int i=0;i<n;i++){
        cin >> a[i].first >> a[i]. second;
    }

    sort(a.begin(), a.end());

    int dem = 0;
    
    for(int i=0;i<n;i++){
        int g = lower_bound(a.begin(), a.end(), make_pair(a[i].second, -1)) - a.begin();
        dem += g - 1 - i;
    }

    cout << dem;
    return 0;
}