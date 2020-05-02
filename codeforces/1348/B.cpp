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

	testcases
	{
		int n, k;
		cin >> n >> k;
		vector<int> v(n);
		for (int &i : v) cin >> i;
			set<int> s(v.begin(), v.end());
		if (s.size() > k) {
			cout << -1 << endl;
			continue;
		}
		for (int i = 1; i <= n; i++){
			if (s.size() == k) break;
			s.insert(i);
		}
		cout << n*k << endl;
		for (int i = 0; i < n; i++)
			for (int j : s) cout << j << " ";
				
				cout << endl;
			
			
		}

		
	}