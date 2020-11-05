#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<int> price(n), quantity(n), discount(n);
		double loss=0;
		for(int i=0; i<n; ++i) {
			cin >> price[i] >> quantity[i] >> discount[i];
			double x=discount[i];
			x/=100;
			loss+=(price[i]*x*x*quantity[i]);
		}
		cout << fixed << setprecision(9) << loss << "\n";
	}
}
