/*
** EPITECH PROJECT, 2019
** my_strlint
** File description:
** to count a int
*/

int my_strlint(int nb)
{
    int result = 1;

    if (nb >= 0) {
        while (nb > 10) {
            nb = nb / 10;
            result++;
        }
    } else if (nb < 0) {
        while (nb < -10) {
            nb = nb / 10;
            result++;
        }
    }
    return (result);
}