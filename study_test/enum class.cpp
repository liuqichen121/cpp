#include"TheHead/liuqichen121.h"

enum class Color{Red,Green,Blue,Yellow};
enum class TrafficLight {Red,Yellow,Green};

string ColorName(Color c){
    switch(c){
        case Color::Red:
        return "红色";
        case Color::Green:
        return "绿色";
        case Color::Blue:
        return "蓝色";
        case Color::Yellow:
        return "黄色";
    }
    throw std::logic_error("unreachable");
}

string LightName(TrafficLight c){
    switch(c){
        case TrafficLight::Red:
        return "红色";
        case TrafficLight::Green:
        return "绿色";
        case TrafficLight::Yellow:
        return "黄色";
    }
    throw std::logic_error("unreachable");
}

TrafficLight NextLight(TrafficLight light){
    switch(light){
        case TrafficLight::Red:
        return TrafficLight::Green;
        case TrafficLight::Green:
        return TrafficLight::Yellow;
        case TrafficLight::Yellow:
        return TrafficLight::Red;
    }
    throw std::logic_error("unreachable");
}

bool CanGo(TrafficLight light){
    switch(light){
        case TrafficLight::Green:
        return true;
        default:
        return false;
    }
}

int main() {
    // ─── 测试 Color ───
    Color favorite1{Color::Red};
    std::cout << "Favorite color1: " << ColorName(favorite1) << '\n';
    Color favorite2{Color::Green};
    std::cout << "Favorite color2: " << ColorName(favorite2) << '\n';
    Color favorite3{Color::Blue};
    std::cout << "Favorite color3: " << ColorName(favorite3) << '\n';
    Color favorite4{Color::Yellow};
    std::cout << "Favorite color4: " << ColorName(favorite4) << '\n';
    // ✏️ 再测试其他三种颜色

    // ─── 测试 TrafficLight ───
    TrafficLight light{TrafficLight::Red};

    // ✏️ 模拟 6 次切换，输出每次的状态和是否可以通行
    // 期望输出序列: Red(否) → Green(是) → Yellow(否) → Red(否) → Green(是) → Yellow(否)
    for (int i = 0; i < 6; ++i) {
        // ✏️ 输出当前状态 + 能否通行
        cout<<LightName(light)<<(CanGo(light)?"(是)":"(否)");
        if(i<5)
        cout<<" → ";
        // ✏️ 切换到下一状态
        light=NextLight(light);
    }
    cout<<endl;
    // ─── 演示 enum class 的类型安全 ───
    // ✏️ 尝试写入 `int x = TrafficLight::Red;` 看编译器报什么错
    // ✏️ 尝试 `Color c = TrafficLight::Red;` 看编译器报什么错
    // （这两行在提交时注释掉或删掉，保证编译通过）

    return 0;
}