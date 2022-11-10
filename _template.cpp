#include <algorithm>
#include <iostream>
#include <cmath>
#include <queue>
#include <string>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

//const long long MOD = 998244353;
//const int dx[] = {-1,0,0,1};
//const int dy[] = {0,-1,1,0};

int main() {
    int N,M;
    cin >> N >> M;
    
//    rep(i,N) cout << "rep_test" << endl;
    
    vector<bool> check(N,false);
    vector<int> res(N);
    
    vector<vector<char>> G(N, vector<char>(M, '#'));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> G[i][j];
        }
    }
    vector<vector<int>> dist(N, vector<int>(M, -1));
    queue<pair<int, int>> que;
    cout << "ok" << endl;
}

