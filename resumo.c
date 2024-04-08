#include <stdio.h>

int main() {
  // for looping
  int i;
  for(i = 1; i <= 100; i++){
      if(i % 2 == 0){
          printf("%d\n", i);
      }
  }
  return 0;

  // while looping
  int numero; 
  int positivos = 1;
  int contador = 1;

  while(contador <= 6) {
    scanf("%d", &numero);
    if(numero >= 0){
      positivos++;
    }
    contador++;
  }

  printf("%d valores positivos\n", positivos);
  return 0;

  // do while looping
  do
  {
    printf("Digite a primeira nota: ");
    scanf("%f",&nota1);
    printf("Digite a segunda nota: ");
    scanf("%f",&nota2);
    
    media = (nota1 + nota2)/2;
    printf("Media do aluno = %f\n",media);
    
    printf("Digite 1 para continuar ou 2 para sair\n");
    scanf("%d", &resp);
  
  }while (resp==1);

  // array implementation
  int codigo, quantidade;

  double produtos[5] = { 4.00, 4.50, 5.00, 2.00, 1.50 };

  scanf("%d %d", &codigo, &quantidade);
  
  printf("Total: R$ %.2lf\n", (quantidade * (produtos[codigo - 1])));
  return 0;

  // switch case implementation 
  switch ( ddd )
  {
    case 61 :
    printf ("Brasilia\n");
    break;

    case 71 :
    printf ("Salvador\n");
    break;

    case 11 :
    printf ("Sao Paulo\n");
    break;

    case 21 :
    printf ("Rio de Janeiro\n");
    break;

    case 32 :
    printf ("Juiz de Fora\n");
    break;

    case 19 :
    printf ("Campinas\n");
    break;

    case 27 :
    printf ("Vitoria\n");
    break;

    case 31 :
    printf ("Belo Horizonte\n");
    break;

    default:
    printf ("DDD nao cadastrado\n");
  }
}