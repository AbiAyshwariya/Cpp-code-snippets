#include <stdio.h>

int hitReceptor(int p, int q) {
    int dist_to_0 = dist_to_0%(p*2);
    
    if (dist_to_0 == 0) {
        return 0;  // Hits receptor 0
    } else if (q >= p) {
        return 2;  // Hits receptor 2
    } else {
        return 1;  // Hits receptor 1
    }
}

int main() {
    int p, q;
    scanf("%d %d", &p, &q);
    printf("%d\n", hitReceptor(p, q));

    return 0;
}



