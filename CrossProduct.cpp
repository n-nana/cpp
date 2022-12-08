#include <algorithm>
#include <iostream>
#include <cmath>
#include <queue>
#include <string>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int CrossProduct(int x, int y, int x1, int y1, int x2, int y2) {
    return (x-x2)*(y1-y2) - (x1-x2)*(y-y2);
}

int main() {
    vector<int> X{0,4,0,1,2,3};
    vector<int> Y{0,0,4,1,2,3};
    int N = X.size();

    for (int c1 = 0; c1 < N-2; c1++) {
        for (int c2 = c1+1; c2 < N-1; c2++) {
            for (int c3 = c2+1; c3 < N; c3++) {
                for (int k = 0; k < N; k++) {
                    if ((k==c1)||(k==c2)||(k==c3)) {
                        continue;
                    }
                    int cp23,cp31,cp12;
                    cp23 = CrossProduct(X[k], Y[k], X[c2], Y[c2], X[c3], Y[c3]);
                    cp31 = CrossProduct(X[k], Y[k], X[c3], Y[c3], X[c1], Y[c1]);
                    cp12 = CrossProduct(X[k], Y[k], X[c1], Y[c1], X[c2], Y[c2]);
                    
                    bool is_inside = false;
                    if (cp23 >= 0 && cp31 >= 0 && cp12 >= 0) {
                        is_inside = true;
                    } else if (cp23 <= 0 && cp31 <= 0 && cp12 <= 0) {
                        is_inside = true;
                    }
//                    cout << is_inside << endl;
                }
            }
        }
    }
}
