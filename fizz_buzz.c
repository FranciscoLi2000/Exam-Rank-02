#include "exam_rank02.h"
/* Write a program that prints the numbers from 1 to 100,
each separated by a newline.
If the number is a multiple of 3, it prints 'fizz' instead.
If the number is a multiple of 5, it prints 'buzz' instead.
If the number is both a multiple of 3 and a multiple of 5,
it prints 'fizzbuzz' instead.*/
void    ft_putnbr(int nb)
{
    if (nb > 9)
        ft_putnbr(nb / 10);
    write(1, &"0123456789"[nb % 10], 1);
}
int main(void)
{
    int n;

    n = 1;
    while (n <= 100)
    {
        if (n % 3 == 0)
            write(1, "fizz", 4);
        else if(n % 5 == 0)
            write(1, "buzz", 4);
        else if ((n % 3 == 0) && (n % 5 == 0))
            write(1, "fizzbuzz", 8);
        else
            ft_putnbr(n);
        write(1, "\n", 1);
        n++;
    }
    return (0);
}
