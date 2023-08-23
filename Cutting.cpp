#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>

#define MAX_NUMBER_OF_ROPES (int)1e2 + 5

using namespace std;

int numberOfRopes, numberOfCoins, evenCnt, oddCnt, ans,
    rope[MAX_NUMBER_OF_ROPES];
vector<int> cutCosts;

int main() {
    cin >> numberOfRopes >> numberOfCoins;
    for (int i = 0; i < numberOfRopes; i++) {
        cin >> rope[i];

        if ((oddCnt == evenCnt) and (i > 0)) {
            cutCosts.push_back(abs(rope[i] - rope[i - 1]));
        }

        if (rope[i] % 2) {
            oddCnt++;
        } else {
            evenCnt++;
        }
    }

    sort(cutCosts.begin(), cutCosts.end());

    for (auto &cutCost : cutCosts) {
        if (numberOfCoins >= cutCost) {
            numberOfCoins -= cutCost;
            ans++;
        } else {
            break;
        }
    }

    cout << ans << '\n';

    return 0;
}