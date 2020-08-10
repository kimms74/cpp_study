#include <iostream>

using namespace std;

int main()
{
    //int *ptr = nullptr;
    //int **ptrptr = nullptr;   //pointer에 대한 pointer인데 원래 변수는 int라는 것

    //int value = 5;

    //ptr = &value;
    //ptrptr = &ptr;

    //cout << ptr << " " << *ptr << " " << &ptr << endl;
    //cout << ptrptr << " " << *ptrptr << " " << &ptrptr << endl;
    //cout << **ptrptr << endl; //*(*ptrptr)로 볼 수 있다, (ptrptr의 주소가 가르키는 값)의 주소가 가르키는 값

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

    //int **rows = new int *[row] {r1, r2, r3};     //int pointer의 array를 만든 것

    //for (int r = 0; r < row; ++r)
    //{
    //    for (int c = 0; c < col; ++c)
    //        cout << rows[r][c] << " ";
    //    cout << endl;
    //}

    


    //int **matrix = new int *[row];

    //for (int r = 0; r < row; ++r)
    //    matrix[r] = new int[col];   // int array가 들어가야하므로 new int를 넣는다

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
    //    delete[] matrix[r];       //matrix[]의 pointer를 먼저 제거한 후 matrix의 pointer를 제거한다

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
