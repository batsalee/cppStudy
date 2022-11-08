#pragma once

class Marine {
    int hp;                // ���� ü��
    int coord_x, coord_y;  // ���� ��ġ
    int damage;            // ���ݷ�
    bool is_dead;
    char* name;  // ���� �̸�

public:
    Marine();              // �⺻ ������
    Marine(int x, int y, const char* marine_name);  // �̸����� ����
    Marine(int x, int y);  // x, y ��ǥ�� ���� ����
    ~Marine();

    int attack();                       // �������� �����Ѵ�.
    void be_attacked(int damage_earn);  // �Դ� ������
    void move(int x, int y);            // ���ο� ��ġ

    void show_status();  // ���¸� �����ش�.
};