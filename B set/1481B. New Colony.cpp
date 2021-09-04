#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define dd double
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define pr printf
#define sc scanf
const int mod = 1e9 + 7;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
 
void solve() {
 
	int i, j, n, k, ans = -1;
	cin >> n >> k;
	int ara[n];
	for (i = 0; i < n; i++) {
		cin >> ara[i];
	}
	for (i = 1; i <= k; i++) {
		ans=-1;
		for (j = 0; j < n-1; j++) {
 
			if (ara[j]<ara[j+1]) {
				ans=j+1;
				ara[j]++;
				break;
			}
		}
		if(ans==-1){
			break;
		}
 
	}
	cout << ans << endl;
}
int main()
{
	int testcase;
	cin >> testcase;
	while (testcase--) {
		solve();
	}
 
}
