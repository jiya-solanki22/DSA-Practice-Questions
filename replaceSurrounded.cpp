// A C++ program to replace all 'O's with 'X''s if surrounded by 'X'
#include<iostream>
using namespace std;

// Size of given matrix is M X N
#define R 6
#define C 6


// A recursive function to replace previous value 'prevV' at '(x, y)'
// and all surrounding values of (x, y) with new value 'newV'.
void floodFillUtil(char mat[][C], int x, int y, char prevV, char newV)
{
	// Base cases
	if (x < 0 || x >= R || y < 0 || y >= R)
		return;
	if (mat[x][y] != prevV)
		return;

	// Replace the color at (x, y)
	mat[x][y] = newV;

	// Recur for north, east, south and west
	floodFillUtil(mat, x+1, y, prevV, newV);
	floodFillUtil(mat, x-1, y, prevV, newV);
	floodFillUtil(mat, x, y+1, prevV, newV);
	floodFillUtil(mat, x, y-1, prevV, newV);
}

// Returns size of maximum size subsquare matrix
// surrounded by 'X'
int replaceSurrounded(char mat[][C])
{
// Step 1: Replace all 'O' with '-'
for (int i=0; i<R; i++)
	for (int j=0; j<C; j++)
		if (mat[i][j] == 'O')
			mat[i][j] = '-';

// Call floodFill for all '-' lying on edges
for (int i=0; i<R; i++) // Left side
	if (mat[i][0] == '-')
		floodFillUtil(mat, i, 0, '-', 'O');
for (int i=0; i<R; i++) // Right side
	if (mat[i][C-1] == '-')
		floodFillUtil(mat, i, C-1, '-', 'O');
for (int i=0; i<C; i++) // Top side
	if (mat[0][i] == '-')
		floodFillUtil(mat, 0, i, '-', 'O');
for (int i=0; i<C; i++) // Bottom side
	if (mat[R-1][i] == '-')
		floodFillUtil(mat, R-1, i, '-', 'O');

// Step 3: Replace all '-' with 'X'
for (int i=0; i<R; i++)
	for (int j=0; j<C; j++)
		if (mat[i][j] == '-')
			mat[i][j] = 'X';

}

// Driver program to test above function
int main()
{
	char mat[][C] = {{'X', 'O', 'X', 'O', 'X', 'X'},
					{'X', 'O', 'X', 'X', 'O', 'X'},
					{'X', 'X', 'X', 'O', 'X', 'X'},
					{'O', 'X', 'X', 'X', 'X', 'X'},
					{'X', 'X', 'X', 'O', 'X', 'O'},
					{'O', 'O', 'X', 'O', 'O', 'O'},
					};
	replaceSurrounded(mat);


	for (int i=0; i<R; i++)
	{
	for (int j=0; j<C; j++)
		cout << mat[i][j] << " ";
	cout << endl;
	}
	return 0;
}

