#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>

using namespace std;

#define FOR(i, a, n, b) for(int i=int(a); i<n; i+=b)
#define vt vector
#define ll long long
#define pb push_back
#define rep(i, k, n, a) for(int i=int k;k<int n?i<n:i>n;k<n?i+=a:i-=a)
#define REP(i, k, n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define each(i, a) for(auto& i: a)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define read(n) cin >> n
#define READ(a, b) cin >> a >> b
#define ft front()
#define bk back()
#define pf push_front()
void solve() {
	int n, ans=0, a=0;
	read(n);
	string s;
	read(s);
	if(n<4)
		cout << "YES" << endl;
	else {
		for(int i=0; i<n; ++i) {
			if(s[i]!='a' || s[i]!='e' || s[i]!='i' || s[i]!='o' || s[i]!='u') { 
				ans++;
				if(ans>=4) {
					a=1;
					cout << "NO" << endl;
					break;
				}
				else
					continue;
			}
			else {
				ans=0;	
				a=0;
			}
		}
		if(a==0)
			cout << "YES" << endl;
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll t;
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}

