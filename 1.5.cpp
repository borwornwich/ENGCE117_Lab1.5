#include <stdio.h>

void GetMatrix( int **value, int *row, int *col ) ;

int main() {
	int *data, m, n ;
	GetMatrix( &data, &m, &n ) ;
	return 0 ;
}//end function

void GetMatrix( int **value, int *row, int *col ) {
	
	printf( "Add row : " ) ;
	scanf( "%d", row ) ;
	printf( "Add col : " ) ;
	scanf( "%d", col ) ;

	*value = new int[*row * *col] ;
	
	printf( "Add Data In Array.\n" ) ;
	for( int i = 0 ; i < *row ; i++ ) {
		for( int j = 0 ; j < *col ; j++ ){
			printf( "Data[ %d ][ %d ] = ", i, j ) ;
			scanf( "%d", &( *value )[ i * *col + j ] ) ;
		}
	}
	printf( "All Data" ) ;
	for( int i = 0 ; i < *row ; i++ ) {
		for( int j = 0 ; j < *col ; j++ ){
			printf( "[ %d ][ %d ] = %d\n", i, j, (*value)[i * *col + j] ) ;
		}
	}
}

