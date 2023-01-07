//ABC284B - Multi Test Cases

#include <algorithm>
#include <iostream>
#include <cmath>
#include <queue>
#include <string>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

//解答を関数化
void solve() {
    int n,res;
    res = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        int a;
        cin >> a;
        if (a%2 == 1) res++;
    }
    cout << res << endl;
}

//main部
int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
}
