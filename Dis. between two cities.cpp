#include<stdio.h>
int main()
{
	float km,m,f,i,c;
	
	printf("Distance between two cities is :");
	scanf("%f",&km);
	
	m=km*1000;
	printf("Distance in meter is %f\n",m);
	f=km*3280.84;
	
	printf("Distance in feet is %f\n",f);
	i=km*39370.1;
	
	printf("distance in inch is %f\n",i);
	c=km*100000;
	
	printf("Distance in cm is %f\n",c);
	return 0;
	
}
