#include <iostream>
#include <sstream>

void stringStream()
{
    /*
    stringstream

    #include <sstream>

    ���ڿ��� �������� �ڷ����� �ѹ��� ���ö� �Ľ��ؼ� �ڸ��� ���� ���
    ������� "��¥ ����" �̷������� ������
    ��¥�� int�� �ڸ���, ������ string���� �ڸ���

    stringstream�� ����� '\n'�� �����ϰ� ������ ����
    stream.str(string s)�� ���� stream�� ���� ���ڿ� str�� �ٲ�

    stream >> �����ڷ� �Ѱ��� ���� ���� �־��� �� ����
    */

    std::string info = "��� ���� 1105";
    std::stringstream stream;
    stream.str(info);

    std::string part;
    while (stream >> part)
        std::cout << part << std::endl;
}
