#include <iostream>
#include<iomanip>
#include<math.h> 
using namespace std;
int main()
{
int r;
float PI=3.14;
float C=0,S=0; 
printf("Ban hay nhap ban kinh r: ") ;
scanf("%d",&r); 
 C+=2*PI*pow(r,2); 
 S+=pow(C,2)/4*PI;
printf("Chu vi hinh tron là: %.2f \n ",C);   
printf("Dien tich hinh trong là: %.2f \n", S); 
	return 0;
}
