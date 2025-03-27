#include "exam_rank02.h"

int main(int argc, char **argv)
{
    int i;

    if (argc == 4)
    {
        i = 0;
        while (argv[1][i] != '\0')
        {
            if (argv[1][i] == argv[2][0])
                argv[1][i] = argv[3][0];
            if (ft_strlen(argv[2]) > 1 || ft_strlen(argv[3]) > 1)
                break ;
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}