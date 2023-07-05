#include <stdio.h>
int main() 
{
  int scores[10];
  int num_scores = 0;
  int total_score = 0;
  char choice;
    do 
    {
      int score;
      printf("Enter test score: ");
      scanf("%d", &score);

      scores[num_scores] = score;
      num_scores++;
      total_score += score;

      printf("Do you want to continue? (y/n): ");
      scanf(" %c", &choice);
    } 
  while (choice == 'y' || choice == 'Y');
  float average = (float)total_score / num_scores;
  printf("Average test score: %.2f\n", average);
  
  return 0;
}
