#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char strs[100][100];

    for (int i = 0; i < n; i++)
        scanf("%s", strs[i]);

    int len = strlen(strs[0]);

    for (int i = 1; i < n; i++) {
        int j = 0;

        while (j < len && strs[0][j] == strs[i][j])
            j++;

        len = j;
    }

    for (int i = 0; i < len; i++)
        printf("%c", strs[0][i]);

    return 0;
}