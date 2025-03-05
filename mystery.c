#include <stdio.h>

void mystery(int x, int y, int z) {

}

int main() {
    int b = 5;
    mystery(b, b--, --b);
    return 0;
}