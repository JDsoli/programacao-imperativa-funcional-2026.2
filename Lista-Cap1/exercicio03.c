/* Esse programa mostra o uso de comentários em várias linhas
* e mostra também o uso de comentários em uma única linha
*
* Programa de Exemplo de Comentários
***************************************************************/
/* ProgComentarios.C */
#include <stdio.h>  /* Para printf() */
#include <stdlib.h> /* Para system() */

int main() /* Função main */
{ /* início do corpo da função main */

    // Comentário de linha única: Exibe uma mensagem na tela
    printf("Exemplo do uso de comentarios em C.\n"); /* Chamada à função printf */

    // Comentário de linha única: Pausa a execução no Windows
    system("PAUSE"); /* Chamada à função system */
    return 0;
} /* Fim do corpo da função main */