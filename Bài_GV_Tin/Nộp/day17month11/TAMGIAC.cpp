#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long a,b,c;
	cin >> a >> b >> c;
	
	if(a + b + c != 180){
		cout << "KHONG";
		return 0;
	}
	
	if(a == 90 || b == 90 || c == 90){
		cout << "VUONG";
		return 0;
	}
	
	if(a > 90 || b > 90 || c > 90){
		cout << "TU";
		return 0;
	}
	
	cout << "NHON";
	return 0;
}