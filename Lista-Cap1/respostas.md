Questão 4:
#include <stdio.h>
#include <stdlib.h>; diretivas nao terminam com ";" desta forma a funcao system n funciona
int Main{} Em C nao podemos colocar a funcao 'main' como 'Main' pois e case sensitive.  
alem disso os parenteses devem ser colocados para argumentos e logo depois as chaves para o interior do programa
(
 printf( Existem %d semanas no ano.,52);A funcao printf precisa ter suas strings de argumento com aspas duplas ela tambem apresenta falta de quebra de linha
 cout << endl; essa funcao nao existe na linguagem C e sim em C++
 system("PAUSE");
 return 0; a funcao return nao funciona pois nao esta dentro de nenhum main
)

Este e o codigo corrigido

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Existem %d semanas no ano.\n", 52);
    system("PAUSE");
    return 0;
}

---------------------------------------------------
Questão 5:
main()
{
 printf("Linguagem C");
 system("pause");
}

Neste código faltam as diretivas para usar as funções printf e system. Em C, a função main não deve ser declarada sem especificar o seu tipo. A chamada à função system, além de não funcionar por falta da diretiva, deve receber o argumento PAUSE em maiúsculas (no Windows), pois a linguagem é case-sensitive. Por fim, o corpo da função não possui a instrução de término (return 0;) para informar ao sistema operacional o status de encerramento do programa.

---------------------------------------------------
Questão 6:

main()
{
 int a=1; b=2; c=3:
 printf("0s números são: %d%d%d\n, a, b, c, d);
 system("pause");
}

Neste código faltam as diretivas para usar as funções printf e system. A função main não deve ser declarada sem especificar o seu tipo de retorno int. Na linha de declaração das variáveis, o uso do ponto e vírgula ; após a variável a encerra prematuramente a declaração do tipo int, deixando as variáveis b e c sem tipo definido; além disso, a linha termina incorretamente com dois pontos : em vez de ponto e vírgula. Na função printf, a string de argumento não foi fechada com aspas duplas, foi utilizado o caractere 0 (zero) no lugar da letra O, e é passada a variável d que não foi declarada no programa. Além disso, a chamada à função system deve receber o argumento "PAUSE" em maiúsculas (no Windows). Por fim, o corpo da função não possui a instrução de término (return 0;) para informar ao sistema operacional o status de encerramento do programa.

Este é o código corrigido:

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 1, b = 2, c = 3;

    printf("Os numeros sao: %d %d %d\n", a, b, c);

    system("PAUSE");
    return 0;
}
------------------------------------------------
Questão 7:

a) printf("\n\tBom dia! Shirley.");
Pula uma linha, dá um espaço de tabulação (`\t`) e imprime a mensagem na mesma linha.

Saída:

```
Bom dia! Shirley.

```

---

b) printf("Você já tomou café? \n");
Imprime a mensagem na tela e pula uma linha ao final com o `\n`.

Saída:
Você já tomou café?

---

c) printf("\n\nA solução não existe!\nNão insista.");
Pula duas linhas no início, imprime a primeira frase, pula mais uma linha e imprime a segunda frase.

Saída:

A solução não existe!
Não insista.

---

d) printf("Duas\tlinhas\tde\tsaída\nou\tuma?");
Imprime o texto aplicando tabulações (`\t`) entre cada palavra da primeira linha, pula uma linha no `\n` e imprime a última palavra com uma tabulação antes.

**Saída:**
Duas	linhas	de	saída
ou	uma?

---

e) `printf("%s\n%s\n%s\n", "um", "dois", "três");
Substitui cada `%s` pelas palavras passadas como argumento ("um", "dois", "três"), imprimindo cada uma em uma linha diferente por causa dos `\n`.

Saída:
um
dois
três

--------------------------------------------

Questão 8:

#include <stdio.h>
#include <stdlib.h>
int main()
{
printf("\n\t"Primeiro programa"");
system("PAUSE");
return 0;
}

Neste programa, as diretivas `#include <stdio.h>` e `#include <stdlib.h>` permitem o uso das funções `printf` e `system`. Ao ser executado, o programa entra na função `main` e executa a instrução `printf`. A sequência de escape `\n` faz o cursor pular para a linha seguinte. Logo em seguida, o `\t` insere uma tabulação (espaço horizontal). As sequências `\"` servem para imprimir as aspas duplas literais ao redor do texto sem fechar a string do `printf`. Por fim, o programa exibe o texto `Primeiro programa` entre aspas, chama a função `system("PAUSE")` para pausar a tela até que uma tecla seja pressionada e encerra a execução retornando `0`.

Este é o resultado da saída exata gerada no console:

Saída:

"Primeiro programa"Pressione qualquer tecla para continuar. . .

------------------------------------------------

Questão 9:

#include <stdio.h>
#include <stdlib.h>
int main()
{
printf("%c%c%cPrimeiro programa", '\n', '\t', '"');
printf("%c", '"');
system("PAUSE");
return 0;
}

Neste programa, o compilador C interpreta os argumentos do tipo caractere simples (`'\n'`, `'\t'`, `'\''`) passados para o modificador `%c` como seus respectivos valores numéricos da tabela ASCII. Cada especificador `%c` imprime exatamente um único caractere correspondente. No primeiro `printf`, o primeiro `%c` executa a quebra de linha (`\n`), o segundo `%c` aplica uma tabulação (`\t`) e o terceiro `%c` exibe a aspa dupla (`"`). Em seguida, o texto `Primeiro programa` é impresso. No segundo `printf`, o especificador `%c` imprime a aspa dupla de fechamento `"` (nota-se que o argumento correto em C para caractere deve ser entre aspas simples `'\"'`). Por fim, o `system("PAUSE")` congela a tela e o `return 0;` finaliza o programa com sucesso.

Este é o resultado da saída exata gerada no console:

Saída:


Primeiro programa"Pressione qualquer tecla para continuar. . .

---------------------------------------------------

Questão 10: 

Alternativa correta: c) Falso

(Nota: A afirmação de que "representam a mesma variável na memória" é Falsa, pois a linguagem C diferencia rigorosamente letras maiúsculas de minúsculas).

Justificativa:
A linguagem C trata os caracteres maiúsculos e minúsculos como símbolos totalmente diferentes por possuírem códigos ASCII distintos. Por isso, a tentativa de acessar a variável Peso ou PESO não alterará nem lerá o valor armazenado em peso. Qualquer alteração na grafia das letras cria um identificador único para o compilador.

------------------------------------------------
---

Questão 11:

Para cada um dos valores constantes descritos na tabela, a indicação da classificação e do tipo de dado base correspondente em C é:

| Constante | Classificação (Tipo de Constante) | Tipo Base em C |
| --- | --- | --- |
| `\r` | Sequência de escape | `char` |
| `2130` | Constante inteira decimal | `int` |
| `-123` | Constante inteira decimal | `int` |
| `33.28` | Constante de ponto flutuante | `double` |
| `0XFA` | Constante inteira hexadecimal | `int` |
| `0101` | Constante inteira octal | `int` |
| `2.0e30` | Constante de ponto flutuante (notação científica) | `double` |
| `\xDC` | Sequência de escape (hexadecimal) | `char` |
| `'\"'` | Constante de caractere | `char` |
| `'\\'` | Constante de caractere | `char` |
| `'F'` | Constante de caractere | `char` |
| `0` | Constante inteira decimal | `int` |
| `'\0'` | Constante de caractere (caractere nulo) | `char` |
| `"F"` | Constante string | `char[]` (ou `char *`) |
| `-4567.89` | Constante de ponto flutuante | `double` |

--------------------------------------------

Questão 12:

a) `int a;`
Status: Correto
Justificativa: Declaração padrão e totalmente válida para uma variável do tipo inteiro.

---

b) `float b;`
Status: Correto
Justificativa: Declaração padrão e totalmente válida para uma variável do tipo ponto flutuante de precisão simples.

---

c) `double float c;`
Status: Incorreto
Justificativa: Em C, os tipos `double` e `float` são especificadores distintos de ponto flutuante. Não é permitido combinar os dois modificadores juntos na mesma declaração.

---

d) `unsigned char d;`
Status: Correto
Justificativa: Uso válido do modificador `unsigned` junto ao tipo `char` para representar caracteres ou inteiros sem sinal de 8 bits (0 a 255).

---

e) `unsigned e;`
Status: Correto
Justificativa: Sintaxe válida em C. Quando o modificador `unsigned` é utilizado de forma isolada, o tipo base `int` fica implícito pelo padrão da linguagem (equivale a `unsigned int`).

---

f) `long float f;`
Status: Incorreto
Justificativa: O modificador `long` não pode ser aplicado ao tipo `float`. Para obter maior precisão de ponto flutuante, a linguagem disponibiliza o tipo `double` ou `long double`.

---

g) `long g;`
Status: Correto
Justificativa: Sintaxe válida em C. Quando o modificador `long` é utilizado de forma isolada, o tipo base `int` fica implícito pelo padrão da linguagem (equivale a `long int`).

---

h) `long double h;`
Status: Correto
Justificativa: Declaração padrão e totalmente válida para um tipo de ponto flutuante de precisão estendida.

---------------------------------------

Questão 13:

Alternativa correta: c) São arquivos de texto ASCII padrão contendo protótipos de funções, definições de constantes, macros e tipos.

Justificativa:
Os arquivos de inclusão (*header files* com extensão `.h`) não são bibliotecas binárias compiladas, mas sim arquivos de texto fonte contendo as declarações dos protótipos de funções, definições de tipos e macros que informam ao compilador como utilizar adequadamente as funções das bibliotecas.

-----------------------------------------

Questão 14:

Alternativa correta: a) Instruir o compilador a carregar as definições das funções da biblioteca padrão antes de compilar o código-fonte.

Justificativa:
Ao incluir arquivos de cabeçalho como `<stdio.h>`, o compilador passa a conhecer antecipadamente a assinatura, o tipo de retorno e os parâmetros esperados pelas funções da biblioteca padrão (como `printf` e `scanf`), permitindo validar a sintaxe do programa durante a compilação.

--------------------------------

Questão 15:

Alternativa correta: c) Uma diretiva especial para o pré-processador C, executada antes da compilação.

Justificativa:
Todas as instruções iniciadas com o caractere `#` não são comandos da sintaxe nativa da linguagem C compilados diretamente em código de máquina, mas sim diretivas que orientam o pré-processador a realizar modificações no texto do arquivo-fonte antes da etapa de compilação.

----------------------------------------------

Questão 16:

Alternativa correta: c) Pré-processador (fase do compilador que altera o programa-fonte antes da compilação propriamente dita).

Justificativa:
As diretivas iniciadas por `#` são processadas na fase inicial da compilação pelo pré-processador. Ele é responsável por tarefas como substituição de texto, expansão de macros e inclusão do conteúdo literal dos arquivos de cabeçalho no código-fonte.

----------------------------------------

Questão 17:

As instruções sintaticamente corretas são:

a) printf ( "Primeiro programa" );
b) printf( "Primeiro programa" );
c) printf("Primeiro programa");

A instrução incorreta é:

d) printf "Primeiro programa" ; — Esta instrução é inválida em C pois a chamada de qualquer função exige obrigatoriamente que a lista de argumentos esteja contida entre parênteses `()`.

O que essas variações demonstram:
Essas variações demonstram que o compilador C é uma linguagem de **formato livre** em relação a espaços em branco, tabulações e quebras de linha fora das strings literais. O compilador ignora o número de espaços entre o nome da função, os parênteses e o argumento fornecido, permitindo flexibilidade de estilo sem alterar o significado do código, desde que a estrutura sintática necessária (como os parênteses e o ponto e vírgula) seja mantida.

-----------------------------------------------------------

Questão:21

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Treinamento em programacao.\nLinguagem C.\n");

    system("PAUSE");
    return 0;
}
---

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Treinamento em programacao.\n");
    printf("Linguagem C.\n");

    system("PAUSE");
    return 0;
}

--
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
    printf("\xBA Treinamento em programacao. \xBA\n");
    printf("\xBA Linguagem C.                \xBA\n");
    printf("\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");

    system("PAUSE");
    return 0;
}

------------------------------------------------

