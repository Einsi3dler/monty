#include "lists.h"
/****
 * I am still testing out various code pieces hence it's current state,
 * leave comments if you alter
 */
void main () 
{
	FILE *ptr;
	char val[20];
	ptr = fopen("test", "r");
	while (fgets(val, 20, ptr) != NULL)
	{
		commmand_Verif(val);
		printf("I am at main %s\n", val);
	}
	fclose(ptr);
}
