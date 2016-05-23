#include "common_eml.h"

void print_eml_version ()
{
    printf("%s\n", EML_VERSION);
}

void print_compiler_version ()
{
    if (C99 == 1)
    {
	printf("%s\n", "C99");
    }
    else if (C94 == 1)
    {
	printf("%s\n", "C94");
    }
    else if (C90 == 1)
    {
	printf("%s\n", "C94");
    }
    else if (C89 == 1)
    {
	printf("%s\n", "C89");
    }
    else
    {
	printf("%s\n", "Unknown Version");
    }
}

void addchar (char* a, char* b, short int sum[2])
{
    *sum = (short int) (((*a - '0') + (*b -'0') + sum[1]) % 10);
    *(sum + 1) = (short int) (((*a - '0') + (*b -'0') + sum[1]) / 10);
}

void add_char_int (char* a, char* b, char* sum)
{
    char zero = '0';
    short int digit_sum[2] = {0, 0};
    unsigned long int size_of_a = (unsigned long int) (strlen (a));
    unsigned long int size_of_b = (unsigned long int) (strlen (b));
    unsigned long int size_of_sum = ((unsigned long int) (max(strlen (a), strlen (b))) + 1);
    unsigned long int digit;
    
    sum = malloc (sizeof(char) * size_of_sum);
    
    if (size_of_a >= size_of_b)
    {
	for (digit = 0; digit < size_of_b; digit++)
	{
	    addchar ((a+digit), (b+digit), digit_sum);
	    
	    *(sum + digit) = digit_sum[0] + zero;
	}

	for ( ; digit < size_of_a; digit++)
	{
	    addchar ((a+digit), &zero, digit_sum);
	    
	    *(sum + digit) = digit_sum[0] + zero;
	}

	*(sum + digit) = digit_sum[1];
    }
    else
    {
	for (int digit = 0; digit < size_of_a; digit++)
	{
	    addchar ((a+digit), (b+digit), digit_sum);
	    
	    *(sum + digit) = digit_sum[0] + zero;
	}

	for ( ; digit < size_of_b; digit++)
	{
	    addchar (&zero, (b+digit), digit_sum);
	    
	    *(sum + digit) = digit_sum[0] + zero;
	}

	*(sum + digit) = digit_sum[1] + zero;
    }

    if (*(sum + digit) == zero)
    {
	*(sum + digit) = NULL_CHAR;
    }
}
