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
const int mod = 1e9;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
void solve(){
	fast;
	int testcase;
	cin>>testcase;
	while(testcase--){
	    int a,b,n;
	    cin>>n;
	    if(n%3==0){
	    	a=(n/3);
	    }else{
	    	a=(n/3)+1;
	    }
	    b=(n-a)/2;
	    if(a+(2*b)!=n){
	    	swap(a,b);
	    }
	    cout<<a<<" "<<b<<endl;
	}
}
 
int main()
{
	solve();
}
