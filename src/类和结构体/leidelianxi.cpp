//类的练习



#include<iostream>
#include<string>


using namespace std;

class Rect
{
private:
    int width;
    int height;

    public:
    int per()
    {
        return 2 * (width + height);
    }

    int area()
    {
        return width * height;
    }


        void setWidth /*mingchen*/  (int width)
        {
            this->width = width;/*hanshuti*/
        }
        void setHeight(int height)
        {
            this->height = height;
        }
        int getWidth()
        {
            return this->width;
        }
        int getHeight()
        {
            return this->height;
        }
};
int main()
{
    Rect r;
    r.setWidth (6);
    r.setHeight(7);
    

    cout << "Perimeter: " << r.per() << endl;
    cout << "Area: " <<r.area()<< endl;
    cout << "Width: " << r.getWidth() << endl;
    cout << "Height: " << r.getHeight() << endl;

    return 0;
}