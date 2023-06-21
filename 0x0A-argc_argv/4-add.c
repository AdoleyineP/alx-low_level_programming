#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument variable
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	if (argc < 2) {
		printf("0\n");
		return (0);
	}

	int sum = 0;
	for (int i = 1; i < argc; i++) {
		for (int j = 0; argv[i][j] != '\0'; j++) {
			if (argv[i][j] < '0' || argv[i][j] > '9') {
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}

