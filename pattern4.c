#include<stdio.h>
/*
5
54
543
5432
54321
*/

main()
{
	int R,C;
	
	for(R=5;R>=1;R--)
	{
		for(C=5;C>=R;C--)
		{
			printf("%d",C);
		}
		printf("\n");
	}
}
