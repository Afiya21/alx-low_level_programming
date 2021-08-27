#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					if (n<= 0.0) {
							if (n == 0.0)
								            printf(n "is 0.");
								    else
									                printf(n " is a negative number.");
								        } else
										printf(n "is postive number".);

										return (0);
}
