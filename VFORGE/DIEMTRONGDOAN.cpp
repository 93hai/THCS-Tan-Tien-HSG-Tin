//link bai:https://oj.vforge.edu.vn/course/vforge-hsgt-tran-sy-hai/lesson/3169/problem/segments_over_points/
#include<bits/stdc++.h>
using namespace std;

void hehe(){
    int n,q;
    cin >> n >> q;

    vector<pair<int, int>> bruh;
    for(int i=0;i<n;i++){
        int l,r;
        cin >> l >> r;

        bruh.push_back({l,0});
        bruh.push_back({r,2});
    }
    
    map<int, vector<int>> mp;

    for(int i=1;i<=q;i++){
        int x;
        cin >> x;
        bruh.push_back({x,1});
        mp[x].push_back(i);
    }

    sort(bruh.begin(), bruh.end());

    int cnt = 0;

    long long ans[q+5];

    for(auto i:bruh){
        if(i.second == 1){
            ans[i.first] = cnt;
        }

        if(i.second == 0) cnt++;
        if(i.second == 2) cnt --;
    }

    for(int i=1;i<=q;i++){
        cout << ans[i] << "\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for(int i=0;i<t;i++){
        hehe();
    }
}