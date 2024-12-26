#include <bits/stdc++.h>
using namespace std;

uint16_t sum(uint16_t& a, uint16_t& b) {
    return a+b;
}

int main() {
    uint16_t cases;
    scanf("%hu", &cases);
    for (uint16_t caseno = 1; caseno <= cases; ++caseno) {
        uint16_t a, b;
        
        scanf("%hu %hu", &a, &b);
        printf("Case %hu: %hu\n", caseno, sum(a, b));
    }
    return 0;
}
