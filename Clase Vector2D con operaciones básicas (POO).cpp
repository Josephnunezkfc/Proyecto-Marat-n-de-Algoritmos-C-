#include <iostream>
#include <cmath>
using namespace std;
class Vector2D {
public:
    double x, y;
    Vector2D(double _x=0, double _y=0): x(_x), y(_y) {}
    Vector2D sumar(const Vector2D& o) const { return Vector2D(x+o.x, y+o.y); }
    Vector2D restar(const Vector2D& o) const { return Vector2D(x-o.x, y-o.y); }
    double magnitud() const { return sqrt(x*x + y*y); }
};
int main(){
    Vector2D a(3,4), b(1,2);
    Vector2D c = a.sumar(b);
    cout<<c.x<<" "<<c.y<<"\n";
    cout<<a.magnitud()<<"\n";
    return 0;
}
