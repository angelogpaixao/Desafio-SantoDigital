#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
	
	int n;
	
	printf("Digite o tamanho do vetor:\n");
	scanf("%d", &n);
	
	int vetor[n], m=1, aux=0, diferenca=0;
	
	
	for(int i = 1; i<=n; i++){
		printf("Digite o elemento %d: ", i);
		scanf("%d", &vetor[i]);
	}
	
	printf("\n");

	int pos1[m], pos2[m];
	
	for(int i = 1; i <= n; i++){
		for(int j = i + 1; j<=n; j++){
				
				if(vetor[i] > vetor[j]){
				diferenca = vetor[i] - vetor[j];
				}else{
				diferenca = vetor[j] - vetor[i];
				}
								
				if(aux == 0){
					
					aux = diferenca;
					pos1[i] = vetor[i];
					pos2[i] = vetor[j];
					
				}else{
				
					if(aux != 0){
					
						if(aux > diferenca){
						aux = diferenca;
						pos1[i] = vetor[i];
						pos2[i] = vetor[j];
						}else if(aux == diferenca){
							m++;
							pos1[i+1] = vetor[i];
							pos2[i+1] = vetor[j];
						}
					}
			}
		}
	}
	
	printf("\n");
	printf("[");
	for(int i = 1; i <= m; i++){
		if(i<m){
			printf("(%d, %d),", pos1[i], pos2[i]);
		}else if(i = m){
			printf("(%d, %d)", pos1[i], pos2[i]);
		}
	}
	printf("]");
	
	printf("\n");
	system("pause");
}

