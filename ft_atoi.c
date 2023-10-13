#include "libft.h"

int     ft_atoi(const char *str)
{
    int num;// para almacenar el valor entero resultante 
    int sign;// para almacenar el signo del número.

    num = 0;
    sign = 1;//en 1 antes de comenzar el procesamiento de la cadena.
  /*isspace La función devuelve un valor distinto de cero si el carácter es un espacio en blanco y cero en caso contrario.
  Los caracteres que se consideran espacios en blanco pueden variar según la implementación, pero comúnmente incluyen el espacio (' '), el tabulador ('\t'), el avance de página ('\f'), el retorno de carro ('\r'), la nueva línea ('\n') y el tabulador vertical ('\v').*/
    while (ft_isspace(*str))
        str++;
    if (*str == '-')//Si el primer carácter después de los espacios en blanco es '-', entonces se establece sign en -1.
        sign = - 1;
    if (*str == '-' || *str == '+')//Si el primer carácter después de los espacios en blanco es '-' o '+', entonces se avanza el puntero str al siguiente carácter.
        str++;
    while (*str >= '0' && *str <= '9')// Este bucle while se ejecuta mientras el carácter actual es un dígito.
        num = num * 10 + *str++ - '0';//Este código actualiza num multiplicándolo por 10 (desplazamiento a la izquierda) y sumándole el valor numérico del dígito actual. El puntero str se incrementa para pasar al siguiente carácter.
    return (num * sign);//La función devuelve el valor entero resultante, multiplicado por el signo que se determinó anteriormente.
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
