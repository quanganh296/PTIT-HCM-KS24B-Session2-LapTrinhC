#include <iostream>
#include<iomanip>
#include<math.h> 
using namespace std;
int main()
{
int a=7,b=9;

printf("a =%d va b=%d  \n",a,b ) ;
int tong=0,hieu=0,tich=0,thuong=0; 
tong+=a+b;
tich+=a*b;
hieu+=a-b;
thuong+=a/b;  
printf("tong 2 so là: %d \n",tong);   
printf("tich 2 so là : %d \n", tich);      
printf("hieu 2 so là: %d \n",hieu);
printf("thuong 2 so là: %d \n",thuong);


	return 0;
}
