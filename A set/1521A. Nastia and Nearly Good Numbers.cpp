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
	ll a, b, a2, b2;
	cin >> a >> b;
	if(b==1){
		cout<<"NO"<<endl;
		return;
	}
	cout<<"YES"<<endl;
	cout<<a<<" "<<a*(ll)b<<" "<<a*(ll)(b+1)<<endl;
 
}
int main()
{
	int testcase;
	cin >> testcase;
	while (testcase--) {
		solve();
	}
	return 0;
}
