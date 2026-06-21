// 12. Find the sum of natural numbers
#include<stdio.h>
int main() {
    int n, i, sum = 0;
    printf("Input a number: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++) {
        sum += i; // same thing as sum = sum + i;
    }
    
    printf("%d\n", sum);
    
    return 0;
}