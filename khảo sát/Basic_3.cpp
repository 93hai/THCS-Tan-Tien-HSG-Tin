#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    for(int i=1;i<=n;i++){
        if(n % i == 0){
            cout << i << " ";
        }
    }
}