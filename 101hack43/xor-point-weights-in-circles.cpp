#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <climits>

#define sq(x) (x) * (x)

using namespace std;

int main() {
    int n, m, r;
    vector<vector<int> > weight;

    scanf("%d%d%d", &n, &m, &r);
    weight = vector<vector<int> >(n, vector<int>(m, 0));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            scanf("%d", &weight[i][j]);
        }
    }

    vector<vector<int> > cum(n, vector<int>(m, 0));
    for (int i = 0; i < n; ++i) {
        cum[i][0] = weight[i][0];
        for (int j = 1; j < m; ++j) {
            cum[i][j] = weight[i][j] + cum[i][j - 1];
        }
    }

    return 0;
}