#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>

using namespace std;

int main() {
    string num;

    cin >> num;

    for (int i = 0; i < num.size(); i++) {
        if ((num[i] != '4') and (num[i] != '1')) {
            cout << "NO" << '\n';
            return 0;
        }

        if (num[i] == '4') {
            if (((i > 0) and (num[i - 1] == '1')) or
                ((i > 1) and (num[i - 2] == '1'))) {
                continue;
            }

            cout << "NO" << '\n';
            return 0;
        }
    }

    cout << "YES" << '\n';
    return 0;
}