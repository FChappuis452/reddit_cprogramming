/*
* Project		:	Quarantine Fun
* File			:	main.c
* Programmer	:	Frederic Chappuis
* First Version	:	May 2020
* Description	:	C project based on this image: https://i.redd.it/326eaj6z07x41.jpg
*					and this reddit conversation: https://www.reddit.com/r/C_Programming/comments/geqass/if_answer_is_no_how_can_i_turn_back_to_if/
*/

#include <stdio.h>



int main()
{
	int a = 61;
	int b = 30;
	int c = 1;
	int d = 48;
	int iteration = 0;


	printf("Iteration\tA\tB\tC\tD\n");
	while (c < 4)
	{
		if (!(a % b > 2))
		{
			a = d;
			b -= 2;
			iteration++;
			printf("\t%d\t%d\t%d\t%d\t%d\n", iteration, a, b, c, d);
		}
		a += b;
		c++;
		b--;
		d = b;
		iteration++;

		printf("\t%d\t%d\t%d\t%d\t%d\n", iteration, a, b, c, d);

		// forever loop breakage
		if (iteration == 100)
		{
			break;
		}
	}

	return 0;
}