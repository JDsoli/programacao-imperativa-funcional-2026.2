Questão 1:

a)

O protótipo da função é:

```c
float celsius(float);
```

Ele aparece antes da função main e informa ao compilador que existe uma função chamada celsius, que recebe um valor float e retorna um float.

A chamada da função é:

```c
c = celsius(f);
```

Nesse momento a função celsius é executada utilizando o valor da variável f.

A definição da função é:

```c
float celsius(float fahr)
{
    return (fahr - 32.0) * 5.0 / 9.0;
}
```

É na definição que fica o código responsável por fazer a conversão de Fahrenheit para Celsius.

b)

O protótipo serve para informar antecipadamente ao compilador o nome da função, o tipo de valor que ela retorna e os parâmetros que ela recebe.

Se a função fosse definida somente depois da main e não existisse um protótipo antes da chamada, o compilador não teria todas essas informações no momento em que encontrasse a função sendo utilizada, podendo gerar erro ou aviso.

c)

A função celsius é do tipo float porque o valor devolvido por ela através do return é um float.

O tipo de uma função é determinado pelo tipo do valor que ela retorna. Os parâmetros são apenas os valores de entrada utilizados durante a execução da função.

---------------------------------------------------

Questão 2:

a)

Uma função em C pode devolver diretamente apenas um valor através do comando return.

No código:

```c
return soma, media;
```

a intenção era devolver a soma e a média ao mesmo tempo. Porém, dessa forma apenas o último valor da expressão, que é media, será retornado.

b)

Dentro de uma função void, o comando:

```c
return;
```

encerra imediatamente a execução da função.

Ele não é obrigatório no final de uma função void, pois quando o programa chega ao final do bloco da função ela é encerrada automaticamente.

c)

Uma função para retornar a média pode ser escrita assim:

```c
int calcularMedia(int a, int b, int c)
{
    return (a + b + c) / 3;
}
```

E outra função pode retornar a soma:

```c
int calcularSoma(int a, int b, int c)
{
    return a + b + c;
}
```

São usadas duas funções porque cada comando return devolve diretamente apenas um valor.

---------------------------------------------------

Questão 3:

a)

```c
void exibe_mensagem(char* msg);
```

Recebe um parâmetro, mas não retorna nenhum valor porque seu tipo é void.

```c
int obter_codigo(void);
```

Não recebe parâmetros e retorna um valor inteiro.

```c
void limpar_tela(void);
```

Não recebe parâmetros e também não retorna nenhum valor.

b)

Uma função com retorno produz um valor que pode ser armazenado em uma variável ou utilizado em outra operação.

Exemplo:

```c
int soma(int a, int b);
```

Uma função void funciona como um procedimento. Ela executa alguma ação, mas não devolve um valor.

Exemplo:

```c
void exibeMenu(void);
```

c)

A instrução:

```c
x = limpar_tela();
```

não é válida porque limpar_tela é uma função void e, portanto, não retorna nenhum valor que possa ser armazenado na variável x.

---------------------------------------------------

Questão 4:

a)

Na função:

```c
long fatorial(int n)
{
    return ((n == 0) ? (long)1 : (long)n * fatorial(n - 1));
}
```

o caso base é:

```c
n == 0
```

Quando n chega a zero, a função retorna 1 e para de fazer novas chamadas.

O passo recursivo é:

```c
n * fatorial(n - 1)
```

Sem o caso base, a função continuaria chamando a si mesma várias vezes até ocorrer um estouro da pilha de execução.

b)

Para a chamada fatorial(4), o empilhamento acontece assim:

```text
fatorial(4)
4 * fatorial(3)

fatorial(3)
3 * fatorial(2)

fatorial(2)
2 * fatorial(1)

fatorial(1)
1 * fatorial(0)

fatorial(0)
1
```

Depois começa o desempilhamento:

```text
fatorial(0) = 1
fatorial(1) = 1 * 1 = 1
fatorial(2) = 2 * 1 = 2
fatorial(3) = 3 * 2 = 6
fatorial(4) = 4 * 6 = 24
```

Portanto, o resultado de fatorial(4) é 24.

c)

Cada chamada recursiva cria uma nova chamada na pilha de execução, guardando os valores necessários para continuar o cálculo depois.

Quando o caso base é encontrado, as chamadas começam a ser finalizadas na ordem inversa.

Se não existir um caso base, as chamadas continuam sendo adicionadas à pilha até faltar espaço na memória, podendo causar falha no programa.

---------------------------------------------------

Questão 5:

a)

A macro:

```c
#define SQR(x) ((x)*(x))
```

quando recebe:

```c
SQR(2+3)
```

é substituída por:

```c
((2+3)*(2+3))
```

O resultado é:

```text
25
```

Já a macro:

```c
#define DOBRO(x) x*2
```

quando recebe:

```c
DOBRO(2+3)
```

é substituída por:

```c
2+3*2
```

Como a multiplicação é feita antes da soma, o resultado será:

```text
8
```

Isso acontece porque a macro SQR possui parênteses de proteção e a macro DOBRO não.

b)

A diretiva #define não termina com ponto e vírgula porque é uma diretiva do pré-processador e não uma instrução comum da linguagem C.

Por convenção, constantes e macros são escritas em letras maiúsculas para facilitar sua identificação no código.

c)

A declaração:

```c
#define PRN (n) printf("%d", n)
```

está incorreta porque existe um espaço entre o nome da macro PRN e os parênteses.

O correto é:

```c
#define PRN(n) printf("%d", (n))
```

Uma macro com argumentos é substituída diretamente no código pelo pré-processador antes da compilação.

Já uma função comum possui sua própria definição e é chamada durante a execução do programa.

---------------------------------------------------

Questão 6:

a)

A diretiva:

```c
#include <stdio.h>
```

é normalmente utilizada para incluir bibliotecas padrão do sistema, como a biblioteca que possui as funções printf e scanf.

Já:

```c
#include "areas.h"
```

é normalmente utilizada para incluir um arquivo criado pelo próprio programador no projeto.

b)

A diretiva:

```c
#undef SOMA
```

remove a definição anterior da macro SOMA.

A forma:

```c
#undef SOMA(x,y)
```

está incorreta porque #undef utiliza somente o nome da macro, sem seus parâmetros.

c)

Se DEBUG não estiver definido, será executado o trecho do #else:

```c
printf("Modo normal\n");
```

Essa decisão acontece durante o pré-processamento, antes da compilação do programa.

As diretivas do pré-processador não aparecem no executável final porque elas são utilizadas para modificar o código-fonte antes da compilação.