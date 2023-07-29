#include <stdio.h>

void before_main() __attribute__ ((constructor));

/**i
 * function - must prints a statement before the main function is executed
 * 
 */
void before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
