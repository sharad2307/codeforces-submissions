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
	#ifndef ONLINE_JUDGE
	freopen("C:/Users/91731/Documents/input.txt","r",stdin);
	freopen("C:/Users/91731/Documents/output.txt","w",stdout);
	freopen("C:/Users/91731/Documents/error.txt","w",stderr);
    #endif
	
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	ll n;cin>>n;
	ll x[n],h[n],c=0;
	// cin>>x>>h;

	loop(i,0,n)
	cin>>x[i]>>h[i];

	loop(i,1,n)
	{
		if(x[i]-x[i-1]>h[i])
			c++;
		else if(x[i+1]-x[i]>h[i])
		{
			c++;
			x[i]+=h[i];
		}
	}
	cout<<c+1;

}