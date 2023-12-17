#include<stdio.h>
#include<string.h>
#include<stdbool.h>
long long total = 0;
long long a = 0;

typedef struct{
	char nama[100];
	int harga;
	int stock;
	bool status;
}makan;

makan apa[1000001];

void REMOVE(int a, makan apa[]){
	if(apa[a].status == false){
		printf("Menu does not exist\n");
	} else {
	apa[a].status = false;
	printf("Menu removed\n");
}
}

void INFO(int a, makan apa[]){
	if (apa[a].status == 0){
		printf("Menu does not exist\n");
	} else {
		printf("#%d ", a);
		printf("%s", apa[a].nama);
		printf("\n");
		printf("Price : Rp");
		printf("%d", apa[a].harga);
		printf("\n");
		printf("Stock : ");
		printf("%d", apa[a].stock);
		printf("x\n");
	}
	
}

void ORDER(int a, int b, makan apa[]){
	if (apa[a].status == 0){
		printf("Menu does not exist\n");
	} else if( b == 0){
		printf("So you want to order or what\n");
	} else if ( b > apa[a].stock){
		printf("Apologize, the stock is not enough\n");
	}else {
	int c = apa[a].harga * b;
	printf("Ordered %dx %s for Rp%d\n", b, apa[a].nama, c);
	apa[a].stock = apa[a].stock - b;
	total = total + c;
}
}

int main(){
	
	while(1){
		char input[100];
		scanf("%s", input);
		
		if(strcmp(input, "CLOSE") == 0){
			printf("Earnings: Rp%lld\n", total);
			printf("Informatics canteen is closing... thanks for the visit!");
			break;
		} else if (strcmp(input, "ADD") == 0) {
			int stock;
			int harga;
			char makanan[65];
			
			scanf("%lld", &a);
			scanf("\n%[^\n]%*c", makanan);
			scanf("%d", &harga);
			scanf("%d", &stock);
			
			if(apa[a].status == 1){
				printf("Menu is already exists\n");
			} else {
			strcpy(apa[a].nama, makanan);
			apa[a].harga = harga;
			apa[a].stock = stock;
			printf("Menu added\n");
			apa[a].status = true;
		}
		} else if (strcmp(input, "REMOVE") == 0){
			scanf("%lld", &a);
			REMOVE(a, apa);
		} else if(strcmp(input, "INFO") == 0){
			scanf("%lld", &a);
			INFO(a, apa);
		} else if(strcmp(input, "ORDER") == 0){
			int b;
			scanf("%lld %d", &a, &b);
			ORDER(a, b, apa);
		}
	}
	
}
