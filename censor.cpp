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
    setIO("censor");
    string s,t;
    cin >> s >> t;
    string ans{""};
    for(int i = 0; i < s.size(); i++) {
        ans += s[i];
        if(ans.size() >= t.size() && ans.substr(ans.size()-t.size()) == t) {
            ans.resize(ans.size()-t.size());
        }
    }
    cout << ans << "\n";
}
