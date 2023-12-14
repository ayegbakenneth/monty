#define _POSIX_C_SOURCE 200809L
#include "monty.h"
bus_t bus = {NULL, NULL, NULL, 0};
/**
* main - The controller for the monty
* @argc: Argument passed
* @argv: Argument holder
* Return: 0
*/
int main(int argc, char *argv[])
{
	char *emmy;
	FILE *hold;
	size_t length = 0;
	ssize_t recieve = 1;
	stack_t *tank = NULL;
	unsigned int i = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	hold = fopen(argv[1], "r");
	bus.file = hold;
	if (!hold)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (recieve > 0)
	{
		emmy = NULL;
		recieve = getline(&emmy, &length, hold);
		bus.content = emmy;
		i++;
		if (recieve > 0)
		{
			execute(emmy, &tank, i, hold);
		}
		free(emmy);
	}
	free_stack(tank);
	fclose(hold);
return (0);
}
