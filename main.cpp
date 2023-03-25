
#include <stdio.h>

bool is_square(int n) {
    int i = 1;
    while (n > 0) {
        n -= i;
        i += 2;
    }
    return n == 0;
}

int count_squares(int a, int b, int c) {
    int count = 0;
    if (is_square(a)) count++;
    if (is_square(b)) count++;
    if (is_square(c)) count++;
    return count;
}

void count_squares(int a, int b, int c, int* count) {
    *count = 0;
    if (is_square(a)) (*count)++;
    if (is_square(b)) (*count)++;
    if (is_square(c)) (*count)++;
}

void count_squares(int a, int b, int c, int& count) {
    count = 0;
    if (is_square(a)) count++;
    if (is_square(b)) count++;
    if (is_square(c)) count++;
}

int main() {
    int a, b, c;
    printf("Enter three natural numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    int count1 = count_squares(a, b, c);
    int count2;
    count_squares(a, b, c, &count2);
    int count3;
    count_squares(a, b, c, count3);
    printf("Number of squares: %d, %d, %d\n", count1, count2, count3);
    return 0;
}
