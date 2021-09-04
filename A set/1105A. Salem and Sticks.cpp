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
 
	int n, i, j, cost = 99999999, index = 0;
	cin >> n;
	int ara[n];
	for (i = 0; i < n; i++) {
		cin >> ara[i];
	}
 
	for (j = 1; j <= 110; j++) {
		int sum = 0;
		for (i = 0; i < n; i++) {
			if (j < ara[i]) {
				int val = (ara[i] - 1) - j;
				sum += val;
			}else if(j==ara[i]){
				
			} 
			else {
				int val = j - (ara[i] + 1);
				sum += val;
			}
		}
		if (sum < cost) {
			cost = min(cost, sum);
			index = j;
		}
 
	}
	if (cost < 0) {
		cost = 0;
	}
	cout << index << " " << cost << endl;
}
int main()
{
	solve();
}
