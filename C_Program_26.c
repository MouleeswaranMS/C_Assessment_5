#include <stdio.h>

int main(){
	int max;
	for(int i=10000; (i%9)+(i%7)!=0; --i)
	{
		max=i;
	}
	printf("%d", max-1);
}

