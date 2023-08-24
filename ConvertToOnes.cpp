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

int numSize, reverseCost, notCost, numberOfZeroParts;
string num;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> numSize >> reverseCost >> notCost;
    cin >> num;

    numberOfZeroParts = (num[0] == '0');
    for (int i = 1; i < num.size(); i++) {
        numberOfZeroParts += ((num[i] == '0') and (num[i - 1] == '1'));
    }

    if (numberOfZeroParts == 0) {
        cout << 0;
    } else {
        cout << ((numberOfZeroParts - 1) * min(reverseCost, notCost)) + notCost;
    }

    cout << '\n';
    return 0;
}