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
		ll total,h,ans=0,naya,temp,start,root;
		while(n>0)
		{
		    start=(-1+sqrt(1+24*n))/6;
		    root=start*(start*3+1);
		    if(start>0)ans++;
		    else break;
		    root=root/2;
		    n=n-root;
		    
		}
		cout<<ans<<endl;
		// cout<<total;
	}
	
}