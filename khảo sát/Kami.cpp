#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    long long dem = 0;
    long long sum = 1;
    while(sum < n){
        sum *= 2;
        dem++;
    }
    cout << dem;
}