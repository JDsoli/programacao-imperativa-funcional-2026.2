# Questão 01 — Avaliação de Expressões Condicionais e Atribuição vs. Igualdade

## a)

Ao escrever:

```c
if (x = 0)
```

o operador `=` realiza uma atribuição. Portanto, o valor `0` é armazenado na variável `x`.

Como em C o valor `0` é interpretado como falso em uma condição, o bloco do `if` não será executado.

Já em:

```c
if (x == 0)
```

o operador `==` realiza uma comparação. Nesse caso, o programa verifica se o valor armazenado em `x` é igual a `0`. Se for, a condição é verdadeira e o bloco do `if` será executado.

Resumindo:

- `=` realiza atribuição;
- `==` realiza comparação.

## b)

Na Linguagem C, valores numéricos utilizados em uma condição são interpretados da seguinte forma:

- `0` representa falso;
- qualquer valor diferente de `0` representa verdadeiro.

Portanto, valores positivos ou negativos diferentes de zero fazem a condição ser considerada verdadeira.

## c)

Na instrução:

```c
if (x = -5)
```

o valor `-5` é atribuído à variável `x`.

Como `-5` é diferente de zero, a condição é interpretada como verdadeira e o bloco associado ao `if` será executado.

---

# Questão 02 — Associação do Comando else e Aninhamento de Decisões

Código analisado:

```c
int x = 15, y = 5;

if (x > 10)
    if (y > 10)
        printf("Opção A\n");
    else
        printf("Opção B\n");
```

## a)

A saída do programa será:

```
Opção B
```

Primeiramente, a condição:

```c
x > 10
```

é verdadeira, pois `x` vale `15`.

Em seguida, é analisada a condição:

```c
y > 10
```

Ela é falsa, pois `y` vale `5`.

O `else` está associado ao `if (y > 10)`, portanto será executado:

```c
printf("Opção B\n");
```

## b)

Quando não existem chaves para indicar explicitamente os blocos, um `else` é associado ao `if` mais próximo que ainda não possui um `else`.

## c)

Para garantir que a mensagem `Opção B` seja exibida apenas quando `x <= 10`, o código pode ser escrito utilizando chaves da seguinte forma:

```c
int x = 15, y = 5;

if (x > 10) {
    if (y > 10) {
        printf("Opção A\n");
    }
} else {
    printf("Opção B\n");
}
```

Dessa forma, o `else` está explicitamente associado ao primeiro `if`.

Assim, `Opção B` será exibida apenas quando a condição:

```c
x > 10
```

for falsa, ou seja, quando `x <= 10`.

# Questão 03 — Operador Condicional Ternário vs. Estrutura if-else

Código analisado:

```c
media = (nota1 + nota2) / 2.0;
situacao = (media >= 7.0) ? 'A' : 'R';
```

## a)

O operador ternário primeiro avalia a condição:

```c
media >= 7.0
```

Se a condição for verdadeira, a variável `situacao` recebe o valor `'A'`.

Se a condição for falsa, a variável `situacao` recebe o valor `'R'`.

Como no exemplo `media = 6.8`, a condição `media >= 7.0` é falsa. Portanto:

```c
situacao = 'R';
```

## b)

O mesmo trecho utilizando a estrutura tradicional `if-else` fica:

```c
media = (nota1 + nota2) / 2.0;

if (media >= 7.0) {
    situacao = 'A';
} else {
    situacao = 'R';
}
```

## c)

O operador ternário é mais indicado para decisões simples e expressões curtas.

Ele pode substituir um `if-else` simples, mas não é adequado para situações que possuem vários comandos dentro dos blocos, pois o código pode ficar difícil de ler e entender.

Nesses casos, é mais apropriado utilizar a estrutura tradicional `if-else`.

# Questão 04 — Seleção Múltipla com switch-case e Efeito Fall-Through

Código analisado:

```c
#include <stdio.h>

int main() {
    int codigo = 2;

    switch (codigo) {
        case 1:
            printf("Bronze\n");
        case 2:
            printf("Prata\n");
        case 3:
            printf("Ouro\n");
            break;
        default:
            printf("Sem Medalha\n");
    }

    return 0;
}
```

## a)

A saída do programa será:

```
Prata
Ouro
```

Como `codigo` vale `2`, o `switch` entra diretamente no `case 2`.

Nesse `case`, é exibida a mensagem:

```
Prata
```

Como não existe um `break` logo após o `case 2`, o programa continua executando o próximo `case`, exibindo:

```
Ouro
```

A execução termina quando encontra o `break` do `case 3`.

## b)

A instrução `break` é utilizada para encerrar a execução do `switch` depois que um `case` é executado.

Quando o `break` é omitido, ocorre o fenômeno chamado **fall-through**.

Nesse caso, após entrar no `case` correspondente, o programa continua executando os próximos `case` até encontrar um `break` ou chegar ao final do `switch`.

## c)

A expressão utilizada no `switch` deve ser de um tipo compatível com valores inteiros, como:

- `int`
- `char`

Não é permitido utilizar diretamente tipos como:

- `float`
- `double`

Isso ocorre porque o `switch` realiza a seleção comparando o valor da expressão com valores constantes definidos nos `case`.

# Questão 05 — Avaliação de Curto-Circuito em Operadores Lógicos

Código analisado:

```c
int a = 0, b = 5, c = 10;

if (a != 0 && ++b > 5)
    c += 10;
else
    c -= 2;

printf("a = %d, b = %d, c = %d\n", a, b, c);
```

## a)

A condição começa verificando:

```c
a != 0
```

Como `a` vale `0`, essa condição é falsa.

Como o operador utilizado é `&&`, ocorre avaliação de curto-circuito. Nesse caso, como a primeira condição já é falsa, a segunda condição:

```c
++b > 5
```

não é avaliada.

Por isso, o valor de `b` continua sendo `5`.

Em seguida, o programa executa o bloco `else`:

```c
c -= 2;
```

Como `c` inicialmente vale `10`, ele passa a valer `8`.

A saída será:

```
a = 0, b = 5, c = 8
```

## b)

No operador lógico `&&`, as duas condições precisam ser verdadeiras para o resultado final ser verdadeiro.

Se a primeira condição já for falsa, a segunda não é avaliada.

No operador lógico `||`, basta uma das condições ser verdadeira.

Se a primeira condição já for verdadeira, a segunda não é avaliada.

Esse comportamento é chamado de avaliação de curto-circuito.

## c)

Considerando a condição:

```c
if (a == 0 || ++b > 5)
```

como `a` vale `0`, a expressão:

```c
a == 0
```

já é verdadeira.

Como o operador utilizado é `||`, ocorre curto-circuito e a expressão:

```c
++b > 5
```

não é avaliada.

Portanto, `b` continua valendo:

```
5
```

Como a condição é verdadeira, o programa executa:

```c
c += 10;
```

Assim, `c` passa de `10` para:

```
20
```

Valores finais:

```
b = 5
c = 20
```

# Questão 06 — Construções else-if e Análise Lógica de Intervalos

Código analisado:

```c
int idade = 25;

if (idade >= 60)
    printf("Idoso\n");

if (idade >= 18)
    printf("Adulto\n");

if (idade >= 12)
    printf("Jovem\n");
else
    printf("Criança\n");
```

## a)

Para:

```c
idade = 65;
```

a saída será:

```
Idoso
Adulto
Jovem
```

Isso acontece porque os três comandos `if` são independentes.

Como `65` satisfaz as três condições:

```
65 >= 60 → verdadeiro
65 >= 18 → verdadeiro
65 >= 12 → verdadeiro
```

os três blocos são executados.

O `else` está associado apenas ao último `if`, portanto não é executado.

## b)

Em uma sequência de comandos `if` independentes, todas as condições são testadas separadamente.

Por isso, mais de um bloco pode ser executado.

Já em uma cadeia formada por:

```c
if
else if
else
```

as condições são testadas em sequência.

Quando a primeira condição verdadeira é encontrada, o bloco correspondente é executado e as condições seguintes não são testadas.

Dessa forma, apenas uma alternativa da cadeia é executada.

## c)

O código pode ser reescrito utilizando `else if` da seguinte forma:

```c
int idade = 25;

if (idade >= 60) {
    printf("Idoso\n");
} else if (idade >= 18) {
    printf("Adulto\n");
} else if (idade >= 12) {
    printf("Jovem\n");
} else {
    printf("Criança\n");
}
```

Dessa forma, apenas uma categoria será exibida, pois o programa interrompe a cadeia assim que encontra a primeira condição verdadeira.

