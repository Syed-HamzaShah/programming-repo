/*#include <stdio.h>

int sum(int *x, int *y)
{
	int sum;
	sum = *x + *y;
	return sum;
}

int square(int *x)
{
	int sq;
	sq = *x * *x;
	return sq;
}

void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void checker(int *x)
{
	if( *x % 2 == 0)
	printf("The number is Even");
	else
	printf("The number is Odd");
}

int factorial(int x)
{
	int fact = 1;
	for ( x ; x >= 1 ; x --)
	{
			fact = fact * x ;
	}
	return fact;
}

void divide(float x, float y)
{
	if ( y == 0)
	printf("Not possible");
	else
	printf(" Quotent is %f", x/y); 
}

int main ()
{
    /*int n;
	
	printf("Enter the Nth value:");
	scanf("%d",&n);
	
	int a[n];
	printf("Enter Values:\n");
	for ( int i = 0 ; i < n ;  i++)
		scanf("%d",&a[i]);
	
	for ( int i = 0 ; i < n ; i++)
	{
		if ( a[0] > a[i] )
		{
			a [0] = a[i];
		}
	}
	
	printf("Min is %d", a[0]); */
	
	
	
	/*int a[2][3];
	
	printf("Enter values for matrix:\n");
	
	for ( int i = 0; i < 2 ; i ++)
	{
		for ( int j = 0 ; j < 3 ; j ++)
		{
			scanf("%d", &a[i][j]);
		}
	
	}
	
	
	for ( int i = 0; i < 2 ; i ++)
	{
		for ( int j = 0 ; j < 3 ; j ++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
*/	

/*
	int a[3][4] = {{1,2,3,4},{55,6,7,8},{9,10,11,13}};
	
	for ( int i = 0 ; i < 3 ; i++)
	{
		for (int j = 0 ; j < 4 ; j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	int max = 0;
	for ( int i = 0 ; i < 3 ; i++)
	{
		for (int j = 0 ; j < 4 ; j++)
		{
			if ( a[i][j] > max )
			{
				max = a[i][j];
			 } 
		}
	}
	
	printf("Max is %d",max);
*/

	

	/*int a[3][4] = {{1,2,3,4},{55,6,7,8},{9,10,11,13}};
	
	for ( int i = 0; i < 3; i++)
	{
		for (int j = 0 ; j < 4; j++)
		{
			if ( a[i][j] )
			{	
			int temp;
			temp = a[i];
			a[i] = a[j];
			a[j] = temp; 
		}
		}
	}


	for ( int i = 0 ; i < 3 ; i++)
	{
		for (int j = 0 ; j < 4 ; j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}





	return 0;
}
*/



#include <stdio.h>
/*
void sortRowWise(int m[][4], int r, int c) 
{
    int t = 0;
    for (int i = 0; i < r; i++) 
	{
        for (int j = 0; j < c; j++) 
		{
            for (int k = 0; k < c - j - 1; k++) 
			{
                if (m[i][k] > m[i][k + 1]) 
				{
                    t = m[i][k];
                    m[i][k] = m[i][k + 1];
                    m[i][k + 1] = t;
                }
            }
        }
    }
}

int main() {
    int arr[][4] = {
        {8, 5, 7, 2},
        {7, 3, 0, 1},
        {8, 5, 3, 2},
        {9, 4, 2, 1}
    };

    printf("Input Array:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    sortRowWise(arr, 4, 4);

    printf("\nRow-Wise Sorted 2D Array:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/

int main()
{
	/*
	int a[3][4];
		
	for ( int i = 0 ; i < 3 ; i++)
	{
		for (int j = 0 ; j < 4 ; j++)
		{
	        scanf("%d",&a[i][j]);
		}
	}

	int min = a[0][0];
	
	for ( int i = 0 ; i < 3 ; i++)
	{
		for (int j = 0 ; j < 4 ; j++)
		{
		if ( a[i][j] < min )
		min  = a[i][j];
		}
	}
	
	printf("%d",min);
	*/
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
