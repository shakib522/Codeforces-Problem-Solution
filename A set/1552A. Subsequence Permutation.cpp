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
 
	int n,i,cnt=0;
	cin>>n;
	string s,cps;
	cin>>s;
	cps=s;
	sort(s.begin(), s.end());
	for(i=0;i<s.length();i++){
		if(cps[i]!=s[i]){
			cnt++;
		}
	}
	cout<<cnt<<endl;
}
int main()
{
	int testcase;
	cin >> testcase;
	while (testcase--) {
		solve();
	}
 
}
