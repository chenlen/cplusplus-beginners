#include <iostream>

using namespace std;

int main()
{
    int array[5] = { 1, 2, 3, 4, 5 };
    for (int i = 0; i < 5; ++i)
    {
        //cout << array[i] << "\n";
    }

    int array_5d[2][2][2][2][3] = {
        1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 
        11, 12, 13, 14, 15, 16 };

    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            for (int k = 0; k < 2; ++k)
            {
                for (int l = 0; l < 2; ++l)
                {
                    cout << array_5d[i][j][k][l] << " ";
                }
            }
        }
    }
}
