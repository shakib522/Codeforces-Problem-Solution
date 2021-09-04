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
 
	int n, k, subNum = 0, cnt = 0;
	bool ok = true;
	vector<int>vec;
	cin >> n >> k;
	string s;
	cin >> s;
	char alpha[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	for (int i = 0; i < 26; i++) {
		cnt = 0;
		subNum = 0;
		ok = true;
		for (int j = 0; j < s.length(); j++) {
			if (s[j] == alpha[i]) {
				ok = true;
				cnt++;
			} else {
				ok = false;
				if (cnt >= k) {
					subNum += (cnt / k);
				}
				cnt = 0;
			}
		}
		if (ok) {
			ok = false;
			if (cnt >= k) {
				subNum += (cnt / k);
			}
		}
		vec.pb(subNum);
	}
	cout << *max_element(vec.begin(), vec.end()) << endl;
}
int main()
{
	solve();
}
