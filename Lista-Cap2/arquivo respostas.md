# Lista de Exercícios — Capítulo 2
## Programação Imperativa e Funcional

---------------------------------------------------

## Questão 01 — Truncamento de Tipos e Coerção Implícita

O código possui a seguinte atribuição:

```c
int valor_inteiro;
valor_inteiro = 2.97;

a)
O valor exibido será:
O valor armazenado eh: 2

b)
Isso acontece porque valor_inteiro foi declarado como int, enquanto
2.97 é um valor de ponto flutuante.
Ao atribuir um valor real a uma variável inteira, C descarta a parte
fracionária. Portanto:
2.97 -> 2

Esse processo é uma conversão implícita de tipos e, nesse caso, ocorre
truncamento da parte decimal.
É importante observar que o valor não é arredondado. Por exemplo:
2.99 -> 2

também seria armazenado como 2.
c)
Caso o programador queira controlar explicitamente a conversão, pode
utilizar um cast:
valor_inteiro = (int)2.97;

Entretanto, o cast para int também elimina a parte decimal.
Caso seja necessário manter a precisão, deve-se utilizar uma variável
de ponto flutuante:
double valor = 2.97;

Se a intenção for arredondar, podem ser utilizadas funções específicas
da biblioteca matemática, como round(), disponível em <math.h>.
Questão 02 — Entrada Standard de Caracteres vs. Bibliotecas Legadas
a)
A biblioteca <conio.h> não faz parte do padrão ANSI/ISO da linguagem C.
Funções como:
getch();
getche();

foram disponibilizadas por alguns compiladores e ambientes específicos,
principalmente antigos ambientes DOS/Windows.
Por isso, um programa que depende de <conio.h> pode não compilar em
outros sistemas, como Linux ou macOS.
Para aumentar a portabilidade do programa, é preferível utilizar funções
da biblioteca padrão da linguagem C.
b)
A biblioteca padrão <stdio.h> fornece funções como:
getchar();
putchar();

getchar() realiza a leitura de um caractere da entrada padrão.
putchar() permite escrever um caractere na saída padrão.
Exemplo:
char letra;

letra = getchar();
putchar(letra);

c)
Uma maneira de ignorar quebras de linha que tenham permanecido no buffer é:
#include <stdio.h>

int main()
{
    int caractere;

    do
    {
        caractere = getchar();
    }
    while (caractere == '\n');

    printf("Caractere lido: %c\n", caractere);

    return 0;
}

Nesse exemplo, enquanto o caractere lido for uma quebra de linha \n,
uma nova leitura será realizada.
Questão 03 — Formatação de Saída em Bases Numéricas e ASCII
A função printf() permite representar o mesmo número de diferentes
formas através dos especificadores de formato.
Programa:
#include <stdio.h>

int main()
{
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf(
        "Decimal: %d | Hexadecimal: %x | Octal: %o | ASCII: %c\n",
        numero,
        numero,
        numero,
        numero
    );

    return 0;
}

Os especificadores utilizados são:
Especificador	Representação
%d	Decimal
%x	Hexadecimal
%o	Octal
%c	Caractere correspondente


Por exemplo, caso o usuário informe:
65

a saída será semelhante a:
Decimal: 65 | Hexadecimal: 41 | Octal: 101 | ASCII: A

Questão 04 — Operadores de Atribuição Composta e Precedência
Valores iniciais:
int a = 1, b = 2, c = 3, d = 4;

1)
a += b + c;

Primeiro:
b + c = 2 + 3 = 5

Depois:
a = 1 + 5
a = 6

Estado:
a = 6
b = 2
c = 3
d = 4

2)
b *= c = d + 2;

Primeiro:
d + 2 = 4 + 2 = 6

Então:
c = 6

Depois:
b *= 6
b = 2 * 6
b = 12

Estado:
a = 6
b = 12
c = 6
d = 4

3)
d %= a + a + a;

Calculando:
a + a + a = 6 + 6 + 6 = 18

Então:
d = 4 % 18
d = 4

Estado:
a = 6
b = 12
c = 6
d = 4

4)
d -= c -= b -= a;

As atribuições são avaliadas da direita para a esquerda.
Primeiro:
b -= a
b = 12 - 6
b = 6

Depois:
c -= b
c = 6 - 6
c = 0

Finalmente:
d -= c
d = 4 - 0
d = 4

Estado:
a = 6
b = 6
c = 0
d = 4

5)
a += b += c += 7;

Novamente, a avaliação ocorre da direita para a esquerda.
Primeiro:
c += 7
c = 0 + 7
c = 7

Depois:
b += c
b = 6 + 7
b = 13

Finalmente:
a += b
a = 6 + 13
a = 19

Valores finais:
a = 19
b = 13
c = 7
d = 4

Questão 05 — Avaliação de Expressões Lógicas e Relacionais
Valores utilizados:
int i = 1, j = 2, k = 3, n = 2;
float x = 3.3, y = 4.4;

a)
i < j + 3

1 < 2 + 3
1 < 5

Resultado:
1

b)
2 * i - 7 <= j - 8

2 * 1 - 7 <= 2 - 8
-5 <= -6

Resultado:
0

c)
-x + y >= 2.0 * y

Aproximadamente:
-3.3 + 4.4 >= 2 * 4.4
1.1 >= 8.8

Resultado:
0

d)
x == y

3.3 == 4.4

Resultado:
0

e)
!(n - j)

!(2 - 2)
!0

Resultado:
1

f)
!n - j

O operador ! possui precedência sobre a subtração.
Primeiro:
!2 = 0

Depois:
0 - 2 = -2

Resultado numérico:
-2

Embora não seja 1 ou 0, em uma condição C qualquer valor diferente
de zero é considerado verdadeiro.
g)
i && j && k

Todos os valores são diferentes de zero:
1 && 2 && 3

Resultado:
1

h)
i || j - 3 && k

Primeiro ocorre a subtração:
j - 3 = -1

Depois o &&:
-1 && 3 = 1

Finalmente:
1 || 1

Resultado:
1

i)
i < j && 2 >= k

1 < 2 = 1
2 >= 3 = 0

Então:
1 && 0

Resultado:
0

j)
i == 2 || j == 4 || k == 5

1 == 2 -> 0
2 == 4 -> 0
3 == 5 -> 0

Então:
0 || 0 || 0

Resultado:
0

Resumo
Item	Resultado
a	1
b	0
c	0
d	0
e	1
f	-2
g	1
h	1
i	0
j	0


Questão 06 — Comportamento e Precedência dos Incrementos
a) Incremento prefixado
Trecho A:
int n = 5;
int x = ++n;

No operador prefixado ++n, a variável é incrementada antes que seu
valor seja utilizado.
Primeiro:
n = 5 + 1
n = 6

Depois:
x = 6

Portanto, será impresso:
Trecho A: n = 6, x = 6

Incremento pós-fixado
Trecho B:
int m = 5;
int y = m++;

No operador pós-fixado m++, o valor atual é utilizado primeiro e o
incremento ocorre depois.
Primeiro:
y = 5

Depois:
m = 6

Portanto:
Trecho B: m = 6, y = 5

b)
A instrução:
printf("%d\t%d\t%d\n", n, n + 1, n++);

deve ser evitada.
Nessa chamada, a variável n é lida em alguns argumentos e também é
modificada através de n++.
Em C, a ordem de avaliação dos argumentos de uma função não é definida
de forma que permita depender desse comportamento.
Assim, existe uma modificação de n e outros acessos ao mesmo objeto
sem um sequenciamento adequado.
O resultado é comportamento indefinido.
Isso significa que diferentes compiladores, opções de otimização ou
execuções podem produzir resultados diferentes.
O código deve ser separado em instruções claras, por exemplo:
printf("%d\t", n);
printf("%d\t", n + 1);
printf("%d\n", n);
n++;

Dessa forma, a ordem das operações fica explícita e o comportamento
torna-se previsível.