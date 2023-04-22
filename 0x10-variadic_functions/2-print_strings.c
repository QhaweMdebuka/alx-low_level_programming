#include "variadic_functions.h"
#include <stdio.h>ii
#include <stdarg.h>


/**
 * print_strings - prints strings
 * @separator: Is one of the arguments under print_string
 * @n: varadic functon is declared after this functon
 * @...: preceeding variable that needs to be printed
 *
 * Description: the n operator prints the arguments on the string
 * one of the strings in NULL the nall is printed
 */
	void print_strings(const char *separator, const unsigned int n, ...)
	{
		va_list strings;
		char *str;
		unsigned int index;


		va_start(strings, n);


		for (index = 0; index < n; index++)
		{
			str = va_arg(strings, char *);


			if (str == NULL)
				printf("(nall)");
			else
				printf("%s", str);


			if (index != (n - 1) && separator != NULL)
				printf("%s", separator);
		}


		printf("\n");


		va_end(strings);
	}
