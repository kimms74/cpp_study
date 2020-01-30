#include <iostream>

using namespace std;

int main()
{
    //int *ptr = nullptr;
    //int **ptrptr = nullptr;

    //int value = 5;

    //ptr = &value;
    //ptrptr = &ptr;

    //cout << ptr << " " << *ptr << " " << &ptr << endl;
    //cout << ptrptr << " " << *ptrptr << " " << &ptrptr << endl;
    //cout << **ptrptr << endl;

    //int ***ptr, ****ptr;

    const int row = 3;
    const int col = 5;

    const int s2da[row][col] =
    {
    {1, 2, 3, 4, 5},
    {6, 7, 8 ,9, 10},
    {11, 12, 13, 14, 15}
    };

    //int *r1 = new int[col] {1, 2, 3, 4, 5};       
    //int *r2 = new int[col] {6, 7, 8, 9, 10};
    //int *r3 = new int[col] {11, 12, 13, 14, 15};

    //int **rows = new int *[row] {r1, r2, r3};     //int pointer의 array이를 만든 것

    //for (int r = 0; r < row; ++r)
    //{
    //    for (int c = 0; c < col; ++c)
    //        cout << rows[r][c] << " ";
    //    cout << endl;
    //}

    


    //int **matrix = new int *[row];

    //for (int r = 0; r < row; ++r)
    //    matrix[r] = new int[col];   // int array가 들어가야하므로

    //for (int r = 0; r < row; ++r)       //임의로 값 대입을 위해 짠 것(보통은 데이터를 가져다 쓴다)
    //    for (int c = 0; c < col; ++c)
    //        matrix[r][c] = s2da[r][c];
    //
    ////print all elements
    //for (int r = 0; r < row; ++r)
    //{
    //    for (int c = 0; c < col; ++c)
    //        cout << matrix[r][c] << " ";
    //    cout << endl;
    //}

    ////delete
    //for (int r = 0; r < row; ++r)
    //    delete[] matrix[r];

    //delete[] matrix;




    //2중 포인터 안쓰고 1차원 array로 2차원 array 만드는 법

    int *matrix = new int[row * col];

    for (int r = 0; r < row; ++r)
        for (int c = 0; c < col; ++c)
            matrix[c + col * r] = s2da[r][c];

    //print all elements
    for (int r = 0; r < row; ++r)
    {
        for (int c = 0; c < col; ++c)
            cout << matrix[c + col * r] << " ";
        cout << endl;
    }


    return 0;
}
