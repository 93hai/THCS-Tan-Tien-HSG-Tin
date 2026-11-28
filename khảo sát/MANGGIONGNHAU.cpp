#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    vector<long long> a(n), b(n);

    map<int, int> he;

    for(int i=0;i<n;i++){
        cin >> a[i];
        he[a[i]]++;
    }

    for(int i=0;i<n;i++){
        cin >> b[i];
        he[b[i]]++;
    }

    for(auto i: he){
        if(i.second == 1){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}