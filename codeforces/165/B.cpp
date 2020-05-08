#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
typedef unsigned long long ull;
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define testcases ll t;cin>>t;while(t--)
#define dec(x) greater<x>()

int main()
{

	#ifndef ONLINE_JUDGE
	freopen("C:/Users/91731/Documents/input.txt","r",stdin);
	freopen("C:/Users/91731/Documents/output.txt","w",stdout);
	freopen("C:/Users/91731/Documents/error.txt","w",stderr);
    #endif
	
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	ll n,k;
    cin >> n >> k;
    ll left = 0,right = n;
    while(left!=right - 1)
    {
        ll mid=(left+right)/2;
        ll x=mid,v = 0;
        while(x)
            v+=x,x/=k;
        if(v >= n)
            right = mid;
        else
            left = mid;
    }
    cout<<right;
	
}