#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include <stdbool.h>
/*
Will ask user to select from a few options.
Then from the options do what the option says.
1. Play game.
2. Change max number then user guesses number.
3. Quit game.

At anypoint if user guesses the number correctly the user
will get notified that they won and will return back to the main
menu were the user can reselct from the options.
*/
int main() {
  srand(time(NULL));
  bool game = true;
  int option;
  char q;
  int max = 10;
  while(game) {
   int r = (rand() % max) + 1;
   printf("Select from one of the following options:\n Press 1 to play a game\n Press 2 to change the max number\n Press 3 to quit\n");
   scanf("%d", &option);
   if(option == 1) {
    int result;
    bool notOver = true;
    printf("Select a number from 1-%d\n", max);
    scanf("%d", &result);
    while(notOver) {

      if(result == r) {
        printf("You won the number was: %d\n", r);
        notOver = false;
        continue;
      }
      if(result < r) {
      printf("Your guess is lower then the number\n");
      }
      if(result > r) {
      printf("Your guess is higher then the number\n");
      }
    printf("Enter another number to guess or q to quit\n");
    scanf("%d", &result);
    q = getchar();
    if(q == 'q') {
      notOver = false;
    }
    }
    continue;
   }
   if(option == 2) {
    printf("Enter a number to change the max value");
    scanf("%d", &max);
    continue;
   }
   if(option == 3) {
    printf("Thank you for playing\n");
    game = false;
   }
  }
  return 0;
}