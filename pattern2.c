#include<stdio.h>

main()
{
	int R,C;
	
	for(R=1;R<=5;R++)
	{
		for(C=R;C>=1;C--)
		{
			printf("%d",C);
		}
		printf("\n");
	}
}
