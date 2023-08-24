#include <stdio.h>
#include <string.h>

//Dupla: Enzo Arilla (255705) e Francisca Rosa (167666)

typedef struct 
{
    char nomeBanda[50];
    char estiloMusica[20];
    int numeroIntegrantes;
    int seguidoresTwitter;
    int ouvintesSpotify;
} Banda;

int main()
{
    int i, controle = 0;
    char estiloProcura[20];
    int maisOuvintes = 0, indiceMaisPopular = 0;
    Banda bandas[5];

    for (i = 0; i < 5; i++)
    {
        fgets(bandas[i].nomeBanda, 50, stdin);
        fgets(bandas[i].estiloMusica, 20, stdin);
        scanf("%d", &bandas[i].numeroIntegrantes);
        getchar();
        scanf("%d", &bandas[i].seguidoresTwitter);
        scanf("%d", &bandas[i].ouvintesSpotify);
        getchar();
        if ((bandas[i].seguidoresTwitter + bandas[i].ouvintesSpotify) > maisOuvintes)
        {
            maisOuvintes = (bandas[i].seguidoresTwitter + bandas[i].ouvintesSpotify);
            indiceMaisPopular = i;
        } 
    }

    do
    {

      printf("Qual estilo de musica voce esta procurando? (Pressione ENTER para sair)\nR: ");
      fgets(estiloProcura, 20, stdin);
      printf("Exibindo resultados:\n");
      for (i = 0; i < 5; i++)
      {
          if (strcmp(bandas[i].estiloMusica, estiloProcura) == 0)
          {
              printf("- %s", bandas[i].nomeBanda);
              controle = 1;
          }
      }
      if (controle == 0)
        printf("A busca nao retornou resultados\n");
      
      controle = 0;

    } while (strcmp(estiloProcura, "\n") != 0);

    printf("A banda que possui mais engajamento eh: %s", bandas[indiceMaisPopular].nomeBanda);

    return 0;
}