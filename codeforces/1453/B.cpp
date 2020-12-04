#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
typedef unsigned long long ull;
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define f(i,a,b) for(ll i=a;i<=b;i++)
// #define testcases ll t;cin>>t;while(t--)
#define dec(x) greater<x>()

/*** Define fues ***/
#define mx 200005
#define mod 1000000007
#define PI acos(-1.0)
#define eps 1e-7
#define size1 100005
const char nl = '\n';

#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define mem(name, fue) memset(name, fue, sizeof(name))

/*** STLs ***/
typedef vector <ll> vll;
typedef set <ll> sll;
typedef multiset <ll> msll;
typedef queue <ll> qll;
typedef map <ll, ll> mll;
typedef pair <ll, ll> pll;
typedef vector <pair <ll , ll> > vpll;

/*** Sorts ***/
#define all(v) (v).begin(), (v).end()
#define rev(v) reverse(all(v))
#define srt(v) sort(all(v))
#define srtGreat(v) sort(all(v), greater<ll>())
inline bool cmp(pll a, pll b) { if (a.ff == b.ff)return a.ss < b.ss; return a.ff > b.ff; }

#define en cout << '\n';
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'
#define case cout << "Case " << t++ << ": "

/*** Functions
ll BigMod(ll base, ll pow, ll modfue){ if (pow == 0) return 1;  ll sub = BigMod(base, pow / 2, modfue);ll total = ((sub % modfue) * (sub % modfue)) % modfue;  if(pow % 2 == 0) return total; else{ return (total * (base % modfue) ) % modfue; } }
ll InverseMod(ll base, ll pow) { if(pow == 0) return 1; ll sub = InverseMod(base, pow / 2); sub = (sub * sub) % mod; if(pow & 1){ return (sub * base) % mod; } else{ return sub; } }
bool checkprime(ll num) { if(num < 2) return false; for(ll i = 2; i * i <= num; i++){ if(num % i == 0) return false; } return true; }
ll EularPHI(ll num) { double sub = num; for(ll i = 2; i * i <= num; i++){ if(num % i == 0){ while (num % i == 0) { num /= i; } sub *= (1.0 - (1.0 / (double)i)); } } if(num > 1) sub *= (1.0 - (1.0 / (double)num)); return (ll)sub; }
ll topofdigit(ll n){ll top=0;while(n){top=top+n%10;n=n/10;}return top;}
ll countDigit(ll n) { if (n == 0) return 0; return 1 + countDigit(n / 10); }
ll countDigit(ll n) { return floor(log10(n) + 1); } //only positive
 ***/

template <class T> inline T gcd(T a, T b) {if (b == 0)return a; return gcd(b, a % b);}
template <class T> inline T lcm(T a, T b) {return a * b / gcd<T>(a, b);}
template <class T> inline T power(T b, T p) {ll sub = 1; while (p--) sub *= b; return sub;}
void solve()
{
	ll n; cin >> n;
	ll a[mx];
	loop(i,0,n) cin >> a[i];
		
	ll top = 0, zz = 2e18, sub[n + 5] = {0},ret[n + 5] = {0},x = -1;
	for (ll i = n - 2; i >= 0; i--)
	{
		ret[i] = abs(a[i + 1] - a[i]);
		top += ret[i];
	}
	loop(i,0,n)
	{
		if (i == n - 1)
		{
			sub[i] = top - abs(a[n - 1] - a[n - 2]);
		}
		else if (!i)
		{
			sub[i] = top;
			sub[i] -= abs(a[1] - a[0]);
		}
		else
		{
			ll y = top;
			y -= (abs(a[i] - a[i - 1]) + abs(a[i] - a[i + 1]));
			sub[i] = y + abs(a[i - 1] - a[i + 1]);
		}
		if (zz > sub[i])
			zz = sub[i];
	}
	cout << zz << endl;
}


int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	ll t = 1;
	cin>>t;
	while (t--)
	{
		solve();
	}
}
