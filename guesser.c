#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//NULL(keepGoing = -1);
//void(tryAgain = 0);


int main(){
  
  char userName[20];
  printf ("What is your name? ");

  scanf("%s", userName);

  printf("Hello, %s you will be guessing random numbers \n", userName);
  

  srand(time(NULL));
  int r = rand() % 100;
  printf("The random number is %d \n", r);
}
