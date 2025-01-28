#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);

        char s[n + 1];
        scanf("%s", s);

        int changes = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == 'B') {
                // If it's already 'B', continue to the next character
                continue;
            }

            // Replace 'A' with 'B'
            s[i] = 'B';
            changes++;

            // Spread the change to the next k-1 positions
            for (int j = i + 1; j < i + k && j < n; j++) {
                s[j] = (s[j] == 'A') ? 'B' : 'A';
            }
        }

        printf("%d\n", changes);
        if (changes > 0) {
            for (int i = 0; i < changes; i++) {
                printf("%d B\n", i + 1);
            }
        }
    }

    return 0;
}
