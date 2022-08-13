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
    setIO("circlecross");
    string s;
    cin >> s;
    int Start[26], End[26];
    // Set all elements of Start and End arrays to -1.
    fill(Start, Start + 26, -1);
    fill(End, End + 26, -1);
    for (int i = 0; i < s.size(); ++i) {
        if (Start[s[i]-'A'] == -1) Start[s[i]-'A'] = i;
        else End[s[i]-'A'] = i;
    }
    int ans = 0;
    for (int i = 0; i < 26; ++i)
        for (int j = 0; j < 26; ++j)
            ans += Start[i] < Start[j] && Start[j] < End[i] && End[i] < End[j];
    cout << ans << endl;
}
