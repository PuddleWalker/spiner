#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<vector<int>> table(9, vector<int>(9));
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			table[i][j] = (i + 1) * (j + 1);
		}
	}
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cout << table[i][j] << "\t";
		}
		cout << endl << endl;
	}
}