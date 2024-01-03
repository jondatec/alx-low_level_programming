#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int randpass, count = 0, t = 2772;
	
	srand(time(NULL));
	while (t > 122)
	{
		randpass = (rand() % 125) + 1;
		printf("%c", randpass);
		t -= randpass;
		count++;
	}
	printf("%c", t);
	return (0);
}
