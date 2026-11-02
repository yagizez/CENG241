#include <iostream>

#define PI 3.14

using namespace std;

class Circle
{
    private:
        float radius;
    public:
        void setRadius(float r)
        {
            radius = r;
        }
        float area(void)
        {
            return (PI * radius * radius);
        }
};

int main(void)
{
    Circle circle;
    circle.setRadius(2);
    cout << "Area of a circle with a radius of 2: " << circle.area() << endl;

    return 0;
}
