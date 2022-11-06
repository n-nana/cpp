// 隣接リスト

#include <algorithm> //sort
#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N,M;
    cin >> N >> M;

    vector<vector<int>> E(N);
    for (int j = 0; j < M; j++) {
        int A,B;
        cin >> A >> B;
        E[A-1].push_back(B); // append
        E[B-1].push_back(A);
    }

    for (int i = 0; i < N; i++) {
        sort(begin(E[i]), end(E[i])); // sort
        cout << size(E[i]); // len(E[i])
        for (int j = 0; j < size(E[i]); j++) {
            cout << " " << E[i][j]; // w/ space
        }
        cout << '\n'; // 改行
    }
}
