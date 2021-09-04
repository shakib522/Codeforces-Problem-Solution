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
	ll n,a=0;
	cin>>n;
	while(n>9){
		n-=9;
		a+=9+(n%10);
		n=n/10;
	}
	cout<<n+a<<endl;
}
int main()
{
	solve();
}
