//link bai: https://oj.vforge.edu.vn/course/vforge-hsgt-tran-sy-hai/lesson/3169/problem/max_concat/
#include<bits/stdc++.h>
using namespace std;

long long check(string n){
    long long sum = 0;
    for(int i=0;i<n.size();i++){
        sum = sum * 10 + n[i] - '0';
    }
    return sum;
}

bool cmp(string a, string b){
    long long trai = check(a + b);
    long long phai = check(b + a);

    if(trai > phai){
        return a > b;
    }else if(phai > trai){
        return b > a;
    }
    return 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    vector<string> a(n);
    
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end(), cmp);

    for(int i=0;i<n;i++){
        cout << a[i];
    }
}