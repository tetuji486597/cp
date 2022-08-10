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
    setIO("cbarn");
    int n;
    cin >> n;
    vector<int> cows;
    int total = 0;
    for(int i = 0; i < n; i++) {
        int r;
        cin >> r;
        cows.push_back(r);
        total += r;
    }
    int ans = INF;
    for(int start = 0; start < n; start++) {
        int sum = 0;
        int tempTotal = total;
        int p = start;
        while(p!=(start+n-1)%n)
        {
            sum += tempTotal-cows[p];
            tempTotal -= cows[p];
            p = (p+1)%n;
        }
        sum += tempTotal-cows[p];
        ans = min(ans, sum);
    }
    cout << ans << endl;
}
