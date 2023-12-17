#include<stdio.h>

int main(){
	int besar;
	scanf("%d", &besar);
	besar *= besar;
	
		int hitam, putih, tumpuk = 0;
		scanf("%d %d", &hitam, &putih);
		
		if(hitam == putih){
			int total;
			total = besar / 2;
			total = total - hitam;
			printf("%d %d", total, tumpuk);
		} else if (hitam < putih){
			int total;
			tumpuk = putih - hitam;
			total = besar / 2;
			total = total - hitam;
			printf("%d %d", total, tumpuk);
		} else if (hitam > putih){
			int total;
			tumpuk = hitam - putih;
			total = besar / 2;
			total = total - putih;
			printf("%d %d", total, tumpuk);
		}
}
