#include <cstdio>
using namespace std;

int n, d;
int a[1000100];

int main() {
    scanf("%d%d", &n, &d);
    for (int i = 0; i < n; ++i) {
        scanf("%d", a + i);
    }

    for (int i = 0; i < n; ++i) {
        int index = i + d;
        if (index >= n) {
            index -= n;
        }
        printf("%d%c", a[index], i == n - 1 ? '\n' : ' ');
    }
    return 0; 
}