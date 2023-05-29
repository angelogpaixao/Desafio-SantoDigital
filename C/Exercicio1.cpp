#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void concatenar(int n, char string1[], char string2[]);

int main(){
	
	int n;

	scanf("%d", &n);
	
	char asterisco[n] = {'*'};	
	char i[n];
	
	concatenar(n, i, asterisco);
	
	system("pause");
}

void concatenar(int n, char string1[], char string2[]){
	
	for(int cont=1; cont<=n; cont++){
		strcat(string1, string2);
		if(cont < n){
			printf("[%s],", string1);
		}else if(cont = n){
			printf("[%s]", string1);
		}
	}
}
