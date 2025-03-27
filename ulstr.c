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
            if (ft_islower(str[i]))
                str[i] = ft_toupper(str[i]);
            else if (ft_isupper(str[i]))
                str[i] = ft_tolower(str[i]);
            write(1, &str[i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}