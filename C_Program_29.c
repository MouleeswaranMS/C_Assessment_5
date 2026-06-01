#include <stdio.h>

int main(){
	int a,b,c;
	printf("Enter the first number: ");
	scanf("%d",&a);
	printf("Enter the second number: ");
	scanf("%d",&b);
	printf("Enter the third number: ");
	scanf("%d",&c);
	int LCM;
	for(int i=1; ;i++){
		if(((a*i)%b)+((a*i)%c) == 0){
			LCM = a*i;
			break;
		}
	}
	printf("%d", LCM);
}

