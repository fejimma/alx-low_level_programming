#include "main.h"
  2 /**
  3  * print_sign - a function that prints the sign of a number
  4  * @n: number input
  5  * Return: 1 prints '+' if n > 0, 0 prints '0' if n = 0, -1 prints '-' if n < 0
  6  */
  7 int print_sign(int n)
  8 {
  9         if (n > 0)
 10         {
 11                 _putchar ('+');
 12                 return (1);
 13         }
 14         else if (n == 0)
 15         {
 16                 _putchar ('0');
 17                 return (0);
 18         }
 19         else
 20         {
 21                 _putchar ('-');
 22                 return (-1);
 23         }
