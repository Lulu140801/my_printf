/*
** EPITECH PROJECT, 2019
** my_strlint
** File description:
** to count a int
*/

int my_strlunint(unsigned int nb)
{
    int result = 1;

    while (nb > 10) {
        nb = nb / 10;
        result++;
    }
    return (result);
}