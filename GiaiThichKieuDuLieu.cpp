#include <stdio.h>
int a=100000; // khai bao bien kieu so nguyen,chua gia tri lon hon hoac nho hon kieu short
char b='H';// khai bao bien kieu ki tu
long c= 900000000;// khai bao bien kieu so nguyen,chua gia tri lon hon hoac nho hon kieu int
float d= 3.14;// khai bao bien kieu so thuc
short e= 100;//khai bao bien kieu so nguyen,chua gia tri tu -32768 den 32767
int main() {
	printf("int: %d \n",a);
	printf("char: %c \n",b);
	printf("long: %ld \n",c);
	printf("float: %.2f \n",d);
	printf("short: %d",e);
	return 0;
}
