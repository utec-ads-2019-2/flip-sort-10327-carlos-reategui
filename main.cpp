#include <iostream>

int main() {
    unsigned int n;
    while (scanf("%u", &n) != EOF) {
        int numbers[n], flips = 0;
        for (unsigned int i = 0; i < n; i++)
            scanf("%d", &numbers[i]);

        for (unsigned int i = 0; i < n - 1; i++) {
            for (unsigned int j = 0; j < n - i - 1; j++) {
                if (numbers[j] > numbers[j + 1]) {
                    std::swap(numbers[j + 1], numbers[j]);
                    flips++;
                }
            }
        }
        printf("Minimum exchange operations : %u\n", flips);
    }
    return 0;
}