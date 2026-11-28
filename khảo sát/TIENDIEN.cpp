#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    long long sum = 0;
    if(n > 300){
        sum += (n - 300) * 10000;
        n = n - (n - 300);
    }
    if(n > 200){
        sum += (n - 200) * 5000;
        n = n - (n - 200);
    }
    if(n > 100){
        sum += (n - 100) * 3000;
        n = n - (n - 100);
    }
    if(n > 0){
        sum += n *2000;
    }
    cout << sum;
}