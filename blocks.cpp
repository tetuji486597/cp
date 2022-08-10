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
    setIO("blocks");
    int alpha[26]{};
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string a, b;
        cin >> a >> b;
        int s1[26]{};
        for(int j = 0; j < a.size(); j++) {
            s1[a.at(j)-'a']++;
        }
        int s2[26]{};
        for(int j = 0; j < b.size(); j++) {
            s2[b.at(j)-'a']++;
        }
        for(int j = 0; j < 26; j++) {
            alpha[j] += max(s1[j],s2[j]);
        }
    }
    for(auto i: alpha) {
        cout << i << "\n";
    }
}
