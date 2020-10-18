#include <iostream>
#include <string>

using namespace std;

int main()
{
	int cases, i, j, range;
	string grid;
	bool safe;

	cin >> cases;
	cin.ignore( );

	while ( cases )
	{
		getline( cin, grid );
		safe = true;

		for ( i = 0; i < int( grid.size( ) ) && safe; ++i )
		{
			if ( grid[ i ] != '.' && grid[ i ] != 'x' )
			{
				// check right side
				range = int( grid[ i ] ) - 48;
				j = i + 1;
				while ( j < int( grid.size( ) ) && j <= i + range && safe )
				{
					if ( grid[ j ] != '.' )
					{
						cout << "unsafe" << endl;
						safe = false;
					}

					else
					{
						grid[ j ] = 'x'; // indicates space unsafe
						++j;
					}
				}

				// check left side
				range = int( grid[ i ] ) - 48;
				j = i - 1;
				while ( j >= 0 && j >= i - range && safe )
				{
					if ( grid[ j ] != '.' )
					{
						cout << "unsafe" << endl;
						safe = false;
					}

					else
					{
						grid[ j ] = 'x'; // indicates space unsafe
						--j;
					}
				}				
			}
		}

		if ( safe )
		{
			cout << "safe" << endl;
		}

		--cases;
	}

	return 0;
}