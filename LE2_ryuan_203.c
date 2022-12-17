#include<stdio.h>
#define SIZE 100
#define pi 3.1415927
#include<math.h>

int main()
{
	char inBuf[SIZE];
	float radius, volume;
	printf("\tEnter the Radius: ");
	fgets(inBuf,SIZE,stdin);
	sscanf(inBuf,"%f",&radius);

	volume = 4 * pi * (pow(radius,3)) / 3;
	printf("\tThe volume is: %.3g\n",volume);
	
	return 0;
}



