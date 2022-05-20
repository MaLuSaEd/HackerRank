#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;




int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    stack<string> previus;
    string S = "";
    int Q, nro;
    string tmp_s;
    int tmp_i;
    cin >> Q;
    for (int i = 0; i < Q; i++) {
        cin >> nro;

        if (nro == 1) {
            cin >> tmp_s;
            previus.push(S);
            S.append(tmp_s);
        }else if (nro == 2) {
            cin >> tmp_i;
            previus.push(S);
            for (int j = 0; j < tmp_i; j++) {
                S.pop_back();
            }
        }else if (nro == 3) {
            cin >> tmp_i;
            cout<< S[tmp_i-1]<<endl;
        }else if (nro == 4) {
            S = previus.top();
            previus.pop();
        }
    }
    return 0;
}
