#include "exam_rank02.h"
/* Write a program that takes a string and displays its first word, followed by a
newline.
A word is a section of string delimited by spaces/tabs or by the start/end of
the string.
If the number of parameters is not 1, or if there are no words, simply display
a newline. */
int main(int argc, char **argv)
{
    int     i;

    if (argc == 2)
    {
        i = 0;
        while (argv[1][i] == 32 || argv[1][i] == '\t')
            i++;
        while ((argv[1][i] != ' ' && argv[1][i] != '\t') && argv[1][i] != '\0')
        {
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}