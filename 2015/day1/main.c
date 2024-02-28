#include "stdlib.h"
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	printf("Calculating target floor...\n");

	if(argc != 2)
	{
		printf("Unexpected argument count!");
		return EXIT_FAILURE;
	}

	char* input_string = argv[1];
	int input_len = strlen(input_string);
	int target_floor_num = 0;

	for(int i = 0; i < input_len; i++)
	{
		switch (input_string[i])
		{
			case '(':
			{
				target_floor_num++;
				break;
			}
			case ')':
			{
				target_floor_num--;
				break;
			}
		}

		if(target_floor_num == -1)
		{
			printf("Entered basement on character position %d", i + 1);
			return EXIT_SUCCESS;
		}
	}

	printf("Target floor #: %d", target_floor_num);


	return EXIT_SUCCESS;
}
