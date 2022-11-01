/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    
    // სიმბოლო
    char symbol;
    symbol = 'T';
    cout << symbol << endl;
    //მთელი რიცხვი
    int number;
    number = 100;
    cout << number << endl;
    // ათწილადი
    float x = 10.10;
    double y = 50.23;
    cout << x << endl;
    cout << y << endl;
    // მასივი
    int array [5] = {5, 10, 15, 20, 30};
    cout << array[0] + array[1] + array[2] + array[3] + array[4] << endl;
    cout << (array[0] + array[1] + array[2] + array[3] + array[4]) / 5 << endl;
    
    return 0;
}
