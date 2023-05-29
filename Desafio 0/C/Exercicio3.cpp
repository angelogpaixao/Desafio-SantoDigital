#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
	
	int n;
	
	printf("Digite quanto numeros tera o conjunto:\n");
	scanf("%d", &n);
	
	int vetor[n], m=1, aux, diferenca;
	
	
	for(int i = 1; i<=n; i++){
		printf("Digite o numero %d: ", i);
		scanf("%d", &vetor[i]);
	}
	
	printf("[[], ");
	for(int i = 1; i <= n; i++){
			printf("[%d], ", vetor[i]);
	}
	
	printf("[");
	for(int i = 1; i<=n; i++){
		if(i<n){
		printf("%d, ", vetor[i]);
		}else if(i=n){
		printf("%d", vetor[i]);
		}
	}
	printf("]]");

	

	system("pause");
}

