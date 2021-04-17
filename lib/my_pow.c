/*
** EPITECH PROJECT, 2021
** my_pow
** File description:
** calcul the puissance a number
*/

int my_pow(int nb, int power)
{
    int result = 0;

    if (nb < 0) {
        return (0);
    } else if (power < 0) {
        return (0);
    }
    if (nb == 0) {
        return (0);
    } else if (power == 0){
        return (1);
    }
    result = nb * (my_pow(nb, power - 1));

    return (result);
}