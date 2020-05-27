#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define linha 5
#define coluna 5

void fimdejogo (int score,int l,int c,char mascara[linha][coluna]){/* verifica se o jogador ganhou ou perdeu*/
	int i,j;
	if (score == 100){/*caso ganhe usuario vera essa mensagem na tela */
		printf("Score Atual:%d\n",score);
		printf("Vitoria!!!\n\n");
	}else{/*caso uruaio perca a matriz e atualizada e impressa na tela com um B de bomba*/
        for (i=0; i<linha; i++){ 
            for( j=0; j<coluna; j++){
                mascara[l][c] = 'B';
                printf("%2.c", mascara[i][j]);
            }
            printf("\n");
        }
        printf("BOMBA = FIM DE JOGO!!!\n\n");
	}	
}


int lerlinha (){/* ler a linha e testa o valor para que fique entre 0 e 4*/
    int x;
    refaz:
    scanf("%d",&x);
    if (x >= 0 && x <= 4)
       return x;
    else
        printf("digite um valor entre 0 e 4:\n");
        goto refaz;
}

int lercoluna (){/* ler a coluna e testa o valor para que fique entre 0 e 4*/
    int y;
    refaz:
    scanf("%d",&y);
    if (y >= 0 && y <= 4)
       return y;
    else
        printf("digite um valor entre 0 e 4:\n");
        goto refaz;
}


void menu(){/*menu principal*/
       printf("#===============================================#\n");
       printf("#                     campo minado              #\n");     
       printf("#                                               #\n");
       printf("#          Digite o nivel de dificuldade        #\n");
       printf("#                     1- facil                  #\n");
       printf("#                     2- normal                 #\n");
       printf("#                     3- dificil                #\n");
       printf("#                     4- sair                   #\n");
       printf("#===============================================#\n");
       printf("#Digite o nivel:\n");
       printf("\n\n");
}



int main()
{
    
  int vetbomba[linha][coluna];/*vetor com valores aleatorios*/
  char mascara[linha][coluna];/*mascara que sera apresentada ao usuario*/
  int i,j;
  int op,op2;
  int l,c;/*variavel armazena posicao das linhas e colunas*/
  int qt_bomba;/*conta a quantidade de bombas*/
  int bomba_linha,bomba_coluna; /* variaveis que ajuda a botar as bombas por linha e por coluna*/
  int score;/*contagem de pontos do usuario*/
  
  inicio:
  
  /*inicializa o vetor com um*/
  for (i=0; i<linha; i++){
      for (j=0; j<coluna; j++){
          vetbomba[i][j] = 1;
      }
  }
  
  menu();
  score=0;
  scanf ("%d",&op);
  /*NIVEL FACIL===============================================================================================*/       
        if (op==1){
                       
                qt_bomba =6;       
                printf("Nivel Facil\n");
                printf("Condicao de Vitoria == Acumular 100 pontos.\n");
                printf("Condicao de Derrota == Encontrar uma Bomba.\n\n");
                
                
         /* inicializa os valores aleatorios*/
                for (j=0;j<qt_bomba;j++){
                    bomba_linha = rand()%4;
                    bomba_coluna = rand()%4;
                    vetbomba[bomba_linha][bomba_coluna]=0;
                }
         /*inicializa a matriz com simbolos para o usuario*/
                for (i=0; i<5; i++){
                    for (j=0; j<5; j++){
                        mascara[i][j] = '#';
                        printf("%2.c", mascara[i][j]);    
                    }
                    printf("\n");
                }
                
         /*efetua a leitura da linha e coluna*/ 
                printf("Informe as coordenadas(linha e depois coluna):\n");
                printf("Obs: Valores de 0 ate 4.\n");
                l = lerlinha();
                c = lercoluna(); 

                 
                while(vetbomba[l][c] != 0 ){/*enquanto o vetor bomba nas posicoes digitadas forem diferentes de 0 o laco continua rodando*/
                      if (vetbomba[l][c] == 0){/*testa se tem bomba  caso tenha  acrecenta B na matriz*/
                         mascara[l][c] = 'B';
                      }else if (vetbomba[l][c]>0){/* coloca X onde nao tem bomba e testa se as coordenadas ja foram digitadas anteriormente  */
                           mascara[l][c] = 'X';   /*colocando no lugar um X na matriz mascara e -1 na matriz bomba para indicar local vazio */
                           vetbomba[l][c] = -1;
                           score = score + 10;
                           if (vetbomba[l][c] != 0 && score == 100){/*caso as duas condicoes sejam atingidas o jogo finaliza com vitoria*/
                           		fimdejogo(score,l,c,mascara);
								goto continuar; /*essa instrucao faz o  programa continuar*/
                           }
                      }else{
                      		  printf("posicao ja foi escolhida....escolha nova posicao!!!\n");  
                      }

                      for (i=0; i<linha; i++){ 
                          for( j=0; j<coluna; j++){
                               printf("%2.c", mascara[i][j]);
                          }
                          printf("\n");
                      }
                      printf("Score Atual:%d\n\n",score);
                      printf("Informe as coordenadas(linha e depois coluna):\n");
                      printf("Obs: Valores de 0 ate 4.\n");
                      l = lerlinha();
                      c = lercoluna();  
                }
				
				fimdejogo(score,l,c,mascara);
                
                continuar:
                printf("Deseja continuar?\n");
                printf (" 1--SIM\n");
                printf (" 2--NAO\n");
                scanf ("%d",&op2);
                      if (op2==1){
                         goto inicio;
                      }else if (op2==2){
                           abort();
                      }else{
                          printf ("valor invalido!!!\n");
                          printf ("Digite numero 1 para Sim e 2 para Nao!\n");
                          goto continuar;
                      }   
                          
/*NIVEL NORMAL=============================================================================*/      
 
        }else if (op==2){      
                    
                qt_bomba =11;                             
                printf("Nivel Normal\n\n");
                printf("Condicao de Vitoria == Acumular 100 pontos.\n");
                printf("Condicao de Derrota == Encontrar uma Bomba.\n\n");
                
                
         /* inicializa os valores aleatorios*/
                for (j=0;j<qt_bomba;j++){
                    bomba_linha = rand()%4;
                    bomba_coluna = rand()%4;
                    vetbomba[bomba_linha][bomba_coluna]=0;
                }

         /*inicializa a matriz com simbolos para o usuario*/
                for (i=0; i<5; i++){
                    for (j=0; j<5; j++){
                        mascara[i][j] = '#';
                        printf("%2.c", mascara[i][j]);    
                    }
                    printf("\n");
                }
         /*efetua a leitura da linha e coluna*/ 
                printf("Informe as coordenadas(linha e depois coluna):\n");
                printf("Obs: Valores de 0 ate 4.\n");
                l = lerlinha();
                c = lercoluna(); 

                 
                while(vetbomba[l][c]!= 0){
                      if (vetbomba[l][c] == 0){
                         mascara[l][c] = 'B';
                      }else if (vetbomba[l][c]>0){
                           mascara[l][c] = 'X';
                           vetbomba[l][c] = -1;
                           score = score + 10;
                           if (vetbomba[l][c] != 0 && score == 100){
                           		fimdejogo(score,l,c,mascara);
								goto continuar2; 
                           }
                      }else{
                      		  printf("posicao ja foi escolhida....escolha nova posicao!!!\n");  
                      }
                      for (i=0; i<linha; i++){ 
                          for( j=0; j<coluna; j++){
                               printf("%2.c", mascara[i][j]);
                          }
                          printf("\n");
                      }
                      printf("Score Atual:%d\n\n",score);
                      printf("Informe as coordenadas(linha e depois coluna):\n");
                      printf("Obs: Valores de 0 ate 4.\n");
                      l = lerlinha();
                      c = lercoluna();  

                }
                
				fimdejogo(score,l,c,mascara);

                continuar2:
                printf("Deseja continuar?\n");

                printf(" 1--SIM\n");
                printf(" 2--NAO\n");
                scanf("%d",&op2);
                    if (op2==1){
                        goto inicio;
                    }else if (op2==2){
                        abort();
                    }else{
                        printf("valor invalido!!!\n");
                        printf("Digite numero 1 para Sim e 2 para Nao!\n");
                        goto continuar2;
                    }
                        
/*NIVEL DIFICIL==========================================================================*/
        }else if (op==3){
                        
                qt_bomba =16;                             
                printf("Nivel Dificil\n\n");
                printf("Condicao de Vitoria == Acumular 100 pontos.\n");
                printf("Condicao de Derrota == Encontrar uma Bomba.\n\n");
                
                
         /* inicializa os valores aleatorios*/
                for (j=0;j<qt_bomba;j++){
                    bomba_linha = rand()%4;
                    bomba_coluna = rand()%4;
                    vetbomba[bomba_linha][bomba_coluna]=0;
                }

         /*inicializa a matriz com simbolos para o usuario*/
                for (i=0; i<5; i++){
                    for (j=0; j<5; j++){
                        mascara[i][j] = '#';
                        printf("%2.c", mascara[i][j]);    
                    }
                    printf("\n");
                }
         /*efetua a leitura da linha e coluna*/ 
                printf("Informe as coordenadas(linha e depois coluna):\n");
                printf("Obs: Valores de 0 ate 4.\n");
                l = lerlinha();
                c = lercoluna(); 

                 
                while(vetbomba[l][c]!= 0 ){
                      if (vetbomba[l][c] == 0){
                         mascara[l][c] = 'B';
                      }else if (vetbomba[l][c]>0){
                           mascara[l][c] = 'X';
                           vetbomba[l][c] = -1;
                           score = score + 10;
                           if (vetbomba[l][c] != 0 && score == 100){
                           		fimdejogo(score,l,c,mascara);
								goto continuar3; 
                           }
                      }else{
                            printf("posicao ja foi escolhida....escolha nova posicao!!!\n");                          
                      }

                      for (i=0; i<linha; i++){ 
                          for( j=0; j<coluna; j++){
                               printf("%2.c", mascara[i][j]);
                          }
                          printf("\n");
                      }
                      printf("Score Atual:%d\n\n",score);
                      printf("Informe as coordenadas(linha e depois coluna):\n");
                      printf("Obs: Valores de 0 ate 4.\n");
                      l = lerlinha();
                      c = lercoluna();  

                }
                
      
				fimdejogo(score,l,c,mascara);

                continuar3:
                
                printf("Deseja continuar?\n");
                printf(" 1--SIM\n");
                printf(" 2--NAO\n");
                scanf("%d",&op2);
                    if (op2==1){
                        goto inicio;
                    }else if (op2==2){
                    	abort();
                    }else{
                        printf("valor invalido!!!\n");
                        printf("Digite numero 1 para Sim e 2 para Nao!\n");
                    	goto continuar3;
                        }                    
                             
        }else if (op==4){
              abort();/*finaliza o programa*/
        }else{
              printf ("Escolha uma opçao valida!!!\n");/*controle para que o usuario digite valores validos*/
              goto inicio;
        }
  getch();	
  return 0;
}

