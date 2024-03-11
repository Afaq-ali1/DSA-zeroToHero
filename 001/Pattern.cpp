#include <iostream>
using namespace std;
int main()
{
	int numRows;
	cin>>numRows;
for (int i = 0; i < numRows; ++i)                         // O(numRows)
{
    for (int j = 0; j < numRows - i - 1; ++j)           // worst case, it's O(numRows)
    {
        cout << "  "; // This operation is O(1)
    }

    for (int k = 0; k < i + 1; ++k)                           //worst case, O(numRows)
    {
        cout << "* "; 
    }
    cout << endl; 
}
}
