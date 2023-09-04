#include "main.h"
/**
 * checkCODE97 - does some checking
 * @argc: param
 * Return: void, nada
 */
void checkCODE97(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}
/**
 * checkCODE98 - does some checking
 * @check: true or false
 * @file: file param
 * @fd_from: param
 * @fd_to: param
 * Return: void, nada
 */
void checkCODE98(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(98);
	}
}
/**
 * checkCODE99 - does some checking
 * @check: true or false
 * @file: file_to name
 * @fd_from: file descriptor of file_from, or -1
 * @fd_to: file descriptor of file_to, or -1
 *
 * Return: void
 */
void checkCODE99(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(99);
	}
}
/**
 * checkCODE100 - does some checking
 * @check: true or false
 * @fd: param
 * Return: void, nada
 */
void checkCODE100(int check, int fd)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - ENTRY POINT LESSGO
 * @argc: number of arguments passed
 * @argv: array of pointers
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, close_to, close_from;
	ssize_t len_r, len_w;
	char buffer[1024];
	mode_t file_perm;

	checkCODE97(argc);
	fd_from = open(argv[1], O_RDONLY);
	checkCODE98((ssize_t)fd_from, argv[1], -1, -1);
	file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
	checkCODE99((ssize_t)fd_to, argv[2], fd_from, -1);
	len_r = 1024;
	while (len_r == 1024)
	{
		len_r = read(fd_from, buffer, 1024);
		checkCODE98(len_r, argv[1], fd_from, fd_to);
		len_w = write(fd_to, buffer, len_r);
		if (len_w != len_r)
		{
			len_w = -1;
		}
		checkCODE99(len_w, argv[2], fd_from, fd_to);
	}
	close_to = close(fd_to);
	close_from = close(fd_from);
	checkCODE100(close_to, fd_to);
	checkCODE100(close_from, fd_from);
	return (0);
}
/*thanks to alx crew night for the help*/
