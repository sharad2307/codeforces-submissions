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

	queue<ll> q1,q2;

	ll ans=0,la,lb,x,g;
	cin>>g;
	cin>>la;
	for(ll i=0;i<la;i++)
	{
		cin>>x;
		q1.push(x);
	}
	cin>>lb;
	for(ll i=0;i<lb;i++)
	{
		cin>>x;
		q2.push(x);
	}
	while(q1.size() && q2.size() && ans<10000)
	{
		ll t1,t2;ans++;
		t1=q1.front();t2=q2.front();
		q1.pop();q2.pop();
		if(t1>t2)
		{
			q1.push(t2);
			q1.push(t1);
		}
		else
		{
			q2.push(t1);
			q2.push(t2);
		}
	}
	if(ans==10000)
	{
		cout<<-1;
	}else 
	{
		cout<<ans<<" ";
		if(q1.empty())
			cout<<2;
		else cout<<1;
	}

	
}