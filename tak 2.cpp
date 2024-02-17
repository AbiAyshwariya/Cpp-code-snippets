#include <stdio.h>

#define MOD 1000000007

long long int power(long long int base, long long int exp) {
    long long int result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % MOD;
        }
        base = (base * base) % MOD;
        exp = exp / 2;
    }
    return result;
}

int main() {
    long long int A, B;
    scanf("%lld %lld", &A, &B);

    long long int result = power(A, B);
    printf("%lld\n", result);

}