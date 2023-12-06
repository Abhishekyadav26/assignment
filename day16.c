#include <stdio.h>
#include <ctype.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isdigit(ch)) {
        printf("'%c' is an integer.\n", ch);
    } else if (isupper(ch)) {
        printf("'%c' is an uppercase letter.\n", ch);
    } else if (islower(ch)) {
        printf("'%c' is a lowercase letter.\n", ch);
    } else {
        printf("'%c' is not an integer or a letter.\n", ch);
    }

    return 0;
}
