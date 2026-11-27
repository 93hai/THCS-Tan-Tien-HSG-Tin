//link bai: https://oj.vforge.edu.vn/course/vforge-hsgt-tran-sy-hai/lesson/3169/problem/basic_struct_candidate/
#include<bits/stdc++.h>
using namespace std;

struct THONGTINTHISINH{
    string ten;
    double sbd;
    double toan;
    double van;
    double tienganh;
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<THONGTINTHISINH> a(5);

    getline(cin >> ws, a[1].ten);

    cin >> a[1].sbd >> a[1].toan >> a[1].van >> a[1].tienganh;
    
    cout << a[1].ten << "\n";
    cout << a[1].sbd << "\n";
    cout << fixed << setprecision(2) << (a[1].toan + a[1].van + a[1].tienganh)/3;
}
