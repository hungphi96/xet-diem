#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
	int buoinghi, tongbuoi, lythuyet, thuchanh, baitap;
	printf("nhap tong buoi hoc: ");
	scanf("%d", &tongbuoi);
	printf("nhap so buoi nghi: ");
	scanf("%d", &buoinghi);
	if(buoinghi<=tongbuoi/4)
	{
		printf("nhap so diem ly thuyet: ");
		scanf("%d", &lythuyet);
		printf("nhap so diem thuc hanh: ");
		scanf("%d", &thuchanh);
		printf("nhap so diem bai tap: ");
		scanf("%d", &baitap);
		if(lythuyet<8)
		{
			printf("ban phai thi lai ly thuyet\n");
		}
		else
		{
			printf("ban da thi do ly thuyet\n");
		}
		if(thuchanh<6)
		{
			printf("ban phai thi lai thuc hanh\n");
		}
		else
		{
			printf("ban da thi do thuc hanh\n");
		}
		if(baitap<4)
		{
			printf("ban phai thi lai bai tap\n");
		}
		else
		{
			printf("ban da thi do bai tap\n");
		}		
	}
	else
	{
		printf("ban phai hoc lai");
	}	
	return 0;
}
