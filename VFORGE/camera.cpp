#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    vector<int> a(n);

    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int mid = n / 2;

    if(n % 2 == 0){
        cout << a[mid] - a[mid - 1] + 1 << "\n";
        for(int i=a[mid-1];i<=a[mid];i++){
            cout << i << " ";
        }
    }else{
        cout << 1 << "\n" << a[mid];
    }
    return 0;
}