/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class myRectangle {
    private:
        float length, width;
    public:
        float getLength() {
            return length;
        }
        float getWidth() {
            return width;
        }
        void setRectangle(float myLength, float myWidth) {
            length = myLength;
            width = myWidth;
        }
        
};

int main()
{
    float x, y;
    cout << " Enter rectangle length : ";
    cin >> x;
    cout << " Enter rectangle width : ";
    cin >> y;
    myRectangle rectangle;
    rectangle.setRectangle(x, y);
    float myPerimeter = 2 * (rectangle.getLength() + rectangle.getWidth());
    cout << " Rectangle perimeter is : " << myPerimeter;

    return 0;
}
