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

int x = INF;
int t = 0;
bool encontrado = false;
unordered_map<string, int> visited;

void checkVisited(string s) {
    if(visited[s] > 0) {
        encontrado = true;
        x = min(x, t-visited[s]);
    }
}

int main()
{
    setIO("mowing");
    int n;
    cin >> n;

    pair<int,int> coords = {0,0};


    for(int i = 0; i < n; i++) {
        char D;
        int S;
        cin >> D >> S;
        switch(D) {
            case 'N':
                for(int i = 0; i < S; i++) {
                    string s = to_string(coords.first)+","+to_string(++coords.second);
                    checkVisited(s);
                    visited[s] = t;

                    ++t;
                }
                break;
            case 'E':
                for(int i = 0; i < S; i++) {
                    string s{to_string(++coords.first)+","+ to_string(coords.second)};
                    checkVisited(s);
                    visited[s] = t;

                    ++t;
                }
                break;
            case 'S':
                for(int i = 0; i < S; i++) {
                    string s{to_string(coords.first)+","+to_string(--coords.second)};
                    checkVisited(s);
                    visited[s] = t;

                    ++t;
                }
                break;
            case 'W':
                for(int i = 0; i < S; i++) {
                    string s{to_string(--coords.first)+","+ to_string(coords.second)};
                    checkVisited(s);
                    visited[s] = t;

                    ++t;
                }
        }
    }
    if(!encontrado) {
        cout << -1 <<"\n";
    } else {
        cout << x << "\n";
    }
}
