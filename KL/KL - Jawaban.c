#include <stdio.h>

int main (){
	int x, y, n;
	
	scanf("%d", &n);
	
	if (n == 1){
		scanf("%d %d", &x, &y);
		printf("%d", x * y);
	} else {
		scanf("%d %d", &x, &y);
		printf("%d", x / y);
	}
}
