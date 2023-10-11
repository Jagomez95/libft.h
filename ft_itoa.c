#include "libft.h"

int		digit_counter(int n)
{
	int i;
	int	copy;

	i = 0;
	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		n = -n;
		i++;
	}
	copy = n;
	while (copy > 0)
	{
		copy = copy / 10;
		i++;
	}
	return (i);
}

int		exp_counter(int n)
{
	int exp;
	int	digits;

	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (1000000000);
	digits = digit_counter(n);
	if (n < 0)
		digits--;
	exp = 1;
	while (--digits)
		exp = exp * 10;
	return (exp);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			exp;
	int			i;
	long int	copy;

	copy = (long int)n;
	exp = exp_counter(n);
	i = 0;
	if (!(str = malloc(digit_counter(n) + 1)))
		return (NULL);
	if (n < 0)
	{
		str[i++] = '-';
		copy = -copy;
	}
	while (exp > 0)
	{
		str[i++] = (copy / exp) + 48;
		copy = copy % exp;
		exp = exp / 10;
	}
	str[i] = '\0';
	return (str);
}
int main() {
    int numero = -12345; // Prueba con un número negativo

    // Uso de la función ft_itoa
    char *cadena = ft_itoa(numero);

    // Verificación y salida
    if (cadena != NULL) {
        printf("Número original: %d\n", numero);
        printf("Número como cadena: %s\n", cadena);

        // Liberar la memoria asignada por ft_itoa
        free(cadena);
    } else {
        printf("Error al convertir el número a cadena.\n");
    }

    return 0;
}
