#include <stdio.h>
#include <stdlib.h>

int main()
{
float lapis = 4.88f;
float borrachas = 234.54f;
float canetas = 42.04f;
float cadernos = 8.00f;
float fitas = 13.05f;

printf("%12s %12.2f\n", "Lapis", lapis);
printf("%12s %12.2f\n", "Borrachas", borrachas);
printf("%12s %12.2f\n", "Canetas", canetas);
printf("%12s %12.2f\n", "Cadernos", cadernos);
printf("%12s %12.2f\n", "Fitas", fitas);

system("PAUSE");
return 0;
}