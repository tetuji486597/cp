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
const int maxB = 1000000;
using ll = long long;

int main()
{
    setIO("balancing");
    int cow_num;
    int max_pos;  // We won't use this variable
    cin >> cow_num >> max_pos;

    vector<int> x_vals(cow_num);
    vector<int> y_vals(cow_num);
    set<int> vfence;
    set<int> hfence;
    for(int i = 0; i < cow_num; i++) {
        cin >> x_vals[i] >> y_vals[i];
        vfence.insert(x_vals[i]+1);
        hfence.insert(y_vals[i]+1);
    }
    int ans = cow_num;
    for(int i : vfence) {
        for(int j : hfence) {
            int quadrants[4]{};
            for(int c = 0; c < cow_num; c++) {
                if(x_vals[c] < i && y_vals[c] < j) {
                    quadrants[0]++;
                } else if(x_vals[c] < i && y_vals[c] > j) {
                    quadrants[1]++;
                } else if(x_vals[c] > i && y_vals[c] < j) {
                    quadrants[2]++;
                } else {
                    quadrants[3]++;
                }
            }
            ans = min(ans, max({quadrants[0], quadrants[1], quadrants[2], quadrants[3]}));
        }
    }
    cout << ans << "\n";
}
