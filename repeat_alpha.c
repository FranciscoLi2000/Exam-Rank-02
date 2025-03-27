#include "exam_rank02.h"

int main(int argc, char **argv)
{
    char    *str;
    int i;
    int j;

    if (argc == 2)
    {
        str = argv[1];
        i = 0;
        while (str[i] != '\0')
        {
            if (ft_isupper(str[i]))
            {
                j = 0;
                while (j < str[i] - 64)
                {
                    write(1, &str[i], 1);
                    j++;
                }
            }
            if (ft_islower(str[i]))
            {
                j = 0;
                while (j < str[i] - 96)
                {
                    write(1, &str[i], 1);
                    j++;
                }
            }
            else
                write(1, &str[i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}