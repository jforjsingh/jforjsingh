
#include<stdio.h>
int  main()
{
    int i , j ;
    for( i = 1; i<=5; i++)
    {
       for (j=5; j<=i; j++)
      {
    printf("#\t");
    }
    printf("\n");
    }
    for (int i=4;i>=1;i--)
    {
    	for (int j=1;j<=1;j++)
		{
			printf ("#\t");
    		
		}
		printf ("\n");
	
	}
    return 0;
    }


