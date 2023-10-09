#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)//Inicia un bucle while que continuará hasta que se hayan comparado n bytes.
  {
		if (*(unsigned char *)(s1 + i) != *(unsigned char *)(s2 + i))//Compara el byte en la posición i del bloque de memoria apuntado por s1 con el byte en la posición i del bloque de memoria apuntado por s2. Se utilizan punteros a unsigned char para garantizar la comparación byte a byte sin tener en cuenta el signo.
      return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));//Si los bytes son diferentes, devuelve la diferencia entre los bytes encontrados. Esto indica si el bloque de memoria s1 es "mayor" o "menor" que el bloque de memoria s2. Esta diferencia se calcula utilizando la resta de los valores de los bytes.
    i++;
	}
	return (0);
}

int main()
{
	const char str1[] = "Hola, perro!";
	const char str2[] = "Hola, gato!";
	size_t n = 6;

	int	result = ft_memcmp(str1, str2, n);

	if (result == 0)
	{
		printf("Las cadenas son iguales hasta los primeros %zu caracteres. \n", n);
	}
	else if (result < 0)
	{
		printf("La cadena 1 es menor que la cadena 2. \n");
	}
	else
	{
		printf("La cadena 1 es mayor que la cadena 2. \n");
	}
	return (0);
}
