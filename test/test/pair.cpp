#include <iostream>

void main()
{
    /*
    pair template Class
    �ΰ��� ������ �����͸� �ٷ궧 ���ϰ� ��� ����

    #include <utility>�� �ʿ�������
    #include <algorithm>�̳�
    #include <vector>�� �̹� utility ����� ���ԵǾ�����
    �׷��� algorithm�̳� vector�� �����Ѵٸ� utility�� ���ص� �ȴ�

    template <class T1, class T2> struct pair;
    T1�� first�� ����, T2�� second�� ����

    ����
    pair<type1, type2> p�� pairŬ������ p ��ü�� ����
    p.first�� p�� ù��° ����
    p.second�� p�� �ι�° ����
    make_pair(��1, ��2)�� ��1, ��2�� �� ������ �ϴ� pair�� ��������

    pair��ü���� �񱳽� first�� ���� ���ϰ� ������ second�� ���Ѵ�
    */

    std::pair<int, int> ip;
    ip.first = 1;
    ip.first = 2; // �̷������� ���Ե� ����

    std::cout << "ip.first : " << ip.first << ", ip.second : " << ip.second << std::endl;

    std::pair<int, double> idp(1, 2.5); // �̷��������ʱ�ȭ�� ����
    std::cout << "idp.first : " << idp.first << ", idp.second : " << idp.second << std::endl;

    std::pair<std::string, int> sip;
    sip = std::make_pair("��Ʈ��", 10); // make_pair�� ����� ���Ե� ����
    std::cout << "sip.first : " << sip.first << ", sip.second : " << sip.second << std::endl;
}
