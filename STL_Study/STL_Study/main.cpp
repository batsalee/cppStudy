#include <iostream>
#include <vector>
#include <list>

int main() {
    // vector 사용해보기
    std::cout << "vector 사용해보기" << std::endl;
    std::vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);

    for (auto itr = vec.begin(); itr != vec.end(); ++itr) {
        std::cout << *itr << ' ';
    }
    std::cout << std::endl;

    vec.insert(vec.begin()+1, 15);
    // vec[1] = 15로 하고 2번부터 한칸씩 뒤로 밀기
    for (auto itr = vec.begin(); itr != vec.end(); ++itr) {
        std::cout << *itr << ' ';
    }
    std::cout << std::endl;

    vec.erase(vec.begin()+1);
    // 다시 지우기
    for (auto itr = vec.begin(); itr != vec.end(); ++itr) {
        std::cout << *itr << ' ';
    }
    std::cout << std::endl;
}