#include <string.h>
#include <stdio.h>

void ft_bzero(void *s, size_t n);

int main()
{
	int array [] = { 54, 85, 20, 63, 21 };
    size_t size = sizeof( int ) * 5;
    int length;

    /* Display the initial values */
    for( length=0; length<5; length++) {
        printf( "%d ", array[ length ] );
    }
    printf( "\n" );

	/* Reset the memory bloc */
    ft_bzero(array, size);

	/* Display the new values */
    for( length=0; length<5; length++) {
        printf( "%d ", array[ length ] );
    }
    printf( "\n" );
    
    return 0;
}
