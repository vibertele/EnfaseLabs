#include<stdio.h>
#include<stdlib.h>

int total=2;

void troca(int *x, int *y){ 
	int temp; 
	temp = *x; 
	*x = *y; 
	*y = temp; 
}

void permute(int * vet, int ini, int fim){ 
	int i; 
	if (ini == fim){
		int fibo=2;
		for(int j=2; j<=fim; j++){
			if(vet[j-2]+vet[j-1]==vet[j]) fibo++;
		}
		if(fibo>total) total=fibo;
	}
	else{ 
		for (i = ini; i <= fim; i++){ 
			troca((vet+ini), (vet+i)); 
			permute(vet, ini+1, fim); 
			troca((vet+ini), (vet+i)); //backtrack 
		} 
	} 
} 

int main(){
	int n;
	scanf("%d", &n);
	int * vet=malloc(n*sizeof(int));
	for(int i=0; i<n; i++){
		scanf("%d", &vet[i]);
	}
	permute(vet, 0, n-1);
	printf("%d\n", total);
	free(vet);
	return 0;
}