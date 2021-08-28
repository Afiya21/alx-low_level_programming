#include <stdlib.h>
#include <time.h>
#include <stdio.h>
<<<<<<< HEAD
/**
 *  * main - Determine if number is +, - or 0.
 *   *
 *    * Return: Always 0 (Success).
 **/
=======
>>>>>>> bd83bedc9acb1a3c994b7390543174b072ef7b86
int main(void)
{
		int n;

			srand(time(0));
<<<<<<< HEAD
				n = rand() - RAND_MAX / 2;
				if (n > 0)
							{
										printf("%d is positive\n", n);
											}
else if (n == 0)
								{
											printf("%d is zero\n", n);
												}
							else
			                 {
=======
			n = rand() - RAND_MAX / 2;
				if (n > 0)
							{
										printf("%d is positive\n", n);
											}else if (n == 0)
								{
											printf("%d is zero\n", n);
												}
							else{
>>>>>>> bd83bedc9acb1a3c994b7390543174b072ef7b86
												printf("%d is negative\n", n);
													}
								return (0);
}

