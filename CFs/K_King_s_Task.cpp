// onAC(ALPHA) =>{Target Next ICPC ^-^}
//   ^-^      ^-^       ^-^    ^-^     ^-^
#include <bits/stdc++.h>

using namespace std;

int a[2010];
int n;
int b[2010];


bool check() {
    for (int i = 1; i <= 2 * n - 1; i++) {
        if (a[i] != a[i + 1] - 1) return false;
    }
    return true;
}

bool gao1() {
    for (int i = 1; i <= 2 * n; i += 2) {
        swap(a[i], a[i + 1]);
    }
    return check();
}

bool gao2() {
    for (int i = 1; i <= n; i++) {
        swap(a[i], a[n + i]);
    }
    return check();
}

int main() {
    scanf("%d",&n);
    for (int i = 1; i <= 2 * n; i++) {
        scanf("%d",&b[i]);
    }
    
    const int INF = 1e9;
    int ans = INF;
    int now;

    for (int i = 1; i <= 2 * n; i++) {
        a[i] = b[i];
    }
    if (check()) ans = 0;

    for (int i = 1; i <= 2 * n; i++) {
        a[i] = b[i];
    }
    now = 0;
    for (int i = 1; i <= 10 * n; i++) {
        now++;
        if (gao1()) ans = min(ans, now);
        now++;
        if (gao2()) ans = min(ans, now);
    }

    for (int i = 1; i <= 2 * n; i++) {
        a[i] = b[i];
    }
    now = 0;
    for (int i = 1; i <= 10 * n; i++) {
        now++;
        if (gao2()) ans = min(ans, now);
        now++;
        if (gao1()) ans = min(ans, now);
    }

    if (ans == INF) ans = -1;
    printf("%d\n",ans);
}
