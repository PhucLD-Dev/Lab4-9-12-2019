#include<stdio.h>
int main()
{
	int i;
	float S;
	S = 0;
	for(i = 0; i <= 99; i++)
	{
		S = S +((2 * i) + 1);
	}
	printf("\nTong 100 so le >0 dau tien la: %f", S);
	return 0;
}
