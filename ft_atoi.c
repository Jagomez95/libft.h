#include "libft.h"

int	ft_atoi(const char *str)
{
	int					i;
	int					sign;
	unsigned long long	result;

	result = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\r' || str[i] == '\t'
			|| str[i] == '\n' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-')
		sign *= -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (result > __LONG_LONG_MAX__)
			return (sign == -1 ? 0 : -1);
		result *= 10;
		result += (str[i] - '0');
		i++;
	}
	return (result * sign);
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
