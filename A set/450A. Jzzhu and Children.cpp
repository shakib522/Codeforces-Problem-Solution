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
 
	int n,m,i,val;
	cin>>n>>m;
	vector<pair<int,int>> vec;
	for(i=0;i<n;i++){
		cin>>val;
		vec.pb(mp(val,i));
 
	}
	for(i=0;i<vec.size();i++){
		vec[i].first-=m;
		if(vec[i].first>0){
			vec.pb(mp(vec[i].first,vec[i].second));
		}
	}
	cout<<(vec[i-1].second)+1<<endl;
}
int main()
{
	
	solve();
 
}
