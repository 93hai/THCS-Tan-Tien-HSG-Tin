#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    getline(cin >> ws, s);

    map<long long, long long> he;
    for(int i=0;i<s.size();i++){
        if(s[i] >= '0' && s[i] <= '9'){
            long long sum = 0;
            while(i < s.size() && s[i] >= '0' && s[i] <= '9'){
                sum = sum * 10 + (s[i] - '0');
                i++;
            }
            he[sum]++;
        }
    }

    long long dem = 0;
    for(auto i:he){
        if(i.first > 0 && i.second == 1){
            dem++;
        }
    }
    cout << dem << endl;
}