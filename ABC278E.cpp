//ABC278E - Grid Filling

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
    int H,W,N,h,w;
    cin >> H >> W >> N >> h >> w;
    
    // 標準入力(2次元リスト)
    // 初期値を指定する場合: vector<vector<int>> A(H, vector<int>(W,0));
    vector<vector<int>> A(H, vector<int>(W));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> A[i][j];
        }
    }
    
    // 3次元リスト
    vector<vector<vector<int>>> RU(N+1, vector<vector<int>>(H+3, vector<int>(W+3,0)));
    for (int p = 0; p < N+1; p++) {
        for (int i = 0; i < H; i++) {
            for (int j = 0; j < W; j++) {
                RU[p][i+1][j+1] = RU[p][i+1][j] + RU[p][i][j+1] - RU[p][i][j];
                if (p==A[i][j]) RU[p][i+1][j+1]++;
            }
        }
    }
    
    int K = H-h+1;
    int L = W-w+1;
    vector<vector<int>> res(K, vector<int>(L,0));
    for (int i = 0; i <K; i++) {
        for (int j = 0; j < L; j++) {
            for (int p = 1; p < N+1; p++) {
                int cnt;
                cnt = RU[p][H][W] - RU[p][i+h][j+w] + RU[p][H][j] + RU[p][i][W];
                if (cnt > 0) res[i][j]++;
            }
        }
    }
    for (int i = 0; i < K; i++) {
        for (int j = 0; j < L; j++) {
            cout << " " << res[i][j]; //空白区切りで値出力
        }
        cout << endl; //改行
//        cout << '\n'; //改行ver.2
    }
}
