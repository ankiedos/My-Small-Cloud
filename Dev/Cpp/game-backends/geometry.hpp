class Shape
{
    virtual long double area() = 0;
    virtual long double perimeter() = 0;
};
struct Point
{
    long double x, y;
    Point() = default;
    explicit Point(const long double& x_, const long double& y_) : x{x_}, y{y_} {}
    explicit Point(const Point& other) : x{other.x}, y{other.y} {}
    explicit Point(Point&& other) : x{std::move(other.x)}, y{std::move(other.y)} {}
    ~Point() = default;
};
class LineSegment
{
    Point p1, p2;
public:
    LineSegment() = default;
    explicit LineSegment(const Point& p, const Point& q) : p1{p}, p2{q} {}
    explicit LineSegment(const LineSegment& other) : p1{other.p1}, p2{other.p2} {}
    explicit LineSegment(LineSegment&& other) : p1{std::move(other.p1)}, p2{std::move(other.p2)} {}
    explicit LineSement(const std::array<Point, 2>& pts) : p1{pts[0]}, p2{pts[1]} {}
    explicit LineSegment(std::array<Point, 2>&& pts) : p1{std::move(pts[0])}, p2{std::move(pts[1])} {}
    explicit LineSegment(const std::pair<Point, Point>& pts) : p1{pts.first}, p2{pts.second} {}
    explicit LineSegment(std::pair<Point, Point>&& pts) : p1{std::move(pts.first)}, p2{std::move(pts.second)} {}
    explicit LineSegment(const std::vector<Point>& pts) : p1{pts[0]}, p2{pts[1]} {}
    explicit LineSegment(std::vector<Point>&& pts) : p1{std::move(pts[0])}, p2{std::move(pts[1])} {}
    ~LineSegment() = default;
    long souble length() { return std::sqrt(std::pow(std::abs(p1.x - p2.x), 2) + std::pow(std::abs(p1.y - p2.y), 2)); }
    LineSegment operator +(const LineSegment& ls1, const LineSegment& ls2) { return LineSegment(
};
class Circle : Shape
{
    Point center;
    long double r;
public:
    long double area() override { return Pi * r * r; }
    long double perimeter() override { return 2 * Pi * r; }
    long double radius() { return r; }
    bool HasInternalPoint(const Point& p)
    {
        return center.x - r < p.x && p.x < center.x + r &&
        center.y - r < p.y && p.y < center.y + r;
    }
    bool HasEdgePoint(const Point& p)
    {
        return std::sqrt(std::pow(std::abs(center.x - p.x), 2) + std::pow(std::abs(center.y - p.y), 2)) == r;
    }
    Circle() = default;
    Circle(const Point& c, const long double& rad) : center{c}, r{rad} {}
    Circle(const Circle& other) : r{other.r}, center{other.center} {}
    Circle(Circle&& other) : r{std::move(other.r)}, center{std::move(other.center)} {}
    ~Circle() = default;
};
class Trapesoid : Shape
{
    Triangle t1, t2, t3, t4;
    long double area() override { return t1.area() + t2.area() + t3.area() + t4.area(); }
    long double perimeter() override
    {
        std::vector<Point> points{};
        std::array<std::size_t, 4> erase_buf{};
        points.push_back(t1.vertices()); points.push_back(t2.vertices()); points.push_back(t3.vertices()); points.push_back(t4.vertices());
        for(std::size_t i = 0; i < points.size(); i++)
        {
            for(auto j = i + 1; j < points.size(); j++)
            {
                if(points[i] == points[j])
                {
                    for(auto k = j + 1; k < points.size(); k++)
                    {
                        if(points[j] == points[k])
                        {
                            for(auto l = k + 1; l < points.size(); l++))
                            {
                                if(points[k] == points[l])
                                {
                                    erase_buf = {i, j, k, l};
                                    goto end;
                                }
                            }
                        }
                    }
                }
            }
        }
        end:
        //points.erase(erase_buf[0]); points.erase(erase_buf[1]); points.erase(erase_buf[2]);
        LineSegment l1{DropFirst(t1.vertices(), erase_buf[0])}, l2{DropFirst(t2.vertices(), erase_buf[1])}, l3{DropFirst(t3.vertices(), erase_buf[2])}, l4{DropFirst(t4.vertices(), erase_buf[3])};
        LineSegment l5{l1.end(), l2.begin()}, l6{l2.end(), l3.begin()}, l7{l3.end(), l4.begin()}, l8{l4.end(), l1.begin()};
        return l1.length() + l2.length() + l3.length() + l4.length() + l5.length() + l6.length() + l7.length() + l8.length();
    }
    Trapesoid() = default;
    Trapesoid(const Triangle& tr1, const Triangle& tr2, const Triangle& tr3, const Triangle& tr4) : t1{tr1}, t2{tr2}, t3{tr3}, t4{tr4} {}
    Trapesoid(const Trapesoid& other) : t1{other.t1}, t2{other.t2}, t3{other.t3}, t4{other.t4} {}
    Trapesoid(Trapesoid&& other) : t1{std::move(other.t1)}, t2{std::move(other.t2)}, t3{std::move(other.t3)}, t4{std::move(other.t4)} {}
    ~Trapesoid() = default;
};