#include <bits/stdc++.h>

using namespace std;

void setIO(string name = ""){ // FastIO see General -> Fast Input and Output
    ios_base::sync_with_stdio(0); cin.tie(0);
    if(name.size()){
        freopen((name+".in").c_str(), "r", stdin);
        freopen((name+".out").c_str(), "w", stdout);
    }
}

const int INF = int(1e9);
using ll = long long;

int main()
{
    setIO("speeding");
    ll x, y;
    cin >> x >> y;
    ll ans = 0;
    ll by = 1;
    ll dir = 1;
    while(true) {
        if((by>=(y-x) && dir == 1 && x<= y) || (by>=(x-y) && dir == -1 && x>=y)) {
            ans += abs(y-x);
            cout << ans << "\n";
            break;
        } else {
            ans+=by*2;
            by*=2;
            dir*=-1;
        }
    }

}
