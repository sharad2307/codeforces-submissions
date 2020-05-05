#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define testcases ll t;cin>>t;while(t--)
#define pb push_back
#define all(x) x.begin(), x.end()
#define dec(x) greater<x>()
const ll maxn=1e5+10;


int main()
{

	#ifndef ONLINE_JUDGE
	freopen("C:/Users/91731/Documents/input.txt","r",stdin);
	freopen("C:/Users/91731/Documents/output.txt","w",stdout);
	freopen("C:/Users/91731/Documents/error.txt","w",stderr);
    #endif
	
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	ll n,r,avg,sum=0;
	cin>>n>>r>>avg;
	pair<ll,ll> pa[maxn];
	loop(i,0,n)
	{
		cin>>pa[i].second>>pa[i].first;
		sum+=pa[i].second;
	}
	sort(pa,pa+n);
	ll need=avg*n-(sum);
	ll ans=0,i=0;
	while(need>0)
	{
		ll z=min(need,r-pa[i].second);
		ans+=z*pa[i].first;
		need-=z;
		i++;
	}
	cout<<ans;
	
	
}