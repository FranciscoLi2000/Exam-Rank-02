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
        {
            if ((str[i] >= 65 && str[i] < 90) || (str[i] >= 97 && str[i] < 122))
                str[i] += 1;
            else if (str[i] == 90 || str[i] == 122)
                str[i] -= 25;
            write(1, &str[i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}