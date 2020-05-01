#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define testcases ll t;cin>>t;while(t--)
#define pb push_back
#define all(x) x.begin(), x.end()
#define dec(x) greater<x>()

template <typename T1, typename T2>
struct less_second 
{
	typedef pair<T1, T2> type;
	bool operator ()(type const& a, type const& b) const 
	{
		return a.second > b.second;
	}
};
ll cmp(ll a,ll b){return a>b;}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("C:/Users/91731/Documents/input.txt","r",stdin);
	freopen("C:/Users/91731/Documents/output.txt","w",stdout);
	freopen("C:/Users/91731/Documents/error.txt","w",stderr);
    #endif
	
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	testcases
	{
		ll n;
		cin>>n;
		vector<ll>v(n),f(n+1,0);
		for(ll i=0;i<n;i++)
		{ 
			cin>>v[i]; f[v[i]]++;  
		}
		sort(f.begin(),f.end());
		ll sum = f[n];
		for(ll i=n-1;i>=1;i--)
		{
			if(f[i]>=f[i+1])    f[i]=f[i+1]-1;
			if(f[i]>0)  sum+=f[i];
		}
		cout<<sum<<endl;



	}
	
}