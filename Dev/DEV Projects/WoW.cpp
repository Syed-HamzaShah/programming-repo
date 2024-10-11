#include <stdio.h>
#include <string.h>
	
int main()
{
char a[100];
int etc , digits , vowels , space;
etc = digits = vowels = space = 0;

	gets(a);

	puts(a);
	
	strlwr(a);

	for ( int i = 0 ; a[i] != '\0' ; i++)
	{
		if ( a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
		vowels ++;
	
	
	else	if (( a[i] >= 'a' && a[i] <= 'z'))
		etc ++;
	
	
	else	if ( a[i] == ' ')
		space ++;
	
	
	else	if ( a[i] >= 0 && a[i] <= 9)
		digits ++;
}
	
	printf("Vowels : %d\n",vowels);
	printf("Digits : %d\n",digits);
	printf("Space : %d\n",space);
	printf("Consonant : %d\n",etc);

	
	return 0;
}
