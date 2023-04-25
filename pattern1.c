#include<stdio.h>

main()
{
	int R,C;
	
	for(R=1;R<=5;R++)
	{
		for(C=1;C<=R;C++)
		{
			printf("%d",C);
		}
		printf("\n");
	}
}
