#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

vector<ar<double, 3>> v;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		v=vector<ar<double, 3>>(n);
		for(int i=0; i<n; ++i)
			cin >> v[i][0] >> v[i][1] >> v[i][2];
		double sum=0;
		for(int i=0; i<n; ++i) {
			double inc=v[i][0]+(v[i][0]*v[i][2]/100);
			double dec=inc-(inc*v[i][2]/100);
			double cnt=0;
			while(v[i][1]--)
				if(dec<v[i][0])
					cnt+=(v[i][0]-dec);
			sum+=cnt;
		}
		cout << fixed << setprecision(9) << sum << "\n";
	}
}
