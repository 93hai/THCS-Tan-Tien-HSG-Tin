#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,k;
    cin >> n >> k;

    vector<long long> a(n);

    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    sort(a.begin(),a.end());

    long long dem = 0;
    long long sum = 0;
    for(int i=0;i<n;i++){
        sum += a[i];
        dem++;
        if(sum > k){
            dem--;
            sum -= a[i];
            break;
        }
    }
    cout << dem << endl;
}