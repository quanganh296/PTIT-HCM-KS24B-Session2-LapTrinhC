#include <iostream>
#include<iomanip>
#include<math.h> 
using namespace std;
int main()
{
int a;
float C=0,S=0; 
printf("Ban hay nhap vao canh a : ") ;
scanf("%d",&a); 
 
 C+=4*a;
 S+=a*a; 
printf("Chu vi hinh vuong là: %.2f \n ",C);   
printf("Dien tich hinh vuong là: %.2f \n", S); 
	return 0;
}
