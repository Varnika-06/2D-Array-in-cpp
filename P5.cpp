//Name: Varnika Maurya
//PRN: 24070123160
//Exp 8
//Program 5
#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> r >> c;
    int a[r][c];
    cout << "Enter the elements of the matrix: " << endl;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "The matrix is: " << endl;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    int b[r][c];
    cout << "Transpose of the matrix is: " << endl;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            b[j][i] = a[i][j];
        }
    }
    for(int i = 0; i < c; i++)
    {
        for(int j = 0; j < r; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
PS C:\Users\DELL\Desktop\C++> g++ P5.cpp -o P5
PS C:\Users\DELL\Desktop\C++> .\P5.exe        
Enter the number of rows and columns of the matrix: 3
3
Enter the elements of the matrix: 
9
8
4
5
6
7
1
2
5
The matrix is: 
9 8 4
5 6 7
1 2 5 
Transpose of the matrix is:
9 5 1
8 6 2
4 7 5
  */
