

#include <iostream>
using namespace std;
void pattern1(int rows, int cols)
{
    cout << "rectangle" << endl;
    // ****
    // ****
    // ****
    // ****
    for (int i = 0; i < rows; i++)
    {
        // cout<<"*";
        for (int j = 0; j < cols; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << "\n\n";
}

void pattern2(int rows, int cols)
{
    // hollow rectangle
    //  ****
    //  *  *
    //  *  *
    //  ****
    cout << "hollow rectangle" << endl;

    for (int i = 0; i <= rows; i++)
    {
        for (int j = 0; j <= cols; j++)
        {
            if (i > 0 && i < rows)
            {
                j == 0 || j == cols ? cout << "*" : cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    cout << "\n\n";
}

void pattern3(int rows, int cols)
{
    // inverted half pyramid
    //  ****
    //  ***
    //  **
    //  *

    cout << "inverted half pyramid" << endl;

    for (int i = rows; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << "\n\n";
}

void pattern4(int rows, int cols)
{
    cout << "rectangle" << endl;
    //    *
    //   **
    //  ***
    // ****
    for (int i = rows; i >= 0; i--)
    {
        for (int j = 1; j <= cols; j++)
        {
            i - j >= 0 ? cout << " " : cout << "*";
        }
        cout << "\n\n";
    }
}

void pattern5(int rows, int cols)
{
    // inverted half pyramid
    //  1
    //  22
    //  333
    //  4444
    //  55555

    cout << "" << endl;

    for (int i = 0; i <= rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
    cout << "\n\n";
}

void pattern6(int rows)
{
    // inverted half pyramid
    //  1
    //  23
    //  456
    //  78910
    //  1112131415

    cout << "" << endl;
    int a = 1;
    for (int i = 0; i <= rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << a;
            a++;
        }
        cout << endl;
    }
    cout << "\n\n";
}

void pattern7(int rows)
{
    cout << "butterfly" << endl;
    // *      *
    // **    **
    // ***  ***
    // ********
    // ********
    // ***  ***
    // **    **
    // *      *
    for (int i = 0; i <= rows; i++)
    {
        for (int j = 0; j <= rows; j++)
        {
            if (i <= rows / 2)
            {
                j <= i || j >= rows - i ? cout << "*" : cout << " ";
            }
            else
            {
                j >= i || j <= rows - i ? cout << "*" : cout << " ";
            }
        }
        cout << "\n\n";
    }
}

void patter8(int rows)
{
    // inverted half pyramid
    //  1234
    //  123
    //  12
    //  1

    cout << "inverted half pyramid with numbers" << endl;

    for (int i = rows; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    cout << "\n\n";
}
void pattern9(int rows)
{
    // inverted half pyramid
    //  1
    //  01
    //  010
    //  10101
    //  0101010101

    cout << "" << endl;
    bool a = true;
    for (int i = 0; i <= rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            a ? cout << 1 : cout << 0;
            a = !a;
        }
        cout << endl;
    }
    cout << "\n\n";
}
void pattern10(int rows)
{
    // inverted half pyramid
    //      *****
    //     *****
    //    *****
    //   *****
    //  *****

    cout << "" << endl;
    for (int i = 0; i <= rows; i++)
    {
        // cout<<(rows-i)*" ";
        for (int j = 0; j <= 2 * rows - i; j++)
        {
            j < rows - i ? cout << " " : cout << "*";
        }
        cout << endl;
    }
    cout << "\n\n";
}

void pattern11(int rows)
{
    //    1
    //   1 2
    //  1 2 3
    // 1 2 3 4
    // 1 2 3 4 5

    cout << "" << endl;
    for (int i = 1; i <= rows; i++)
    {
        cout << string(rows - i, ' ');
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << "\n\n";
}
void pattern12(int rows)
{
    //      1
    //    2 1 2
    //  3 2 1 2 3
    // 4 3 2 1 2 3 4
    //!! incomplete try again

    cout << "" << endl;
    for (int i = 1; i <= rows; i++)
    {
        cout << string(2 * rows - 2 * i, ' ');
        for (int j = 1; j < 2 * i; j++)
        {
            j > i ? cout << j - i << " " : cout << i - j << " ";
        }
        cout << endl;
    }
    cout << "\n\n";
}
void pattern13(int rows)
{
    //  *
    // ***
    //*****
    //*****
    // ***   5-3
    //  *    6-1

    cout << "" << endl;
    for (int i = 1; i <= rows; i++){
            cout << string(rows - i, ' ');    
            for (int j = 1; j < 2 * i; j++)
            {
                cout <<'*';
            }
   
         
        
        cout << endl;}
     for(int i = rows;i>=1;i--){
            cout << string(rows-i, ' ');
            for (int j = 2*i; j > 1; j--)
            {
                cout << '*';
            }cout<<endl;
        }
    cout << "\n\n";
}

// star pattern
//  zig zag pattern

int main()
{
    pattern1(5, 5);
    pattern2(5, 5);
    pattern3(5, 5);
    pattern4(5, 5);
    pattern5(5, 5);
    pattern6(5);
    pattern7(8);
    patter8(8);
    pattern9(8);
    pattern10(4);
    pattern11(5);
    pattern12(5);
    pattern13(3);
}
