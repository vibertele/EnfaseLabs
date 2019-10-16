#include <stdio.h>

int main(){
	int x1, x2, i;
	scanf("%d", &x1);
	scanf("%d", &x2);
	if(x1>x2){ //garantir que x2>x1
		x1=x1+x2;
		x2=x1-x2;
		x1=x1-x2;
	}
	int total=0;
	for(i=1; i<=(x2-x1)/2; i++){
		total=total+i;
	}
	total*=2;
	if((x2-x1)%2!=0){
		total=total+i;
	}
	printf("%d\n", total);
	return 0;
}