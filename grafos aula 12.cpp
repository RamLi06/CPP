//grafos

#include <stdio.h>
#include <stdlib.h>

//funcao que determina o tamanho do grafo

int setTamanho(){
	int retorno = 0;
	
	printf("digite o tamanho do grafo: ");
	scanf("%d", &retorno);
	
	return retorno;
}
//funcao que cria grafo 
int ** criar(int tamanho){
	//declaração
	int i = 0;
	int j = 0;
	
	//criacao
	
	int **grafo = (int **) malloc(tamanho * sizeof(int *));
	for (i = 0; i < tamanho ; i++){
		grafo [i] = (int *) malloc(tamanho * sizeof(int));
	}
	//incializacao
	 for (i = 0 ; i < tamanho ; i++){
	 	for (j = 0 ; j < tamanho ; j++){
	 		grafo [i][j] = 0;
   }
	 
		 }
		 //retorno
		 return grafo;
	 }
	 


//funcao que preenche o grafo

void preencher(int **grafo, int tamanho){
	int i = 0;
	int j = 0;
	int amigo = 0;
	
	for (i = 0 ; i < (tamanho - 1) ; i++){
		for (j = (i + 1) ; j < tamanho ; j++){
			printf("digite <1> se %d for amigo de %d: ", i, j);
			scanf("%d", &amigo);
			
			grafo[i][j] = amigo;
			grafo[j][i] = amigo;
		}
	}
	
}
//funcao que imprime o grafo

void imprimir(int **grafo, int tamanho){
	int i = 0;
	int j = 0;
	
	for (i = 0; i < tamanho ; i++){
		for (j = 0; j < tamanho ; j++){
			printf("%d\t",grafo [i][j]);
		}
		printf("\n");
	}
	
}
//descobri vertice mais popular
int descobrirvertice(int ** grafo, int tamanho){
	int vertice = -1;
	int qtdAmigos = 0;
	int contador = 0;
	int i = 0;
	int j = 0;
	for (i = 0; i , tamanho ; i++){
		contador = 0;
		for (j = 0 ; j < tamanho; j++){
			if (grafo [i][j]){
				contador++;
			}
			
		}
		if (contador > qtdAmigos){
			vertice = i;
			qtdAmigos = contador;
		}
	}
	return vertice;
}


//funcao principal
int main(){
	int tamanho = setTamanho();
	
	int **grafo = criar(tamanho);
	
	preencher(grafo, tamanho);
	
	imprimir(grafo,tamanho);
	
	int vertice = descobrirvertice(grafo, tamanho);
	printf("O vertice mais popular e %d :", vertice);
	

}
	






















































 



