#include<bits/stdc++.h>
using namespace std;

struct bruh{
    int ngay;
    int thang;
    int nam;

    bool operator <(const bruh &b)const{ //:>
        if(nam != b.nam) return nam < b.nam;
        if(thang != b.thang) return thang < b.thang;
        if(ngay != b.ngay) return ngay < b.ngay;
        return ngay < b.ngay;
    }
};



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    bruh a[n+5];

    if(a[0] < a[1]){
        cout << "bruh";
    }
    for(int i=0;i<n;i++){
        cin >> a[i].ngay >> a[i].thang >> a[i].nam;
    }

    sort(a, a + n);

    for(int i=0;i<n;i++){
        cout << a[i].ngay << " " << a[i].thang << " " << a[i].nam << "\n";
    }
    return 0;
}