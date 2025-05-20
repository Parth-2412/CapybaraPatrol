#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

#define pll pair<ll,ll>
#define ll long long
#define ull unsigned long long
#define ld long double
#define vdll vector<vll>
#define vpll vector<pair<ll,ll>>
#define vll vector<ll>
#define vs vector<string>
#define gridinp(g,n,m) for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin>>g[i][j]
#define loop(i,n) for(ll i=0;i<n;i++)
#define all(x) x.begin(),x.end()
#define eb emplace_back
#define vinp(v,n) vll v(n,0);for(auto &x:v)cin>>x
#define FAST ios::sync_with_stdio(false);cin.tie(nullptr)
#define qll queue<ll>
#define lo(v,t) lower_bound(all(v),t)
#define hi(v,t) upper_bound(all(v),t)
#define findit(t,v) find(all(v),t)==v.end()
#define pvec(v) for(auto &x:v){cout<<x<<" ";}cout<<endl;
#define one(i,n) for(ll i=1;i<=n;i++)
#define pb push_back
#define ff first
#define ss second
#define inp(n) ll n;cin>>n
#define rall(v) v.rbegin(), v.rend()
#define endl "\n"

int main(){
    inp(n);
    vinp(a,n);
    vinp(b,n);
    ll total_a = accumulate(all(a), 0);
    ll total_b = accumulate(all(b), 0);
    ll diff = total_b - total_a;
    ull ans = 0;
    loop(i,n){
        loop(j,n){
            ll el = a[i];
            if(b[j] > (total_b-total_a)/2 + a[i]){
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
