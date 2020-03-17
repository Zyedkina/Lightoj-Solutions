#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
#define debug(args...)do{cerr<< #args << " : ";shaon(args);}while(0)
void shaon () { cerr << endl; }
template <typename T, typename ... north>
void shaon(T arg, const north &... rest){cerr << arg << ' ';shaon(rest...);}
 
ll T, tc, n, a[1002], dp[1002][2][2], vis[1002][2][2];
bool b[1002];
 
ll solve (ll x, bool p, bool zero)
{
    if(x==n){
        if(p==0 && zero==0) return a[x];
        return 0;
    }
 
    ll &r=dp[x][p][zero];
 
    if(vis[x][p][zero]==tc) return r;
    vis[x][p][zero]=tc;
    r=solve(x+1,0,zero);
 
    if(x==1){
        r=max(r,a[1]+solve(x+1,1,1));
    }
    else if(p==0){
        r=max(r,a[x]+solve(x+1,1,zero));
    }
 
    return r;
}
 
int main()
{
    scanf("%lld",&T);
 
    for(tc=1; tc<=T; tc++){
        scanf("%lld",&n);
        for(ll i=1; i<=n; i++) scanf("%lld",&a[i]);
        printf("Case %lld: %lld\n",tc,solve(1,0,0));
    }
 
    return 0;
}
