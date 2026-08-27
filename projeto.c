#include <stdio.h>

int main(){
    int entrada;
    char escrita[100];
    FILE *save = fopen("dados.txt", "w");
    if (save == NULL) {
        printf("erro ao abrir o programa\n");
        return 1;
    }
    printf("digite o que deseja salvar no arquivo\n");
    fgets(escrita, sizeof(escrita), stdin);
    fprintf(save, "%s", escrita);
    fclose(save);
    printf("arquivo gravado e fechado com sucesso\n");

    printf("digite 1 para ler o arquivo, 0 para parar o codigo\n");
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
    case 0:
    printf("codigo finalizado");
    return 0;
    default:
        break;
    }
    }

