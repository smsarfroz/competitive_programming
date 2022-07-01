/**
 *   اقْرَأْ بِاسْمِ رَبِّكَ الَّذِي خَلَقَ 
 *   خَلَقَ الْإِنْسَانَ مِنْ عَلَقٍ 
**/ 
#include<algorithm>
#include<iostream>
#include<vector>
#include<cstring>
#include<queue>
#include<set>
#include<map>
#include<stack>
#include<iomanip>
#include<bitset>
#include<climits>
#include<functional>
using namespace std;
using ll = long long;
using ld = long double;

#define rep(i,j, k)  for(int i = j; i < (k); ++i)
#define ms0(X) memset((X), 0, sizeof((X)))
#define sz(x) (int)x.size()
#define all(x) (x).begin(),(x).end()
#define rall(v) v.rbegin(),v.rend()
#define trav(a,x) for (auto& a: x)
#define nl "\n"
#define vc vector
#define vi vc<int>
#define f first 
#define s second
#define mp make_pair
#define pb push_back
#define pi pair<int,int>
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
#define sum(a)     ( accumulate ((a).begin(), (a).end(), 0ll))
#define mine(a)    (*min_element((a).begin(), (a).end()))
#define maxe(a)    (*max_element((a).begin(), (a).end()))
#define mini(a)    ( min_element((a).begin(), (a).end()) - (a).begin())
#define maxi(a)    ( max_element((a).begin(), (a).end()) - (a).begin())
#define lowb(a, x) ( lower_bound((a).begin(), (a).end(), (x)) - (a).begin())
#define uppb(a, x) ( upper_bound((a).begin(), (a).end(), (x)) - (a).begin())
void setIO(string name = "") {
    cin.tie(0)->sync_with_stdio(0); 
    if (sz(name)) {
        freopen((name+".in").c_str(), "r", stdin); 
        freopen((name+".out").c_str(), "w", stdout);
    }
}
template<typename T, typename U> void amin(T& a, U b){if (a > b) a = b;}
template<typename T, typename U> void amax(T& a, U b){if (a < b) a = b;}
//<-------------------------------debug----------------------------------->//
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(const T &t,const V &... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
//<-------------------------------debug----------------------------------->//
const int N=2e5+10;
const int dx[]={0,0,-1,1},dy[]={-1,1,0,0};
//#define int ll
void solve(){
   
}  
signed main(){
    setIO();
    int t=1;
    //cin >> t;
    while(t--) solve();
    return 0;
}
/*
*/
