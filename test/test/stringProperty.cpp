#include <iostream>
#include "stringProperty.h"

void checkCharacter()
{
	/*
	isupper(c) : �빮�ڶ�� true
	islower(c) : �ҹ��ڶ�� true
	*/
	char lower = 'a';
	if (isupper(lower)) std::cout << lower << "�� �빮���Դϴ�" << std::endl;
	else if (islower(lower)) std::cout << lower << "�� �ҹ����Դϴ�" << std::endl;

	/*
	isdigit ������
	�Ű������� char�� �־�� ��
	char�� ['0'-'9']�� true�� �ƴϸ� false
	int�� ������ �ȵ�, '0'+int�� �ִ� ���̴��� �ؾ��ҵ��ѵ� �׳� char�� ���ٰ� �����ϱ�
	*/
	char c = '2';
	if (isdigit(c)) std::cout << c << "�� �����Դϴ�" << std::endl;

	/*
	isspace : �����̸� true
	isalpha : ���ĺ��̸� true
	*/
	char space = ' ';
	if (isspace(space)) std::cout << space << "�� �����Դϴ�" << std::endl;

	char alpha = 'p';
	if (isalpha(alpha)) std::cout << alpha << "�� ���ĺ��Դϴ�" << std::endl;
}

void changeCharacter()
{
	/*
	toupper(c) : �빮�ڷ� ����
	tolowwer(c) : �ҹ��ڷ� ����
	*/
	char alpha = 'a';
	std::cout << alpha << "�� �ҹ����Դϴ�." << std::endl;
	
	alpha = toupper(alpha);
	std::cout << alpha << "�� �빮���Դϴ�." << std::endl;
	
	alpha = tolower(alpha);
	std::cout << alpha << "�� �ҹ����Դϴ�." << std::endl;
}

#include <string>

void changeString()
{
	/*
	stoi ��� ������
	1) #include <string>
	2) char�� �ƴ� string�� �Ű������� �־�� ��
	3) string i = "123";�� stoi(i)�ϸ� int���� 123���� �� ������
	   string i = "123abc45";�� stoi(i)�ϸ� ���� �ձ����� ��ȯ�Ǽ� 123���� ��ȯ��
	4) ��ȯ �� �־��� ������ long long�̸� stoi�� ���� �ȵǰ� stoll�� �����
	5) stoi(buffer);�� ������ buffer�� ��������� core dump�� �ߴϱ� ���� Ȯ���ϰ� ���ֱ�
	   if(buffer != "") stoi(buffer); ó��

	stoi : string to int
	stof : string to float
	stol : string to long
	stod : string to double
	stoul : string to unsigned int
	stoll : string to long long
	stoull : string to unsigned long long
	stold : string to long double
	*/

	std::string str = "123abc12";
	int num;
	
	if (str != "") {
		num = stoi(str);
	}

	std::cout << num << std::endl;
}