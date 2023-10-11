#include "libft.h"

static int		numstring(char const *s1, char c)
{
	int	comp;
	int	cles;

	comp = 0;
	cles = 0;
	if (*s1 == '\0')
		return (0);
	while (*s1 != '\0')
	{
		if (*s1 == c)
			cles = 0;
		else if (cles == 0)
		{
			cles = 1;
			comp++;
		}
		s1++;
	}
	return (comp);
}

static int		numchar(char const *s2, char c, int i)
{
	int	lenght;

	lenght = 0;
	while (s2[i] != c && s2[i] != '\0')
	{
		lenght++;
		i++;
	}
	return (lenght);
}

static char		**freee(char const **dst, int j)
{
	while (j > 0)
	{
		j--;
		free((void *)dst[j]);
	}
	free(dst);
	return (NULL);
}

static char		**affect(char const *s, char **dst, char c, int l)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (s[i] != '\0' && j < l)
	{
		k = 0;
		while (s[i] == c)
			i++;
		dst[j] = (char *)malloc(sizeof(char) * numchar(s, c, i) + 1);
		if (dst[j] == NULL)
			return (freee((char const **)dst, j));
		while (s[i] != '\0' && s[i] != c)
			dst[j][k++] = s[i++];
		dst[j][k] = '\0';
		j++;
	}
	dst[j] = 0;
	return (dst);
}

char			**ft_split(char const *s, char c)
{
	char	**dst;
	int		l;

	if (s == NULL)
		return (NULL);
	l = numstring(s, c);
	dst = (char **)malloc(sizeof(char *) * (l + 1));
	if (dst == NULL)
		return (NULL);
	return (affect(s, dst, c, l));
}

void imprimir_subcadenas(char **subcadenas) {
    int i = 0;
    while (subcadenas[i] != NULL) {
        printf("Subcadena %d: %s\n", i + 1, subcadenas[i]);
        i++;
    }
}

void liberar_memoria(char **subcadenas) {
    int i = 0;
    while (subcadenas[i] != NULL) {
        free(subcadenas[i]);
        i++;
    }
    free(subcadenas);
}

int main() {
    // Ejemplo de cadena a dividir
    const char *cadena_original = "Hola,Mundo,de,C,Split";

    // Delimitador
    char delimitador = ',';

    // Uso de la función ft_split
    char **subcadenas = ft_split(cadena_original, delimitador);

    // Verificación y salida
    if (subcadenas != NULL) {
        // Imprimir las subcadenas
        imprimir_subcadenas(subcadenas);

        // Liberar la memoria asignada por ft_split
        liberar_memoria(subcadenas);
    } else {
        printf("Error al dividir la cadena.\n");
    }

    return 0;
}
