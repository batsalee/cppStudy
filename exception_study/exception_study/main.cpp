#include <iostream>
#include <stdexcept>

template <typename T>
class Vector {
public:
    Vector(size_t size) : size_(size) {
        data_ = new T[size_];
        for (int i = 0; i < size_; i++) {
            data_[i] = 3;
        }
    }
    const T& at(size_t index) const {
        if (index >= size_) {
            throw std::out_of_range("vector �� index �� ������ �ʰ��Ͽ����ϴ�.");
        }
        return data_[index];
    }
    ~Vector() { delete[] data_; }

private:
    T* data_;
    size_t size_;
};
int main() {
    Vector<int> vec(3);

    int index, data = 0;
    std::cin >> index;

    try {
        data = vec.at(index);
    }
    catch (std::out_of_range& e) {
        std::cout << "���� �߻� ! " << e.what() << std::endl;
    }
    // ���ܰ� �߻����� �ʾҴٸ� 3�� �� ��µǰ�, ���ܰ� �߻��Ͽ��ٸ� ���� data ��
    // �� �ִ� 0 �� ��µȴ�.
    std::cout << "���� ������ : " << data << std::endl;
}