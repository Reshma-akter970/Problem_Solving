#include <stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	int digit=a/1000;
	if (digit%2==0)
		printf("EVEN\n");
	else
		printf("ODD\n");
		
	return 0;
		
}
