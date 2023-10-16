#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	neg;
	int	res;

	i = 0;
	neg = 1;
	res = 0;
	if (!str)
		return (0);
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || \
			str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		neg = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * neg);
}
int main() {
    // Ejemplo 1: cadena con dígitos positivos
    const char *str1 = "12345";
    int result1 = ft_atoi(str1);
    printf("Resultado 1: %d\n", result1);

    // Ejemplo 2: cadena con dígitos negativos
    const char *str2 = "-6789";
    int result2 = ft_atoi(str2);
    printf("Resultado 2: %d\n", result2);

    // Ejemplo 3: cadena con espacios y dígitos
    const char *str3 = "    42";
    int result3 = ft_atoi(str3);
    printf("Resultado 3: %d\n", result3);

    // Puedes agregar más ejemplos según sea necesario

    return 0;
}
