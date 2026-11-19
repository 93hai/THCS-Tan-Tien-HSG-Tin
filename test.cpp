#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    vector<long long> a(n-1);

    for(int i=0;i<n-1;i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    for(int i=1;i<n-1;i++){
        if(a[i] - 1 != a[i-1]){
            cout << a[i] - 1;
            return 0;
        }
    }
}