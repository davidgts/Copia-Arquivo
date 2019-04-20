#include <stdio.h>
#define MAX 50
int main(){
FILE *arq;
FILE *arq2;

char nomeArquivo [MAX],nomeArquivo2[MAX];
char c[MAX];

printf("Digite o Caminho do Arquivo de origem.");
gets(nomeArquivo);
printf("Digite o Caminho do Arquivo de destino.");
gets(nomeArquivo2);

arq = fopen(nomeArquivo , "rb");
arq2 = fopen (nomeArquivo2 , "wb");

if ((arq == NULL) || (arq2 == NULL)){
  printf ("Erro ao abrir o aquivo !/n");
}else{
  while (fgets(c,100,arq)!=NULL){
     fputs(c,arq2);
  }
}

fclose(arq);
fclose(arq2);
return 0;
}
