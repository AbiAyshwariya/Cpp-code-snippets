#include <stdio.h>

long long power(long long base, long long exponent, long long mod) {
    long long result = 1;
    base = base % mod;

    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = (result * base) % mod;
        }

        exponent /= 2;
        base = (base * base) % mod;
    }

    return result;
}

int main() {
    long long a, b;
    scanf("%lld %lld", &a, &b);

    long long result = power(2, power(2, a, b - 1), b);

    printf("%lld\n", result);
}