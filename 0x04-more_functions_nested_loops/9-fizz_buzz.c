#include "main.h"
#include <stdio.h>

/**
  * main - Prints a Fizz Buzz program
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int i;

	for (i = 0; i < 101; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		if (i % 5 == 0)
		{
			printf("Buzz");
		}
		if ((i % 3 == 0) && (i % 5 ==0))
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ")
		}
			
		
	}
}
