#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//inicio do programa
#define DISCIPLINA 3
#define NOTAS 3

int main(){
	setlocale(LC_ALL, "");
	//declarando variaveis.
	char disciplina[DISCIPLINA][200];
	float somaPeso = 0, resultado[DISCIPLINA], somaMedia = 0, notas[DISCIPLINA][NOTAS], peso[NOTAS];
	int i, j;
	
	//solicitando dados do usu�rio.
	for(i=0;i<DISCIPLINA;i++){
		printf("\nDigite %i� disciplina:", i+1);
		scanf("%s",&disciplina[i]);
			for(j=0;j<NOTAS;j++){
				printf("\nDigite %i� nota:", j+1);
				scanf("%f",&notas[i][j]);
				printf("\nDigite o peso da %i� nota:", j+1);
				scanf("%f",&peso[j]);
			
		 	somaMedia += (notas[i][j] * peso[j]);
            somaPeso += peso[j];
			}		
			resultado[i] = somaMedia / somaPeso;
			somaPeso=0;
			somaMedia=0;
	}
	//exibindo resultados
		for(i=0;i<DISCIPLINA;i++){
		printf("\nDisciplina: %s", disciplina[i]);
		
			for(j=0;j<NOTAS;j++){
				printf("\n%i� nota: %.1f", j+1, notas[i][j]);
				
			}
	
		printf("\nM�dia ponderada: %.1f", resultado[i]);	
	}
	
	return 0;
//fim do programa	
}

