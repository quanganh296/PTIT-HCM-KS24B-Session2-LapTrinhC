#include <iostream>
#include<iomanip>
#include<math.h> 
using namespace std;
int main()
{
int a,b;
float C=0,S=0; 
printf("Ban hay nhap vao 2 canh a v� b : ") ;
scanf("%d",&a); 
scanf("%d",&b);
if (a>b) {
printf(" Chieu dai l�: a =%d  \n",a ) ;
printf(" Chieu rong l�: b =%d  \n",b );
}
else {
	printf(" Chieu dai l�: b =%d  \n",b);
printf(" Chieu rong l�: a =%d  \n",a );
} 

 C+=2*(a+b);
 S+=a*b; 
printf("Chu vi hinh chu nhat l�: %.2f \n ",C);   
printf("Dien tich hinh chu nhat l�: %.2f \n", S); 
	return 0;
}
