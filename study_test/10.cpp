#include <iostream>
#include <string>
#include <cassert>
#include <cmath>    // ✏️ std::abs
#include <stdexcept> // ✏️ std::invalid_argument
#include "TheHead/liuqichen121.h"

// ────────────────────────────────────────────
// ✏️ TODO: 补全以下类
// ────────────────────────────────────────────

// 1. Rectangle: 矩形，构造时给定宽和高
// invariant: width > 0 && height > 0
class Rectangle {
    // ✏️ 私有成员
    double width_;
    double height_;

public:
    // ✏️ 构造函数: 用初始化列表，如果非正则抛异常
    // 提示: Rectangle(double w, double h) : width_{w}, height_{h} { ... }
    Rectangle(double width, double height)
        : width_{width}, height_{height} {
        if (width <= 0 || height <= 0) {
            throw std::invalid_argument("width and height must be positive");
        }
    }

    // ✏️ 常成员函数: Area(), Perimeter()
    [[nodiscard]] double Area() const {return -1;
    }

    [[nodiscard]] double Perimeter() const {return -1;
    }

    // ✏️ 访问器 (getter)
    [[nodiscard]] double Width() const { return width_; }
    [[nodiscard]] double Height() const { return height_; }
};

// ────────────────────────────────────────────
// 2. Temperature: 温度值，单位固定为摄氏度
// invariant: >= -273.15（绝对零度）
class Temperature {
private:
    double celsius_;

public:
    // ✏️ TODO: 构造函数，低于绝对零度抛异常
    explicit Temperature(double celsius):celsius_{celsius}
    {
        if(celsius<-273.15)
        throw std::invalid_argument("Temperature");
    }

    [[nodiscard]] double Celsius() const { return celsius_; }

    // ✏️ TODO: 转换为华氏度
    // F = C * 9/5 + 32
    [[nodiscard]] double Fahrenheit() const {
        return celsius_ * 9/5 + 32;
    }

    // ✏️ TODO: 转换为开尔文
    // K = C + 273.15
    [[nodiscard]] double Kelvin() const {
        return  celsius_ + 273.15;
    }
};

// ────────────────────────────────────────────
// 3. 纯数据 struct：点坐标（不需要 invariant）
struct Point {
    double x;
    double y;
    // ✏️ 加一个成员函数 DistanceTo(Point other)，返回欧氏距离
    double DistanceTo(Point other){
        return sqrt((x-other.x)*(x-other.x)+(y-other.y)*(y-other.y));
    }
};

// ────────────────────────────────────────────
int main() {
    // 测试 Rectangle
    Rectangle r{3.0, 4.0};
    std::cout << "Area: " << r.Area() << '\n';          // 12
    std::cout << "Perimeter: " << r.Perimeter() << '\n'; // 14

    // ✏️ 尝试 Rectangle r2{-1, 5}; 观察异常
    //    会打印 uncaught exception 信息并终止程序——这是预期的！
    //    异常处理机制后面才教，现在只要求"看到异常发生"

    // 测试 Temperature
    Temperature t{25.0};
    std::cout << "Celsius: " << t.Celsius() << '\n';       // 25
    std::cout << "Fahrenheit: " << t.Fahrenheit() << '\n'; // 77
    std::cout << "Kelvin: " << t.Kelvin() << '\n';         // 298.15

    // ✏️ 尝试 Temperature t2{-300}; 观察异常（同样会终止，看完注释掉）

    // 测试 Point
    Point p1{0, 0};
    Point p2{3, 4};
    std::cout << "Distance: " << p1.DistanceTo(p2) << '\n'; // 5

    return 0;
}