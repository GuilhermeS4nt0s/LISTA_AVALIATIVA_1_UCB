#include <stdio.h>
#include <stdlib.h>

int main() {
    int senha, senha_correta;

    scanf("%d", &senha);
    printf("senha cadastrada: %d\n", senha);

    while (1){
        scanf("%d", &senha_correta);

        if (senha_correta == senha) {
            printf("Senha valida!\n");
            break;
        } else {
            printf("Senha invalida!\n");
        }
    }

    return 0;
}
