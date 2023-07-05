#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num_flips;
    int heads_count = 0;
    int tails_count = 0;

    printf("Enter the number of coin flips: ");
    scanf("%d", &num_flips);

    srand(time(NULL));

    printf("Coin flip results:\n");
    for (int i = 0; i < num_flips; i++) {
        int flip = rand() % 2;  
        if (flip == 0) {
            heads_count++;
        } else {
            tails_count++;
        }
    }

    printf("%d heads\n", heads_count);
    printf("%d tails\n", tails_count);

    return 0;
}

