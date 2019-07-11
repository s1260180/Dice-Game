#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int one,two,total;
  char name[10];
  srand(time(NULL));
  one = rand()%6+1;
  two = rand()%6+1;
  total = one+two;

  printf("What is your name?\n");
  printf("> ");
  scanf("%s",name);
  printf("Hello, %s!\n",name);

  printf("Rolling the dice...\n");
  printf("Die 1: %d\n",one);
  printf("Die 2: %d\n",two);
  printf("Total value: %d\n",total);

  if(total>7) printf("%s won!\n",name);
  else printf("%s lost\n",name);

  return 0;
}
  
