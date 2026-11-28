//link bài: https://oj.vforge.edu.vn/course/vforge-hsgt-tran-sy-hai/lesson/3169/problem/basic_pair_ranking/
#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second

const int MAX = 1000;

pair<pair<int, int>, string> teams[MAX];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int dem = 1;

    cin >> teams[0].se;
    cin >> teams[0].fi.fi;
    cin >> teams[0].fi.se;
    pair<int,int> sum = teams[0].fi;
    string g = teams[0].se;

    for(int i=1;i<n;i++){
        cin >> teams[i].se;
        cin >> teams[i].fi.fi;
        cin >> teams[i].fi.se;

        if(sum == teams[i].fi){
            dem++;
        }else if(sum < teams[i].fi){
            sum = teams[i].fi;
            g = teams[i].se;
            dem = 1;
            } 
        }
    cout << g << "\n" << dem;
    return 0;
}