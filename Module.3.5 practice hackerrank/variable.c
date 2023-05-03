#include <stdio.h>

int main() {
    int A;
    long long B;
    float C;
    char D;
    
    // Taking input
    scanf("%d %lld %f %c", &A, &B, &C, &D);
    
    // Outputting the values
    printf("%d\n", A);
    printf("%lld\n", B);
    printf("%.6f\n", C);
    printf("%c\n", D);
    
    return 0;
}
