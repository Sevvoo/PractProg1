//lab1
#include <stdio.h>

int main() {
    int t1, t2, t3;
    printf("Enter the time for guest 1 (t1): ");
    scanf("%d", &t1);
    printf("Enter the time for guest 2 (t2): ");
    scanf("%d", &t2);
    printf("Enter the time for guest 3 (t3): ");
    scanf("%d", &t3);

    double total_time = 1.0 / (1.0 / t1 + 1.0 / t2 + 1.0 / t3);

    printf("The time required for the guests to eat the cake: %.2f hours\n", total_time);

    return 0;
}


//lab4
#include <stdio.h>

int main() {
    int n;
    printf("Enter a natural number: ");
    scanf("%d", &n);

    int count = 0; // counter for equal divisors

    for (int i = 1; i <= n; i++) {
        if (n % i == n / i) { // checking the quotient and remainder of division
            count++;
        }
    }

    printf("The number of equal divisors of %d is %d\n", n, count);

    return 0;
}
