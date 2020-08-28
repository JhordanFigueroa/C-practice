#include <stdio.h>

int grid[3][5] = { //Row and Column
	{ 1,   2,   3,   4,   5  },
	{ 6,   7,   8,   9,   10 },
	{ 11,  12,  13,  14,  15 }
};

int main(int argc, char **argv) {
    printf("The number in Row 1 and Column 2 is: %d\n", grid[1][2]); //how to access data in a 2d array
	int row;
	int column;
	for (row = 0; row < 3; row++) {
		printf("--- row %d --- \n", row);
		for (column = 0; column < 5; column++) {
			printf("column[%d], value=%d\n", column, grid[row][column]);
			// uncomment the code below to see how to break out of the inner 'for' loop
			// If I were to put a break here it would break out of the INNER 'for'
			// loop only
			if (column == 2) {
			    break; //Break out of loops if necessary, it's best to have a clear test condition
			}
		}
	}
	return 0;
}
