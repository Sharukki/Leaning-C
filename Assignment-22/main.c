#include <stdio.h>

struct player {
    int total_points;
    int games_played;
};

int main() {
    struct player players[5];  // Array of structures with five elements
    
    // Loop to input point totals and games played for each player
    for (int i = 0; i < 5; i++) {
        printf("Enter total points for Player %d: ", i + 1);
        scanf("%d", &players[i].total_points);
        
        printf("Enter games played for Player %d: ", i + 1);
        scanf("%d", &players[i].games_played);
    }
    
    printf("\nPlayer\tAverage\n");
    
    // Loop to calculate and display scoring averages for each player
    for (int i = 0; i < 5; i++) {
        double average = (double)players[i].total_points / players[i].games_played;
        printf("%d\t%.2lf\n", i + 1, average);
    }
    
    return 0;
}

