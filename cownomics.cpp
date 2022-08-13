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
    setIO("cownomics");
    int N, M;
    cin >> N >> M;
    vector<string> spot;
    vector<string> plain;
    for(int j = 0; j < N; j++) {
        string s;
        cin >> s;
        spot.push_back(s);
    }

    for(int j = 0; j < N; j++) {
        string s;
        cin >> s;
        plain.push_back(s);
    }
    int ans = 0;
    for(int pos = 0; pos < M; pos++) {
        unordered_set<char> spotted;
        for(int j = 0; j < N; j++) {
            spotted.insert(spot[j].at(pos));
        }
        bool found = false;
        for(int j = 0; j < N; j++) {
            if(spotted.find(plain[j].at(pos)) != spotted.end()) {
                found = true;
                break;
            }
        }
        if(!found) ans++;
    }
    cout << ans << "\n";
}
