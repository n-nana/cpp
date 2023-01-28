//ABC287B - Postal Card

#include <algorithm>
#include <iostream>
#include <cmath>
#include <queue>
#include <string>
#include <vector>
#include <set>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N,M;
    cin >> N >> M;
    
    vector<string> S(N);
    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        S[i] = s.substr(s.size()-3); //文字列の範囲を指定
    }
    
    //集合T
    set<string> T;
    for (int i = 0; i < M; i++) {
        string t;
        cin >> t;
        T.insert(t); //集合Tに要素tを追加
    }
    
    int cnt;
    cnt = 0;
    for (int i = 0; i < N; i++) {
        if (T.find(S[i]) != T.end()) cnt++; // 要素S[i]が集合Tに含まれるかどうか判定
    }
    cout << cnt << endl;
}
