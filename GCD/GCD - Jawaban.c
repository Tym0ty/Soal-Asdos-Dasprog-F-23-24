#include <stdio.h>

int gcd(long long int a, long long int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
	int x;
	scanf("%d", &x);
	while (x--){
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    if (a < b) {
        long long int c = b;
        b = a;
        a = c;
    }
    long long int result = gcd(a, b);
    printf("%lld\n", result);
}
    return 0;
}
