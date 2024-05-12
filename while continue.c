#include <stdio.h>

main()
{
	int n=10;
	while (n>0)
	{
		printf("%d",n);
		if (n%2==1)
		continue;
		n=n-1;
	}
}
