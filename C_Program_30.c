#include <stdio.h>

int main(){
	int a,b;
	printf("Enter the first number: ");
	scanf("%d", &a);
	printf("Enter the second number: ");
	scanf("%d", &b);
	int HCF;
	for(int i=1;(i<=a && i<=b);i++){
		if((a%i)+(b%i)==0){
			HCF=i;
		}
	}
	printf("%d", HCF);
}

