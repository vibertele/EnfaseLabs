#include<stdio.h>

int main(){
	char tabuleiro[3][3];
	scanf("%s", tabuleiro[0]);
	scanf("%s", tabuleiro[1]);
	scanf("%s", tabuleiro[2]);
	int totalX=0, total0=0;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			if(tabuleiro[i][j]=='X') totalX++;
			else if(tabuleiro[i][j]=='0') total0++;
		}
	}
	if(totalX>total0+1){
		printf("inválido\n");
		return 0;
	}
	else{
		if(totalX<total0){
			printf("inválido\n");
			return 0;
		}
		else{
			for(int i=0; i<3; i++){
				if(tabuleiro[i][0]==tabuleiro[i][1] && tabuleiro[i][1]==tabuleiro[i][2]){
					if(tabuleiro[i][0]=='X'){
						printf("primeiro_venceu\n");
						return 0;
					}
					else{
						if(tabuleiro[i][0]=='0'){
							printf("segundo_venceu\n");
							return 0;
						}
					}
				}
				if(tabuleiro[0][i]==tabuleiro[1][i] && tabuleiro[1][i]==tabuleiro[2][i]){
					if(tabuleiro[0][i]=='X'){
						printf("primeiro_venceu\n");
						return 0;
					}
					else{
						if(tabuleiro[0][i]=='0'){
							printf("segundo_venceu\n");
							return 0;						}
					}
				}
			}
			if(tabuleiro[0][0]==tabuleiro[1][1] && tabuleiro[1][1]==tabuleiro[2][2]){
				if(tabuleiro[0][0]=='X'){
					printf("primeiro_venceu\n");
					return 0;
				}
				else{
					if(tabuleiro[0][0]=='0'){
						printf("segundo_venceu\n");
						return 0;
					}
				}
			}
			if(tabuleiro[2][0]==tabuleiro[1][1] && tabuleiro[1][1]==tabuleiro[0][2]){
				if(tabuleiro[2][0]=='X'){
					printf("primeiro_venceu\n");
					return 0;
				}
				else{
					if(tabuleiro[2][0]=='0'){
						printf("segundo_venceu\n");
						return 0;
					}
				}
			}
		}
		if(totalX==total0){
			printf("primeiro\n");
			return 0;
		}
		else{
			if((totalX+total0)==9){
				printf("empate\n");
			}
			else{
				printf("segundo\n");
				return 0;
			}
		}
	}
}