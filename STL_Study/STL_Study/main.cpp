#include <iostream>
#include <vector>
#include <list>
#include <deque>

int main() {
    /*
    // vector ����غ���
    std::cout << "vector ����غ���" << std::endl;
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
    // vec[1] = 15�� �ϰ� 2������ ��ĭ�� �ڷ� �б�
    // vector�� ��� insert�� erase�ϸ� itr�� �ٽ� ��������� ��
    for(auto itr = vec.begin(); itr != vec.end(); itr++) {
        std::cout << *itr << ' ';
    }
    std::cout << std::endl;

    vec.erase(vec.begin()+1);
    // �ٽ� �����
    // vector�� ��� insert�� erase�ϸ� itr�� �ٽ� ��������� ��
    for(auto itr = vec.begin(); itr != vec.end(); itr++) {
        std::cout << *itr << ' ';
    }
    std::cout << std::endl;

    // Ư�� ���� ã�Ƽ� �����
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
    // Deque�� insert erase ����غ���
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
    // �׳� �� ���Ͷ� �Ȱ��� �� �� ����
    // �ٸ� front�� ��� �����ϰ� �ӵ��� �� �� �������� �޸𸮸� �� �Դ´�.
}