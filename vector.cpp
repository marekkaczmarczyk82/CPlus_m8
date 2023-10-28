#include <iostream>
#include <vector>

		int main()
		{
			std::vector < int > wektor;

				for( int i = 0; i < 10; ++i )
				{
					std::cout << "Rozmiar--->" << wektor.size() << "\tPojemnosc--->" << wektor.capacity() << "\n";

					wektor.push_back(i);

				}

				for( int i = 1; i < 10; i *= 2 )
					wektor.resize( i, i );
				for( int i = 0; i < wektor.size(); ++ i )
					std::cout << wektor[ i ] << ' '; 

				


		}
