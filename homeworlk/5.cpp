#include <iostream>
#include <iomanip>

using namespace std;
class Time
{
private:
    int hour;
    int minute;
    int second;
 
public:
    Time(int h = 0, int m = 0, int s = 0) : hour(h), minute(m), second(s){};
    Time(const Time &other) : hour(other.hour), minute(other.minute), second(other.second){};
    friend istream &operator>>(istream &input, Time &other)
    {
        input >> other.hour >> other.minute >> other.second;
        return input;
    }
    friend ostream &operator<<(ostream &output, const Time &other)
    {
        output << setw(2) << setfill('0') << other.hour << ":" << setw(2) << setfill('0') << other.minute << ":" << setw(2) << setfill('0') << other.second << endl;
        return output;
    }
    const Time operator++(int)
    {
        Time tmp(*this);
        int x = hour * 3600 + minute * 60 + second;
        x++;
        hour = x / 3600;
        x %= 3600;
        minute = x / 60;
        second = x % 60;
        return tmp;
    }
    const Time operator--(int)
    {
        Time tmp(*this);
        int x = hour * 3600 + minute * 60 + second;
        x--;
        hour = x / 3600;
        x %= 3600;
        minute = x / 60;
        second = x % 60;
        return tmp;
    }
    Time operator+=(const Time &other)
    {
        second += other.second;
        minute += other.minute;
        hour += other.hour;
        if (second >= 60)
        {
            minute += second / 60;
            second %= 60;
        }
        if (minute >= 60)
        {
            hour += minute / 60;
            minute %= 60;
        }
        if (hour >= 24)
        {
            hour %= 24;
        }
        return *this;
    }
    Time operator-=(const Time &other)
    {
        if(second<other.second)
        {
            second += 60;
            second -= other.second;
            minute--;
        }
        else
        {
            second -= other.second;
        }
        if(minute<other.minute)
        {
            minute += 60;
            minute -= other.minute;
            hour--;
        }
        else
        {
            minute -= other.minute;
        }
        if(hour<other.hour)
        {
            hour += 24;
            hour -= other.hour;
        }
        else
        {
            hour -= other.hour;
        }      
       
        return *this;
    }
    Time& operator++()
    {
        int x = hour * 3600 + minute * 60 + second;
        x++;
        hour = x / 3600;
        x %= 3600;
        minute = x / 60;
        second = x % 60;
        return *this;
    }
    Time& operator--()
    {
        int x = hour * 3600 + minute * 60 + second;
        x--;
        hour = x / 3600;
        x %= 3600;
        minute = x / 60;
        second = x % 60;
        return *this;
    }
};
 
int main()
{
    Time t1, t2;
    cin >> t1;
    cin >> t2;
    cout << (t1 += (t2++));
    cout << (t1 -= t2);
    cout << ++t2;
    cout << (t2 += (t1--));
    cout << --t1;
    cout << (t2-=t1);
}
