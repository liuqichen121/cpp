#include <algorithm>
#include <iostream>
#include <string>
#include <string_view>
#include <array>
#include <vector>
#include <algorithm>  // ✏️ std::sort, std::reverse
#include "TheHead/liuqichen121.h"
// ✏️ TODO: 实现函数

// 1. 返回字符串中元音字母 (a/e/i/o/u) 的数量
// ✏️ [[nodiscard]] int CountVowels(std::string_view text)
int CountVowels(std::string_view text){
    int sum=0,len=text.length();
    for(int i=0;i<len;i++)
    if(text[i]=='a'||text[i]=='e'||text[i]=='i'||text[i]=='o'||text[i]=='u')
    sum++;
    return sum;
}

// 2. 反转字符串（注意修改原字符串）
// ✏️ void ReverseString(std::string& str)
void ReverseString(std::string& str){
    int n=str.length(),len=str.length()/2;
    for(int i=0;i<len;i++){
        char t=str[i];
        str[i]=str[n-i-1];
        str[n-i-1]=t;
    }
    return;
}

// 3. 返回 array 中的最大值
// 🧪 咒语: 下面 template<...> 这行签名照抄（模板属于进阶内容，暂不解释），
//    你只需要写函数体
// ✏️ template <typename T, std::size_t N>
//    [[nodiscard]] T MaxElement(const std::array<T, N>& arr)

template <typename T, std::size_t N>
T MaxElement(const std::array<T, N>& arr){
    int sum=0;
    for(int i=1;i<N;i++)
    if(arr[i]>arr[sum])
    sum=i;
    return arr[sum];
}

// 4. 从 vector 中移除所有等于 target 的元素
// ✏️ void RemoveAll(std::vector<int>& vec, int target)
// 提示: C++20 一行搞定 —— std::erase(vec, target)

void RemoveAll(std::vector<int>& vec, int target){
    std::erase(vec, target);
    return;
}

int main() {
    // ─── 测试 string ───
    std::string greeting{"Hello, World!"};
    std::cout << "Vowels in \"" << greeting << "\": "
              << CountVowels(greeting) << '\n';  // 期望 3

    ReverseString(greeting);
    std::cout << "Reversed: " << greeting << '\n';  // 期望 "!dlroW ,olleH"

    // ─── 测试 string_view ───
    // ✏️ 传入 C 风格字符串字面量，CountVowels 也能工作
    std::cout << "Vowels in \"algorithm\": "
              << CountVowels("algorithm") << '\n';  // 期望 3

    // ─── 测试 array ───
    std::array<int, 5> arr{3, 1, 4, 1, 5};
    std::cout << "Max: " << MaxElement(arr) << '\n';  // 期望 5

    // ✏️ 再试 double 版（模板对 int/double 都成立，检查点要求）
    std::array<double, 3> darr{1.5, 3.5, 2.5};
    std::cout << "Max(double): " << MaxElement(darr) << '\n';  // 期望 3.5

    // ✏️ 用 std::sort 对 arr 排序并输出
    // 期望: 1 1 3 4 5
    std::sort(arr.begin(),arr.end());
    for(const auto&v:arr)
    printf("%d ",v);
    printf("\n");

    // ─── 测试 vector ───
    std::vector<int> vec{1, 2, 3, 2, 4, 2, 5};

    // ✏️ 输出 vec 的 size 和 capacity

    // ✏️ 调用 RemoveAll(vec, 2)
    // RemoveAll(vec, 2);

    // ✏️ 输出移除后 vec 的内容（期望: 1 3 4 5）
    std::cout << "After removing 2: ";
    for (const auto& v : vec) {
        std::cout << v << ' ';
    }
    std::cout << '\n';

    // ✏️ 用 vec.push_back() 添加三个元素后再次输出
    vec.push_back(3);
    vec.push_back(7);
    vec.push_back(6);

    for(const auto& v:vec)
    printf("%d ",v);

    printf("\n");

    return 0;
}