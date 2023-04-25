#include<stdio.h>

main()
{
	int R,C;
	
	for(R=5;R>=1;R--)
	{
		for(C=R;C<=5;C++)
		{
			printf("%d",C);
		}
		printf("\n");
	}
}
