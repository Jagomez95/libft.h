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
/*Esta función cuenta la cantidad de dígitos en un número entero n. Si n es igual a cero, devuelve 1. 
Si n es igual a -2147483648 (el valor mínimo representable para un int en sistemas de 32 bits), 
devuelve 11 (ya que tiene 11 dígitos). Si n es negativo, incrementa el contador y toma el valor absoluto de n. Luego, 
utiliza un bucle para dividir copy por 10 hasta que copy sea cero, 
incrementando el contador en cada iteración. Finalmente, devuelve la cantidad total de dígitos.*/

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
/*Esta función calcula un valor que se utilizará como base para construir la cadena de caracteres en la función ft_itoa. 
Inicialmente, comprueba si n es igual a cero y devuelve 1 si es así. Si n es igual a -2147483648, devuelve 1000000000 como un 
valor especial (esto parece ser un ajuste para manejar el caso extremo del valor mínimo de un int). 
Luego, obtiene la cantidad de dígitos en n utilizando la función digit_counter. 
Si n es negativo, decrementa la cantidad de dígitos. Luego, utiliza un bucle para calcular 10^(digits-1) y lo almacena en exp.*/

char	*ft_itoa(int n)//que convierte un entero n a una cadena de caracteres.
{
	char		*str;//será el puntero a la cadena resultante
	int			exp;//e utiliza para calcular las potencias de 10 en el bucle
	int			i;//es un índice para la construcción de la cadena
	long int	copy;//es una copia de n convertida a long int

	copy = (long int)n;//Realiza una conversión explícita de n a long int y lo asigna a copy. Esto es para evitar desbordamientos al tratar con el valor mínimo de int.
	exp = exp_counter(n);//Calcula el valor base (exp) que se utilizará para construir la cadena. Esto se obtiene llamando a la función exp_counter
	i = 0;
/*Asigna dinámicamente memoria para la cadena. La cantidad de memoria requerida es determinada por la función digit_counter(n) + 1 
para incluir el carácter nulo de terminación. Si la asignación de memoria falla, la función devuelve NULL.*/
	if (!(str = malloc(digit_counter(n) + 1)))
		return (NULL);
//Si n es negativo, agrega un signo negativo al principio de la cadena, incrementa i y toma el valor absoluto de copy.
	if (n < 0)
	{
		str[i++] = '-';
		copy = -copy;
	}
//Inicia un bucle que construirá la cadena dividiendo copy por exp y almacenando el resultado como un carácter ASCII en str.
	while (exp > 0)
	{
//Calcula el dígito actual dividiendo copy por exp y sumando 48 ('0') para obtener el carácter ASCII correspondiente al dígito. Luego, lo asigna a la posición actual de str e incrementa i.
		str[i++] = (copy / exp) + 48;
		copy = copy % exp;//Actualiza copy para contener el residuo de la división, que es lo que queda por procesar.
		exp = exp / 10;//Reduce la potencia de 10 para la próxima iteración del bucle.
	}
	str[i] = '\0';//Agrega el carácter nulo de terminación al final de la cadena construida.
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
