#include <stdio.h>
int main()
{
  int numbers[] = {36, 24, 12, 6, 4, 13, 53, 22, 10, 42};
  printf("1. %i\n", numbers[0]);
  printf("2. %i\n", numbers[1]);
  printf("3. %i\n", numbers[2]);
  printf("4. %i\n", numbers[3]);
  printf("5. %i\n", numbers[4]);
  printf("6. %i\n", numbers[5]);
  printf("7. %i\n", numbers[6]);
  printf("8. %i\n", numbers[7]);
  printf("9. %i\n", numbers[8]);
  printf("10. Die Antwort des Universums ist %i.\n", numbers[9]);
  printf("---\n");
  printf("The array has %d elements.\n", sizeof(numbers) / sizeof(numbers[0]));
  printf("---\n");
  printf("Integer size:\n");
  printf("1. %d\n", sizeof(numbers[0]));
  printf("2. %d\n", sizeof(numbers[1]));
  printf("3. %d\n", sizeof(numbers[2]));
  printf("4. %d\n", sizeof(numbers[3]));
  printf("5. %d\n", sizeof(numbers[4]));
  printf("6. %d\n", sizeof(numbers[5]));
  printf("7. %d\n", sizeof(numbers[6]));
  printf("8. %d\n", sizeof(numbers[7]));
  printf("9. %d\n", sizeof(numbers[8]));
  printf("10. %d\n", sizeof(numbers[9]));
  
  return 0;
}
