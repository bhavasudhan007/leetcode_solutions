#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    char stack[100];
    int top = -1;

    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];

        if (c == '(' || c == '[' || c == '{') {
            stack[++top] = c;
        }
        else {
            if (top == -1) {
                printf("false");
                return 0;
            }

            char open = stack[top--];

            if ((c == ')' && open != '(') ||
                (c == ']' && open != '[') ||
                (c == '}' && open != '{')) {
                printf("false");
                return 0;
            }
        }
    }

    printf(top == -1 ? "true" : "false");

    return 0;
}