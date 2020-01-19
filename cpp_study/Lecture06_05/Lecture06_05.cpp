#include <iostream>

using namespace std;

int main()
{
    const int num_rows = 3;
    const int num_columns = 5;

    // row-major <-> column-major
    //int array[num_rows][num_columns]
    //{
    //    {1, 2, 3, 4, 5},        //row 0
    //    {6, 7, 8, 9, 10},       //row 1
    //    {11, 12, 13, 14, 15}    //row 2
    //};

    //int array[][num_columns]    //num_rows 생략가능, num_columns 생략 안됨
    //{
    //    {1, 2, },        //row 0
    //    {6, 7, 8, 9, 10},       //row 1
    //    {11, 12, 13, 14, 15}    //row 2
    //};

    //int array[num_rows][num_columns]{ 0 }; // 전부 0

    int array[5][4][3];


    for (int row = 0; row < num_rows; ++row)
    {
        for (int col = 0; col < num_columns; ++col)
        {
            cout << array[row][col] << '\t';
            //cout << (int)&array[row][col] << '\t'; // 메모리상에선 1차원으로 배열됨
        }

        cout << endl;
    }



    //array1(a,b) array2(b,c) -> (a,c)          // 행렬 곱 나타내기
    //    for (i = 0; i < a; ++i)
    //    {
    //        for (j = 0, j < c, ++j)
    //        {
    //            for (k = 0; k < b, ++k)
    //            {
    //                array3[i][j] = array1[i][k]*array2[k][j]
    //            }
    //        }
    //        cout << endl;
    //    }













    return 0;
}
