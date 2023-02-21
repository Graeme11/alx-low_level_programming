#include "main.h"

/**
 * _abs - checks number
 * @r: variable receipt by main
 * Return: Returns r when it is a positive absolute value
 */
int _abs(int r)
{
	if (r >= 0)
	{
		return (r);
	}
	else
	{
		return (-r);
	}
}
