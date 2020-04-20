#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define testcases ll t;cin>>t;while(t--)
#define pb push_back
#define all(x) x.begin(), x.end()
#define dec(x) greater<x>()

int main()
{

	
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	testcases
	{
		ll n;cin>>n;
		ll a[n],maxn=INT_MIN,z,ans=INT_MIN;
		loop(i,0,n)
		{
			cin>>z;
			maxn=max(z,maxn);
			ans=max(ans,maxn-z);
		}

		ll x=1,T=0;
		while(ans>0)
		{
			ans-=x;
			T++;
			x=x*2;
		}
		cout<<T<<endl;
	}
	
}