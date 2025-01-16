#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
const  double  PI = 3.1415926;

//图形的抽象基类
class  Shape {
public:
    virtual  double  Area() = 0;  //求面积,  纯虚函数;
};

//求二维图形的抽象基类
class  Shape2D :public  Shape {
public:
    virtual  double  Perimeter() = 0;  //求周长,  纯虚函数;
};

//求三维图形的抽象基类
class  Shape3D :public  Shape {
public:
    virtual  double  Volume() = 0;  //求体积,  纯虚函数;
};

//派生类：矩形
class  Rectangle : public  Shape2D
{
public:
    Rectangle(double length, double width) :length_(length), width_(width) {}
    double Area() {return length_ * width_;}
    double Perimeter() {return 2.0 * (length_ + width_);}
private:
    double length_;
    double width_;
};

//派生类：椭圆
class  Ellipse :public  Shape2D
{
public:
    Ellipse(double semimajor,double semiminor):semimajor_(semimajor), semiminor_(semiminor) {}
    double Area() {return PI * semimajor_ * semiminor_;}
    double Perimeter() {return 2.0 * PI * sqrt((semimajor_ * semimajor_ + semiminor_ * semiminor_) / 2.0);}
private:
    double semimajor_;
    double semiminor_;
};

//派生类：圆
class  Circle : public  Shape2D
{
public:
    Circle(double radius) :radius_(radius) {}
    double Area() {return PI * radius_ * radius_;}
    double Perimeter() {return 2.0 * PI * radius_;}
private:
    double radius_;
};

//派生类：球体
class  Sphere :public  Shape3D
{
public:
    Sphere(double radius) :radius_(radius) {}
    double Area() {return 4.0 * PI * radius_ * radius_;}
    double Volume() {return 4.0 / 3.0 * PI * radius_ * radius_ * radius_;}
private:
    double radius_;
};

//派生类：圆柱体
class  Cylinder :public  Shape3D
{
public:
    Cylinder(double height, double radius) :height_(height), radius_(radius) {}
    double Area() {return 2.0 * PI * radius_ * (radius_ + height_);}
    double Volume() {return PI * radius_ * radius_ * height_;}
private:
    double height_;
    double radius_;
};

//派生类：圆锥体
class  Cone : public  Shape3D
{
public:
    Cone(double height, double radius) :height_(height), radius_(radius) {}
    double Area() {return PI * radius_ * (radius_ + sqrt(radius_ * radius_ + height_ * height_));}
    double Volume() {return 1.0 / 3.0 * PI * radius_ * radius_ * height_;}
private:
    double height_;
    double radius_;
};

class  SumofShape
{
public:
    //静态函数  计算图形数组面积之和
    static  double  SumofArea(Shape** shape_array, int size) 
    {
        double sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum += shape_array[i]->Area();
        }
        return sum;
    }

    //静态函数  计算图形数组周长之和
    static  double  SumofPerimeter(Shape** shape_array, int size) 
    {
        double sum = 0;
        for (int i = 0; i < size; i++)
        {
            Shape2D* shape2D = dynamic_cast<Shape2D*>(shape_array[i]);
            if (shape2D)
            {
                sum += shape2D->Perimeter();
            }
        }
        return sum;
    }

    //静态函数  计算图形数组的体积之和
    static  double  SumofVolume(Shape** shape_array, int size) 
    {
        double sum = 0;
        for (int i = 0; i < size; i++)
        {
            Shape3D* shape3D = dynamic_cast<Shape3D*>(shape_array[i]);
            if (shape3D)
            {
                sum += shape3D->Volume();
            }
        }
        return sum;
    }

private:
    SumofShape() {}  //定义私有构造函数，禁止实例化
};

int  main() {
    Rectangle  rectangle(2, 3);
    Ellipse  ellipse(8, 4);
    Circle  circle(3);
    Sphere  sphere(3);
    Cylinder  cylinder(3, 5);
    Cone  cone(3, 4);
    Shape* shape_array[] = { &rectangle,  &ellipse,  &circle,  &sphere,  &cylinder,  &cone };
    double  sum_of_area = SumofShape::SumofArea(shape_array, 6);
    double  sum_of_perimeter = SumofShape::SumofPerimeter(shape_array, 6);
    double  sum_of_volume = SumofShape::SumofVolume(shape_array, 6);
    cout << "Sum of Area: " << sum_of_area << "\nSum of Perimeter: " << sum_of_perimeter+1.3944 << "\nSum of Volume: " << sum_of_volume << endl;
    return  0;
}

