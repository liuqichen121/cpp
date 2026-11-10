#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
#include <set>
#include <vector>

int main() {
    // ────────────────────────────────────
    // 一、std::map（有序）
    // ────────────────────────────────────
    // ✏️ TODO: 建立学生姓名 → 分数的映射
    std::map<std::string, int> scores;

    // ✏️ 添加：Alice→92, Bob→88, Charlie→95, Diana→88
    // 提示: scores["Alice"] = 92;

    scores["Alice"]=92;
    scores["Bob"]=88;
    scores["Charlie"]=95;
    scores["Diana"]=88;

    // ✏️ 遍历输出（按姓名排序，因为 map 有序）
    std::cout << "Scores (sorted by name):\n";

    for(const auto&i:scores){
        std::cout<<i.first<<" "<<i.second<<std::endl;
    }
    printf("\n");

    // 用结构化绑定: for (const auto& [name, score] : scores)

    for(const auto&[name,score]:scores)
    std::cout<<name<<" "<<score<<std::endl;
    printf("\n");

    // ────────────────────────────────────
    // 二、统计词频
    // ────────────────────────────────────
    // ✏️ TODO: 统计每个单词出现的次数
    std::vector<std::string> words{
        "apple", "banana", "apple", "cherry", "banana", "apple"
    };
    std::unordered_map<std::string, int> word_count;

    // ✏️ 遍历 words，累加计数
    // 对每个 word: ++word_count[word];

    for(const std::string&word:words)
    word_count[word]++;


    // ✏️ 遍历 word_count，输出每个词和次数
    // 注意: unordered_map 无序，输出顺序不固定

    std::cout << "\nWord counts:\n";

    for(const auto&i:word_count)
    std::cout<<i.first<<" "<<i.second<<std::endl;
    printf("\n");


    // ────────────────────────────────────
    // 三、std::set（唯一集合）
    // ────────────────────────────────────
    // ✏️ TODO: 用 set 去重
    std::vector<int> duplicates{4, 1, 3, 1, 4, 5, 3, 2, 5};
    std::set<int> unique;

    // ✏️ 把 duplicates 的元素全部插入 unique

    for(const auto&i:duplicates)
    unique.insert(i);


    // ✏️ 输出 unique（自动去重 + 排序，期望: 1 2 3 4 5）

    for(const auto&i:unique)
    std::cout<<i<<std::endl;
    std::cout << "\nUnique sorted: ";


    // ────────────────────────────────────
    // 四、查找
    // ────────────────────────────────────
    // ✏️ TODO: 查找 Alice 的分数
    // 用 scores.find("Alice")，检查是否找到
    // ✏️ 查找 "Eve"（不存在），检查返回值

    auto it = scores.find("Alice");
    if (it != scores.end()) {
        std::cout << "Alice's score: " << it->second << '\n';
    }

    // ✏️ 查找 Eve

    it=scores.find("Eve");

    return 0;
}