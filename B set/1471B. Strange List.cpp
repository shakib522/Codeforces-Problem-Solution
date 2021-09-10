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
 
	ll n,x,val;
	ll sum=0;
	cin>>n>>x;
	ll a[n],b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=a[i];
		sum+=a[i];
		
	}
	for(ll i=0;i<n;i++){
		if(b[i]%x==0){
			b[i]=b[i]/x;
			sum+=a[i];
		}else{
			break;
		}
		if(i==n-1){
			i=-1;
		}
	}
	cout<<sum<<endl;
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