#include <stdio.h>

int get_max_card(int cards[], int size) {
    int max = cards[0];
    for (int i = 1; i < size; i++) {
        if (cards[i] > max) {
            max = cards[i];
        }
    }
    return max;
}

int main() {
    int cards[] = { 3, 8, 4, 1, 9, 7, 5, 2, 6, 10 };
    int size = sizeof(cards) / sizeof(cards[0]);
    int max_card = get_max_card(cards, size);
    printf("The maximum card is %d\n", max_card);
    return 0;
}