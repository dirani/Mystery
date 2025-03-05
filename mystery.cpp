#include <stdio.h>

void mystery(int x, int y, int z) {
    printf("%d %d %d\n", x, y, z);
}

int main() {
    int b = 5;
    mystery(b, b--, --b);
    return 0;
}