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
    setIO("gymnastics");
    int K, N;
    cin >> K >> N;
    unordered_set<string> wrong_pairings;
    vector<int> order(N);
    for(int &t: order) cin >> t;
    for(int j = 0; j < N-1; j++) {
        for(int k = j+1; k < N; k++) {
            wrong_pairings.insert(to_string(order[k])+","+ to_string(order[j]));
        }
    }

    for(int i = 0; i < K-1; i++) {
        vector<int> order(N);
        for(int &t: order) cin >> t;
        for(int j = 0; j < N-1; j++) {
            for(int k = j+1; k < N; k++) {
                if(wrong_pairings.find(to_string(order[j])+","+ to_string(order[k])) != wrong_pairings.end()) {
                    wrong_pairings.erase(to_string(order[j])+","+ to_string(order[k]));
                }
            }
        }
    }
    cout << wrong_pairings.size() << "\n";
}
