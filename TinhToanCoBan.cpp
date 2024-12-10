#include <iostream>
#include<iomanip>
#include<math.h> 
using namespace std;
int main()
{
int a,b;
printf("Ban hay nhap bien a: ") ;
scanf("%d",&a); 
printf("Ban hay nhap bien b: ") ;
scanf("%d",&b);

printf("a =%d va b=%d  \n",a,b ) ;
int tong=0,hieu=0,tich=0,thuong=0; 
tong+=a+b;
tich+=a*b;
hieu+=a-b;
thuong+=a/b; 
printf("tong 2 so là: %d \n",tong); 
printf("tich 2 so là: %d \n",tich);
printf("hieu 2 so là: %d \n",hieu);
printf("thuong 2 so là: %.3f \n",thuong);


	return 0;
}
