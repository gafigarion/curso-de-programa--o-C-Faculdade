#include <stdlib.h>
#include <stdio.h>
#include <stdio.h>
#include <string.h>

float lernota(){
	float nota;
	scanf("%f",&nota);
	return nota;
}



void salvaaluno (){
	char aluno[30];
	float n1,t1,n2,t2,sc,pv;
	FILE *arquivo;
    arquivo = fopen("bancodedados.txt","a+");
	printf("digite o nome do aluno:\n");
	gets(aluno);
	printf("digite as notas ma ordem:\n");
	printf("Nota1 Trabalho1 Nota2 Trabalho2 2ªChamada ProvaFinal\n");
	n1=lernota();
	t1=lernota();
	n2=lernota();
	t2=lernota();
	sc=lernota();
	pv=lernota();
	getc('\n');
	fprintf(arquivo," - ");
	fputs(aluno,arquivo);
	fprintf(arquivo," - ");
	fprintf(arquivo,"%f %f %f %f %f %f",n1,t1,n2,t2,sc,pv);

	fclose(arquivo);	
}

int menuprincipal(){
	 int op;
     printf("Digite 1 para cadastrar novo aluno.\n");
     printf("Digite 2 consultar aluno.\n");
     printf("Digite 3 para sair.\n\n");
     scanf("%d",&op);
	 return op; 
}

int menusecundario(){
	int op;
	printf("Digite 1 para cadastrar .\n");
    printf("Digite 2 voltar.\n");
    scanf("%d",&op);
    return op;
}

int main ()
{
    char aluno[30];
    int notas,op; 
	salvaaluno ();
    
    

	
	

							
        
    getch();
    return 0;
}

