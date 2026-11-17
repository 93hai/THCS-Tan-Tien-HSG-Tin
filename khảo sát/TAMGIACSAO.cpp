#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    while(n > 0){
        for(int i=0;i<n;i++){
            cout << "*";
        }
        n--;
        cout << "\n";
    }
}
