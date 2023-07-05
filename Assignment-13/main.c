#include <stdio.h>

#define NUM_PLAYERS 5
#define NUM_GAMES 4

int main() {
    int scores[NUM_PLAYERS][NUM_GAMES];
    float averages[NUM_PLAYERS];

    // Input scores for each player
    for (int i = 0; i < NUM_PLAYERS; i++) {
        printf("Enter scores for Player %d:\n", i + 1);
        for (int j = 0; j < NUM_GAMES; j++) {
            printf("Game %d: ", j + 1);
            scanf("%d", &scores[i][j]);
        }
        printf("\n");
    }

    // Calculate averages for each player
    for (int i = 0; i < NUM_PLAYERS; i++) {
        int total = 0;
        for (int j = 0; j < NUM_GAMES; j++) {
            total += scores[i][j];
        }
        averages[i] = (float)(total / NUM_GAMES);
    }

    // Find the player with the highest average
    int highest_index = 0;
    for (int i = 1; i < NUM_PLAYERS; i++) {
        if (averages[i] > averages[highest_index]) {
            highest_index = i;
        }
    }

    printf("Player %d had the highest scoring average: %.2f\n", highest_index + 1, averages[highest_index]);

    return 0;
}

