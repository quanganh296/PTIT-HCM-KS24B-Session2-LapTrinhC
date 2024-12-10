#include <iostream>
#include<iomanip>
#include<math.h> 
using namespace std;
int main()
{
int a,b;
float C=0,S=0; 
printf("Ban hay nhap vao 2 canh a và b : ") ;
scanf("%d",&a); 
scanf("%d",&b);
if (a>b) {
printf(" Chieu dai là: a =%d  \n",a ) ;
printf(" Chieu rong là: b =%d  \n",b );
}
else {
	printf(" Chieu dai là: b =%d  \n",b);
printf(" Chieu rong là: a =%d  \n",a );
} 

 C+=2*(a+b);
 S+=a*b; 
printf("Chu vi hinh chu nhat là: %.2f \n ",C);   
printf("Dien tich hinh chu nhat là: %.2f \n", S); 
	return 0;
}
