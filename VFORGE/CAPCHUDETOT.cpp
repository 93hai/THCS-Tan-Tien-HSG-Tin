//link bai: https://oj.vforge.edu.vn/course/vforge-hsgt-tran-sy-hai/lesson/3169/problem/good_pairs/
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> a(n),b(n);

    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    for(int i=0;i<n;i++){
        cin >> b[i];
    }

    vector<int> d(n);
    vector<int> c(n);

    for(int i=0;i<n;i++){
        c[i] = a[i] - b[i];
        d[i] = b[i]  - a[i];
    }

    sort(c.begin(),c.end());
    sort(d.begin(),d.end());

    int j = 1;
    long long sum = 0;
    for(int i=0;i<n;i++){
        while(j < d.size() && c[i] >= d[j]){
            j++;
        }
        sum += j - i;
    }
    cout << sum;
    return 0;
}