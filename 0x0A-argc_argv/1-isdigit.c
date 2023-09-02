#include "main.h"

/**
  * _isdigit - checks for a digit (0 through 9)
  *@c: character to be checked
  *Description: a function that checks for a digit
  *Return: 1 if c is a digit
  *0 if otherwise
  */
int _isdigit(char *s)
{
	while (*s)
	{
		if (!(*s > 47 && *s < 58))
		{
			return (0);
		}
		s++;
	} /**
	      4   * _isdigit - checks for a digit (0 through 9)
	        5   *@c: character to be checked
		  6   *Description: a function that checks for a digit
		    7   *Return: 1 if c is a digit
		      8   *0 if otherwise
		        9   */
	 10 int _isdigit(char *s)
		  11 {
			   12         while (*s)
				    13         {
					     14                 if (!(*s > 47 && *s < 58))
						      15                 {
							       16                         return (0);
							        17                 }
					      18                 s++;
					       19         }
			    20 }
}
