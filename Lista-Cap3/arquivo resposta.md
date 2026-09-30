# Lista de Exercícios — Capítulo 3
Programação Imperativa e Funcional

---------------------------------------------------

Questão 01 

 a)

A principal diferença entre `while` e `do-while` está no momento em que a condição é testada.

No `while`, a condição é verificada antes da execução do bloco:

```c
while (condicao)
{
    // comandos
}
```

Por isso, caso a condição seja falsa desde o início, o bloco pode não ser executado nenhuma vez.

No `do-while`, o bloco é executado antes da verificação da condição:

```c
do
{
    // comandos
}
while (condicao);
```

Por isso, o bloco do `do-while` sempre é executado pelo menos uma vez.

 b)

O `for` é mais adequado quando existe uma quantidade de repetições conhecida ou uma variável de controle bem definida.

O `while` é mais indicado quando não se sabe exatamente quantas vezes o laço será executado e a repetição depende de uma condição.

O `do-while` é indicado quando o bloco precisa ser executado pelo menos uma vez, como em menus e validações de entrada.

 c)

O código:

```c
while (condicao);
```

não representa necessariamente um erro de compilação.

O ponto e vírgula após o `while` é interpretado como um corpo vazio.

É como escrever:

```c
while (condicao)
{
}
```

Se `condicao` permanecer verdadeira e nenhuma variável utilizada nela for alterada, o programa poderá ficar preso em um laço infinito.

Portanto, nesse caso ocorre um erro de lógica e não de sintaxe.

---------------------------------------------------

Questão 02 

O problema ocorre porque a variável:

```c
int soma = 0;
```

foi declarada dentro do bloco do `for`.

Dessa forma, `soma` só existe dentro das chaves desse bloco. Por isso, a instrução:

```c
printf("Soma final = %d\n", soma);
```

não consegue acessar a variável fora do laço.

Além disso, declarar:

```c
int soma = 0;
```

dentro do `for` faz com que a variável seja reinicializada com zero em cada repetição. Assim, ela não consegue acumular corretamente a soma dos quadrados.

O código corrigido é:

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int soma = 0;

    for (i = 1; i < 10; i++)
    {
        soma += i * i;
    }

    printf("Soma final = %d\n", soma);

    system("PAUSE");
    return 0;
}
```

A soma realizada é:

```
1² + 2² + 3² + 4² + 5² + 6² + 7² + 8² + 9² = 285
```

Escopo de bloco significa que uma variável declarada dentro de `{ }` só pode ser utilizada naquele bloco.

Ao sair do bloco, essa variável deixa de estar disponível para as instruções externas.

---------------------------------------------------

Questão 03 

 a)

O trecho é:

```c
for (a = 36; a > 0; a /= 2)
{
    printf("%d\t", a);
}
```

A sequência impressa será:

```
36
18
9
4
2
1
```

Depois de `1 / 2`, como `a` é uma variável inteira, ocorre divisão inteira e o resultado passa a ser `0`.

Com isso, a condição:

```c
a > 0
```

torna-se falsa e o laço é encerrado.

 b)

O trecho:

```c
for (; (ch = getch()) != 'X';)
{
    printf("%c", ch + 1);
}
```

não possui expressão de inicialização nem expressão de incremento no cabeçalho do `for`.

A cada repetição, um caractere é lido e armazenado em `ch`.

Enquanto o caractere digitado for diferente de `'X'`, o programa executará:

```c
printf("%c", ch + 1);
```

A operação:

```c
ch + 1
```

corresponde ao próximo código de caractere.

Por exemplo:

```
'A' + 1 -> 'B'
```

Os parênteses em:

```c
(ch = getch())
```

garantem que primeiro o caractere seja atribuído à variável `ch` e depois o valor armazenado seja comparado com `'X'`.

 c)

O trecho:

```c
for (;;)
{
    printf("Laco Infinito\n");
}
```

representa um laço infinito, pois não possui condição de parada.

Uma forma de interromper esse laço de maneira programática é utilizar o comando:

```c
break;
```

Exemplo:

```c
for (;;)
{
    if (condicao)
    {
        break;
    }
}
```

Quando o `break` é executado, o laço é encerrado imediatamente.

---------------------------------------------------

Questão 04 

 a)

O comando:

```c
break;
```

encerra imediatamente o laço em que está sendo executado.

Quando o programa encontra um `break`, ele abandona o laço atual e continua a execução na primeira instrução localizada depois desse laço.

 b)

O comando:

```c
continue;
```

interrompe somente a repetição atual.

Em um laço `for`, depois da execução do `continue`, o programa segue para a expressão de incremento do cabeçalho.

Depois disso, a condição do laço é testada novamente.

 c)

Em uma estrutura de laços aninhados, caso um `break` seja executado dentro do laço interno, somente o laço interno será encerrado.

O laço externo continuará sua execução normalmente.

---------------------------------------------------

Questão 05 

O código analisado é:

```c
int i, j;

for (i = 0, j = 10; i < j; i++, j--)
{
    printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
}
```

 a)

O laço executará um total de:

```
5 iterações
```

 b)

A saída será:

```
i = 0, j = 10 | soma = 10
i = 1, j = 9  | soma = 10
i = 2, j = 8  | soma = 10
i = 3, j = 7  | soma = 10
i = 4, j = 6  | soma = 10
```

Depois da quinta repetição, os valores passam a ser:

```
i = 5
j = 5
```

A condição:

```c
i < j
```

torna-se falsa, pois:

```
5 < 5
```

é falso.

 c)

A mesma lógica utilizando `while` pode ser escrita da seguinte forma:

```c
int i = 0;
int j = 10;

while (i < j)
{
    printf("i = %d, j = %d | soma = %d\n", i, j, i + j);

    i++;
    j--;
}
```

---------------------------------------------------

Questão 06 

O código analisado é:

```c
int x = 0;

while (x++ < 5);

printf("Valor final de x = %d\n", x);
```

 a)

O valor final impresso será:

```
Valor final de x = 6
```

 b)

Como `x++` é um incremento pós-fixado, primeiro o valor atual de `x` é utilizado na comparação e somente depois ele é incrementado.

A execução ocorre aproximadamente da seguinte maneira:

```
0 < 5 -> verdadeiro -> x passa para 1
1 < 5 -> verdadeiro -> x passa para 2
2 < 5 -> verdadeiro -> x passa para 3
3 < 5 -> verdadeiro -> x passa para 4
4 < 5 -> verdadeiro -> x passa para 5
5 < 5 -> falso      -> x passa para 6
```

Mesmo quando a última comparação é falsa, o operador pós-fixado `x++` ainda incrementa a variável.

Por isso, ao final:

```
x = 6
```

 c)

Uma forma explícita de escrever o código, mantendo o mesmo resultado final, é:

```c
int x = 0;

while (x < 5)
{
    x++;
}

x++;

printf("Valor final de x = %d\n", x);
```

Dessa forma, o funcionamento fica mais claro e o valor final continua sendo:

```
6
```

---------------------------------------------------