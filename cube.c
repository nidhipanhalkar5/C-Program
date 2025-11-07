#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Number\tCube\n");
    for(i = 1; i <= n; i++) {
        printf("%d\t%d\n", i, i*i*i);
    }

    return 0;
}
