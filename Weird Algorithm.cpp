
#include <bits/stdc++.h>
 
using ll = long long;
#define rep(i,b) for(ll(i)= 0 ;i<(b);i++)
#define per(i,b) for(ll(i)=ll(b)-1;i>=0;i--)
#define reep(i,a,b) for(ll (i)=ll(a);i<(b);i++)
#define peer(i,b,a) for(ll (i)=ll(b)-1;i>=(a);i--)
#define all(x) x.begin(),(x).end()
#define pb() push_back()
#define len() length()
#define x first
#define y second
#define pll pair<ll, ll>
#define pii pair<int, int>
 
using namespace std;
 
string alph = "abcdefghijklmnopqrstuvwxyz";
 
 
void solve(){
    ll n;
    cin >> n;
    cout << n << ' ';
    while (n != 1){
        if (!(n % 2)){
            n /= 2;
            cout << n << ' ';
        } else{
            n *= 3;
            n++;
            cout << n << ' ';
        }
    }
 
}
 
int main() {
    int n = 1;
    //cin >> n;
    rep(i, n) solve();
    return 0;
}
