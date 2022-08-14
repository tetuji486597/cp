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
    setIO("shuffle");
    int n;
    cin >> n;
    int buckets[1001]{};
    for(int i = 0; i < n; i++) {
        int s, t, b;
        cin >> s >> t >> b;
        for(int j = s+1; j < t; j++) {
            buckets[j] += b;
        }
    }
    int ans = 0;
    for(int i = 0; i < 1001; i++) {
        ans = max(ans, buckets[i]);
    }
    cout << ans << "\n";
    


}
