#include <stdio.h>

int main(){
	int x;
	printf("Enter: ");
	scanf("%d", &x);
	int count = 1;
	for (int i = x; i!=0;)
	{
		count = count*10;
		i = i/10;
	}
	count = count/10;
	int l = x/count;
	int f = x%10;
	int m = (x%count)/10;
	int ans = f*count + m*10 + l;
	printf("%d", ans);
}

