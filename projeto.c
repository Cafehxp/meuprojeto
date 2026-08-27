#include <stdio.h>

int main(){
    int entrada;
    FILE *save = fopen("dados.txt", "w");
    if (save == NULL) {
        printf("erro ao abrir o programa\n");
        return 1;
    }
    fprintf(save, "Primeiro teste de escrita em C");
    fclose(save);
    printf("arquivo gravado e fechado com sucesso\n");

    printf("digite 1 para ler o arquivo\n");
    scanf("%d", &entrada);

    switch (entrada)
    {
    case 1:
        FILE *ler = fopen("dados.txt", "r");
        if(ler == NULL) {printf("não leu nada");
             return 1;}
        char conteudo[100];
        fgets(conteudo, sizeof(conteudo), ler);
        fclose(ler);
        printf("lido: %s", conteudo);
        break;
    
    default:
        break;
    }
    }

