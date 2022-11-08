#pragma once

class Marine {
    int hp;                // ���� ü��
    int coord_x, coord_y;  // ���� ��ġ
    int damage;            // ���ݷ�
    bool is_dead;

public:
    Marine();              // �⺻ ������
    Marine(int x, int y);  // x, y ��ǥ�� ���� ����

    int attack();                       // �������� �����Ѵ�.
    void be_attacked(int damage_earn);  // �Դ� ������
    void move(int x, int y);            // ���ο� ��ġ

    void show_status();  // ���¸� �����ش�.
};