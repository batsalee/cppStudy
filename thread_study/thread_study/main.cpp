#include <iostream>
#include <thread>
using std::thread;

void func1() {
    for (int i = 0; i < 10; i++) {
        std::cout << "쓰레드 1 작동중! \n";
    }
}

void func2() {
    for (int i = 0; i < 10; i++) {
        std::cout << "쓰레드 2 작동중! \n";
    }
}

void func3() {
    for (int i = 0; i < 10; i++) {
        std::cout << "쓰레드 3 작동중! \n";
    }
}
int main() {
    thread t1(func1);
    thread t2(func2);
    thread t3(func3);

    t1.join();
    t2.join();
    t3.join();
    // 쓰레드 다른 속성들 다 적용해보기
}