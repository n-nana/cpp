#include <algorithm>
#include <iostream>
#include <cmath>
#include <queue>
#include <string>
#include <vector>
#include <set>
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
    
    vector<vector<char>> G(N, vector<char>(M, '#')); // 2次元配列（初期値は#, 初期値は指定しなくても可）
    // 標準入力
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> G[i][j];
        }
    }
    
    // 3次元配列（初期値指定なし > int: 0）
    vector<vector<vector<int>>> RU(N, vector<vector<int>>(N, vector<int>(N)));

    vector<vector<int>> dist(N, vector<int>(M, -1));
    queue<pair<int, int>> que;
    cout << "ok" << endl;
}

