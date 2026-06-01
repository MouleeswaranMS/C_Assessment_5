#include <stdio.h>

int main(){
	int x;
	printf("Enter :");
	scanf("%d", &x);
	int r = 0;
	for(int i = x; i!=0;)
	{
		r = r*10 + i%10;
		i = i/10;
	}
	printf("The Reverse Value : %d", r);
}

