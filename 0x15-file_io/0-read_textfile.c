#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fs;
	ssize_t nrd, nwr;
	char *suf;

	if (!filename)
		return (0);

	fs = open(filename, O_RDONLY);

	if (fs == -1)
		return (0);

	suf = malloc(sizeof(char) * (letters));
	if (!suf)
		return (0);

	nrd = read(fs, suf, letters);
	nwr = write(STDOUT_FILENO, suf, nrd);

	close(fs);

	free(suf);

	return (nwr);
}
