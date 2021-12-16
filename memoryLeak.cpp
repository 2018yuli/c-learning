#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int cash = 100;

void Play(int bet)
{
	// char C[3] = {'J', 'Q', 'K'};
	char *C = (char*)malloc(3 * sizeof(char));	// 内存泄露,需要在最后调用 free(C); memotyLeak
	C[0] = 'J';C[1]='Q';C[2]='K';
	printf("Shuffling.....\n");
	srand(time(NULL));	// seeding
	int i;
	for (i = 0 ; i < 5 ; i++)
	{
		int x = rand() % 3;
		int y = rand() % 3;
		// swap
		int temp = C[x];
		C[x] = C[y];
		C[y] = temp;
	}
	int playersQuess;
	printf("What's the position of queen ? 1, 2 or 3 ?\n");
	scanf("%d", &playersQuess);
	if (C[playersQuess - 1] == 'Q')
	{
		cash += 3 * bet;
		printf("You Win | Result = %C%C%C Total Cash= %d\n", C[0], C[1], C[2], cash);
	}
	else {
		cash -= 3 * bet;
		printf("You Loss | Result = %C%C%C Total Cash= %d\n", C[0], C[1], C[2], cash);
	}
	free(C);
}



int main(void) {
  int bet;
  printf("Welcome to the Virtual Casino\n");
  printf("Total cash = $%d \n", cash);
  while (cash > 0) {
	printf("What's your bet? $"); 
	scanf("%d", &bet);
	if (bet == 0 || bet > cash) break;
	Play(bet);
  }
  return 0;
}