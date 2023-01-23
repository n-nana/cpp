//ABC286A - Range Swap

#include <algorithm>
#include <iostream>
#include <cmath>
#include <queue>
#include <string>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N,P,Q,R,S;
    cin >> N >> P >> Q >> R >> S;
    vector<int> res(N);
    
    for (int i = 0; i < N; i++) {
        if (P-1 <= i && i < Q) {
            cin >> res[i+(R-P)];
            
        } else if (R-1 <= i && i < S) {
            cin >> res[i+(P-R)];
            
        } else {
            cin >> res[i];
        }
    }
    
    // 配列を1行で出力
    for (int i = 0; i < N; i++) {
        cout << res[i] << " ";
    }  
    
}
