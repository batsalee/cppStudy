#include <iostream>
#include <vector>
#include <list>
#include <deque>

int main() {
    /*
    // vector 사용해보기
    std::cout << "vector 사용해보기" << std::endl;
    std::vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);

    for(auto itr = vec.begin(); itr != vec.end(); itr++) {
        std::cout << *itr << ' ';
    }
    std::cout << std::endl;

    vec.insert(vec.begin()+1, 15);
    // vec[1] = 15로 하고 2번부터 한칸씩 뒤로 밀기
    // vector의 경우 insert나 erase하면 itr을 다시 설정해줘야 함
    for(auto itr = vec.begin(); itr != vec.end(); itr++) {
        std::cout << *itr << ' ';
    }
    std::cout << std::endl;

    vec.erase(vec.begin()+1);
    // 다시 지우기
    // vector의 경우 insert나 erase하면 itr을 다시 설정해줘야 함
    for(auto itr = vec.begin(); itr != vec.end(); itr++) {
        std::cout << *itr << ' ';
    }
    std::cout << std::endl;

    // 특정 값을 찾아서 지우기
    for (auto itr = vec.begin(); itr != vec.end(); itr++)
    {
        if (*itr == 30)
        {
            vec.erase(itr);
            break;
        }        
    }
    for (auto itr = vec.begin(); itr != vec.end(); itr++) {
        std::cout << *itr << ' ';
    }
    std::cout << std::endl;
    */
    // Deque에 insert erase 사용해보기
    std::deque<int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);

    for (auto itr = dq.begin(); itr != dq.end(); itr++) {
        std::cout << *itr << ' ';
    }
    std::cout << std::endl;

    dq.insert(dq.begin() + 1, 15);
    for (auto itr = dq.begin(); itr != dq.end(); itr++) {
        std::cout << *itr << ' ';
    }
    std::cout << std::endl;

    dq.erase(dq.begin() + 1);
    for (auto itr = dq.begin(); itr != dq.end(); itr++) {
        std::cout << *itr << ' ';
    }
    std::cout << std::endl;
    // 그냥 다 벡터랑 똑같이 쓸 수 있음
    // 다만 front도 사용 가능하고 속도는 좀 더 빠르지만 메모리를 더 먹는다.
}