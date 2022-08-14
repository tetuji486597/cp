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


int main()
{
    setIO("cowsignal");
    int M, N, K;
    cin >> M >> N >> K;
    for(int i = 0; i < M; i++) {
        string signal; cin >> signal;
        for(int it = 0; it < K; it++) {
            for(int j = 0; j < N; j++) {
                for(int a = 0; a < K; a++) {
                    cout << signal[j];
                }
            }
            cout << "\n";
        }

    }

}
