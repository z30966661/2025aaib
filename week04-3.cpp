// week04-3.cpp
// SOIT107_BASE_018
#include <stdio.h>

int main() {
    int N, i;
    scanf("%d", &N);
    for (i = 2; i <= N; i += 2) {
        printf("%d ", i);
    }
    return 0;
}
