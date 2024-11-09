//类中的   默认和普通构造函数   拷贝和移动构造函数




#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Rect
{private:
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

    
    Rect()
    {
        this->width = 0;
        this->height = 0;
        cout<<"rect的无参数构造函数被调用"<<endl;
    }
    
    
    Rect(int width, int height)
    {
        this->width = 5;
        this->height = 10;
        cout<<"rect的有参数构造函数被调用"<<endl;
    }
    
    Rect(const Rect& r)
    {
        this->width = r.width;
        this->height = r.height;
        cout<<"rect的拷贝构造函数被调用"<<endl;
    }

    Rect(Rect&& r)
    {
        this->width = r.width;
        this->height = r.height;

        cout<<"移动构造"<<endl;
    }
    
    void setWidth(int width)
    {
        this->width = width;
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


    void print_area(Rect r1, Rect r2)
    {
        cout << "Area of r1: " << r1.area() << endl;
        cout << "Area of r2: " << r2.area() << endl;
        cout << "Perimeter of r1: " << r1.per() << endl;
        cout << "Perimeter of r2: " << r2.per() << endl;
    }
    
    Rect create_rect()
    {
        Rect rect(3,4);
        return rect;
    }
    
    int main()
    {
        Rect r (5,10);
        Rect r1=create_rect();
        Rect r2(std::move(r1));//or Rect r2=r1//拷贝1
        
        cout << r2.getHeight() << endl;
        print_area(r1,r2);//拷贝2
        cout<<r1.area()<<endl;


       return 0;
    }



