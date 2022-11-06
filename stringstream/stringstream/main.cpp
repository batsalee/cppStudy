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

#include <iostream>
#include <sstream>

using namespace std;

void main()
{
	string info = "��� ���� 1105";
	stringstream stream;
	stream.str(info);
	
	string part;
	while(stream >> part)
		cout << part << endl;
}