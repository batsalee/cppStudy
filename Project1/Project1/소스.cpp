/*
getline �Լ� ������ 2������ ����
1) �迭�� �̿��ϴ� ���
2) string ��ü�� �̿��ϴ� ���

�迭�� �̿��ϴ� ���� 
#include <iostream> ����� �������ְ�
std::cin.getline(char* s, streamstring n, char delim); �� �Լ��������� ���
- s : ���ڿ��� ������ ����
- n : ������ ������ ����
�׸��� ���ڿ��� �������� null�� �߰��� ����

string ��ü�� �̿��ϴ� ���
#include <iostream>�� #include <string> ����� �������ְ�
std::getline(istream& is, string& str, char delim); �� �Լ� �������� ���
- is : ���� �Է� �Ǵ� ǥ�� �Է�
- str : ���ڿ��� ������ string ����
- delim : �ϳ��� ���ڸ� �����ؼ� �ش� ���ڱ��� ������ �� ����, ���� ����
*/

#include <iostream>
#include <string>

int main() {
	
	std::string input;
	std::getline(std::cin, input);

	return 0;
}