#include "shell.h"

/**
 * main - entry point
 * @argc: arg count
 * @agrv: arg vector
 *
 * Return: 0 on success, 1 on error
 */
int main(__attribute__((unused)) int argc, char **agrv)
{
	info_t info[] = { INFO_INIT };

	hsh(info, agrv);
	return (EXIT_SUCCESS);
}
