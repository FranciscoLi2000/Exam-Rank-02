#include "exam_rank02.h"

int main(int argc, char **argv)
{
    char    *str;
    int i;

    if (argc == 2)
    {
        str = argv[1];
        i = 0;
        while (str[i] != '\0')
            i++;
        while (i--)
            write(1, &str[i], 1);
    }
    write(1, "\n", 1);
    return (0);
}