# Simulado — Capítulos 1, 2 e 3
 Programação Imperativa e Funcional

---------------------------------------------------

 Questão 01     

A alternativa correta é:

c)Todos os pares de nomes (`valor`/`VALOR`, `peso`/`Peso`, `taxa`/`TAXA`) representam identificadores diferentes para o compilador.

A linguagem C é case-sensitive, ou seja, diferencia letras maiúsculas de minúsculas.

Por exemplo:

```c
int numero;
int Numero;
```

representam duas variáveis diferentes.

Da mesma forma:

```
main != Main
peso != Peso
valor != VALOR
```

---------------------------------------------------

 Questão 02 
Código apresentado:

```c
#include <stdio.h>
#include <stdlib.h>;

int Main()
{
    int idade = 20;
    printf( A idade do aluno eh: %d anos.. , idade);
    cout << endl;

    system("PAUSE");
    return 0;
}
```

Existem pelo menos quatro problemas visíveis no código, embora o enunciado peça a identificação de três.

 1. Ponto e vírgula na diretiva

Está incorreto:

```c
#include <stdlib.h>;
```

O correto é:

```c
#include <stdlib.h>
```

Diretivas `#include` não terminam com ponto e vírgula.

 2. Função `Main`

Está incorreto:

```c
int Main()
```

O correto é:

```c
int main()
```

Como C diferencia maiúsculas e minúsculas, `Main` e `main` são identificadores diferentes.

 3. String do `printf`

Está incorreto:

```c
printf( A idade do aluno eh: %d anos.. , idade);
```

O texto precisa estar entre aspas:

```c
printf("A idade do aluno eh: %d anos.\n", idade);
```

 4. Uso de `cout`

```c
cout << endl;
```

é sintaxe de C++, não da linguagem C.

Em C, a quebra de linha pode ser feita usando:

```c
printf("\n");
```

 Código corrigido

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade = 20;

    printf("A idade do aluno eh: %d anos.\n", idade);

    system("PAUSE");
    return 0;
}
```

---------------------------------------------------

 Questão 03 

Valores iniciais:

```c
int a = 2, b = 4, c = 5, d = 10;
```

 Primeira operação

```c
a += b + c;
```

Equivale a:

```
a = a + b + c
a = 2 + 4 + 5
a = 11
```

Agora:

```
a = 11
b = 4
c = 5
d = 10
```

 Segunda operação

```c
b *= c = d - 2;
```

Primeiro:

```
c = d - 2
c = 10 - 2
c = 8
```

Depois:

```
b *= c
b = 4 * 8
b = 32
```

Agora:

```
a = 11
b = 32
c = 8
d = 10
```

 Terceira operação

```c
d %= a + 3;
```

Temos:

```
d = 10 % (11 + 3)
d = 10 % 14
d = 10
```

 Quarta operação

```c
a += b += c += 5;
```

A avaliação ocorre da direita para a esquerda.

Primeiro:

```
c += 5
c = 8 + 5
c = 13
```

Depois:

```
b += c
b = 32 + 13
b = 45
```

Finalmente:

```
a += b
a = 11 + 45
a = 56
```

 Valores finais

```
a = 56
b = 45
c = 13
d = 10
```

---------------------------------------------------

 Questão 04 

Valores:

```c
int i = 2, j = 3, k = 0;
float x = 2.5, y = 5.0;
```

 a)

```c
i < j + 2
```

```
2 < 3 + 2
2 < 5
```

Resultado:

```
1
```

 b)

```c
2 * i - 5 <= j - 4
```

```
2 * 2 - 5 <= 3 - 4
-1 <= -1
```

Resultado:

```
1
```

 c)

```c
!k && (x + y >= 7.5)
```

Como:

```
k = 0
!0 = 1
```

e:

```
2.5 + 5.0 = 7.5
7.5 >= 7.5 -> 1
```

Então:

```
1 && 1
```

Resultado:

```
1
```

 d)

```c
!(i == j) || (y / x == 2.0)
```

Primeiro:

```
2 == 3 -> 0
!0 -> 1
```

Depois:

```
5.0 / 2.5 = 2.0
2.0 == 2.0 -> 1
```

Logo:

```
1 || 1
```

Resultado:

```
1
```

 e)

```c
i == 2 && j == 4 || k == 0
```

Primeiro:

```
i == 2 -> 1
j == 4 -> 0
```

Como `&&` possui prioridade sobre `||`:

```
1 && 0 -> 0
```

Depois:

```
k == 0 -> 1
```

Então:

```
0 || 1
```

Resultado:

```
1
```

 Resumo

| Item | Resultado |
| --- | --- |
| a | 1 |
| b | 1 |
| c | 1 |
| d | 1 |
| e | 1 |

---------------------------------------------------

 Questão 05 

 a)

O `while` testa a condição antes de executar o bloco.

```c
while (condicao)
{
    // comandos
}
```

Por isso, pode executar zero vezes.

O `do-while` executa primeiro e testa depois:

```c
do
{
    // comandos
}
while (condicao);
```

Por isso, executa pelo menos uma vez.

 b)

O `for` é normalmente mais adequado quando sabemos a quantidade de repetições ou existe uma variável de controle clara.

Exemplo:

```c
for (i = 0; i < 10; i++)
{
    printf("%d\n", i);
}
```

O `while` é mais adequado quando a quantidade de repetições depende de uma condição.

O `do-while` é especialmente útil para menus e validações, pois executa o bloco pelo menos uma vez.

 c)

O código:

```c
while (condicao);
```

não é necessariamente erro de compilação.

O ponto e vírgula cria um laço de corpo vazio.

É equivalente a:

```c
while (condicao)
{
}
```

Se `condicao` continuar verdadeira, o programa pode entrar em um laço infinito.

Portanto, o problema é um erro de lógica.

---------------------------------------------------

 Questão 06 

Código apresentado:

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    for (i = 1; i <= 10; i++)
    {
        if (i == 5)
            continue;

        if (i == 8)
            break;

        int soma = 0;

        soma += i * i;
    }

    printf("Soma final = %d\n", soma);

    system("PAUSE");
    return 0;
}
```

 a)

A variável:

```c
int soma = 0;
```

foi declarada dentro do bloco do `for`.

Por isso ela só existe dentro daquele bloco.

Quando o programa chega:

```c
printf("Soma final = %d\n", soma);
```

a variável está fora de seu escopo.

Além disso, `soma` é reinicializada com zero em cada repetição.

 b)

Quando:

```
i = 5
```

o `continue` pula o restante da repetição.

Quando:

```
i = 8
```

o `break` encerra o laço.

Os valores efetivamente somados são:

```
1, 2, 3, 4, 6 e 7
```

 c)

Código corrigido:

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int soma = 0;

    for (i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            continue;
        }

        if (i == 8)
        {
            break;
        }

        soma += i * i;
    }

    printf("Soma final = %d\n", soma);

    system("PAUSE");
    return 0;
}
```

A soma é:

```
1² + 2² + 3² + 4² + 6² + 7²
```

```
1 + 4 + 9 + 16 + 36 + 49 = 115
```

Saída:

```
Soma final = 115
```

---------------------------------------------------