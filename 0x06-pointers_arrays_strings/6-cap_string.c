#include "holberton.h"

/**
 * cap_string - Capitalizes all words.
 * @cap: Capitalize.
 * Return: cap.
 */

char *cap_string(char *cap)
{
	int pi;

	if (cap[0] >= 97 && cap[0] <= 122)
	/**cap en posicion 0 es >= que a y <= que z so*/
	{
		cap[0] = cap[0] - 32;
	/**
	* cap en posicion 0 equals to cap minus 32
	* meaning that it will capitalize the minusculas if they are
	* at the beggining
	*/
	}
	for (pi = 1; cap[pi] != '\0'; pi++)
	/**pi igual a 1 bc at the if it's specified from zero */
	{
		if ((cap[pi - 1] == ' ' || cap[pi - 1] == '\t'
		|| cap[pi - 1] == '\n' || cap[pi - 1] == ','
		/**|| cap[pi - 1] == '.' || cap[pi -1] == '!'*/
		|| cap[pi - 1] ==  ';' || cap[pi - 1] == '?'
		|| cap[pi - 1] == '"' || cap[pi - 1] == '('
		|| cap[pi - 1] == ')' || cap[pi - 1] == '{'
		|| cap[pi - 1] == '}') &&
		 (cap[pi] > 97 && cap[pi] < 122))
		{
			cap[pi] = cap[pi] - 32;
		}
	}
	return (cap);
}
