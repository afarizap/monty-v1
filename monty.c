#include "monty.h"
/**
 * main - The main of our program
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 in succes 1 if fails
**/
int main(int argc, char *argv[])
{
	FILE *file_name;
	char single_line[150], *token;
	if (argc < 2)
	{
		printf("USAGE: monty file\n");
		exit (EXIT_FAILURE);
	}
	file_name =  fopen(argv[1], "r");
	token =  strtok()
	while(!feof(file_name))
	{
		fgets(single_line, 150, file_name);
		printf("%s", single_line);
	}
	fclose(file_name);
	return (0);
}