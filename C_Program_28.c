#include <stdio.h>

int main(){
	int a,b;
	printf("Enter the first number: ");
	scanf("%d",&a);
	printf("Enter the second number: ");
	scanf("%d",&b);
	int LCM;
	for(int i=1; ;i++){
		if((a*i)%b == 0){
			LCM = a*i;
			break;
		}
	}
	printf("%d", LCM);
}

