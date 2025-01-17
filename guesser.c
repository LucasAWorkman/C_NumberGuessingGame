#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//NULL(keepGoing = -1);
//void(tryAgain = 0);


typedef enum {
  false,
  true
}
// i saw this method on stack overflow, it works but im not really sure enum meaning
bool_enum;

int main(){
  bool_enum keepGoing = true;
  char userName[20];
  printf ("What is your name? ");

  scanf("%s", userName);

  printf("Hello, %s you will be guessing random numbers \n", userName);
  

  srand(time(NULL));
  int randomnum = rand() % 101;
  int guesses = 0;
  while (keepGoing == true){
    guesses++;
    printf("turn %d ) Please guess a number: ", guesses);
    int userGuess; 
    scanf("%d", &userGuess); 

    if (userGuess > randomnum){
	printf("Too high\n");
     }
    if (userGuess < randomnum){
	printf("Too low\n");
     }
    if (userGuess == randomnum){
	printf("You guessed correct!\n");
	if (guesses <= 7) {
	  printf("You got it within seven guesses, good job!\n");
	}
	else{
	  printf("You didnt get it within seven guesses, but thats ok!\n");
	 }
	keepGoing = false;
     }
  }
}
