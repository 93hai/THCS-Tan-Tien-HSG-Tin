#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    cout << floor(n / 3.0) << "\n";
    cout << n - floor(n / 3.0);
    return 0;
}