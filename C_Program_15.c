#include <stdio.h>

int main(){
	int x;
	printf("Enter: ");
	scanf("%d", &x);
	int count = 1;
	for(int i = x; i!=0;)
	{
		count = count*10;
		i = i/10;
	}
	count = count/10;
	int l = x/count;
	if(l%2==0)
	{
		printf("%d", x);
	}else{
		printf("%d", x-(l*count));
	}
}

