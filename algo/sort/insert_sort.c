/*
*  Insert sort

*/

#include<stdio.h>

int main()
{
int a[10] = {2,5,3,1,7,9,11,5,6,4};
int i, j, tmp;

printf("before sort:\n");
for(i=0; i<10; i++)
{
	printf("a[%d] = %d\n", i, a[i]);
}

for(i=1; i<10; i++)
{
	if(a[i]<a[i-1])
	{
		tmp = a[i];
		a[i] = a[i-1];
		j = i-1;
		while(j>0)
		{
			if(tmp <a[j-1])
			{
				a[j] = a[j-1];
				j--;

			}
			else
			{
				a[j] = tmp;
				break;
			}
		}

		
	}
}

printf("after sort:\n");
for(i=0; i<10; i++)
{
	printf("a[%d] = %d\n", i, a[i]);
}

return 0;
}
