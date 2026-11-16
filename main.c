#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n;
	int kq_1 = 0;
	int kq_2 = 0;
	int kq_3 = 0;
	int tong = 0;
	
	printf("Nhap so kw dien vao day: ");
	scanf("%d", &n);
		
	if(n > 0 && n <= 100)
	{
		kq_1 = n*1000;
		tong = kq_1;
//		printf("KQ la: %d ",tong );		
	}
	else
	{
		if(n > 100 && n <= 200)
		{
			kq_1 = 100 * 1000;
			kq_2 = (n - 100)*1500;
			tong = kq_1 + kq_2;
			printf("KQ la: %d ",tong );
		}
		else
		{
			if(n > 200)
			{
				kq_1 = 100 * 1000;
				kq_2 = 200 * 1500;
				kq_3 = (n - 200)*2500;
				tong = kq_1 + kq_2 + kq_3;
				printf("KQ la: %d ",tong );
			}
			else{
				printf("Loi chuong trinh");
			}
		}
	}
	
	
	
	return 0;
}
