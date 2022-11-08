#pragma once

class Marine {
    int hp;                // 마린 체력
    int coord_x, coord_y;  // 마린 위치
    int damage;            // 공격력
    bool is_dead;
    char* name;  // 마린 이름

public:
    Marine();              // 기본 생성자
    Marine(int x, int y, const char* marine_name);  // 이름까지 지정
    Marine(int x, int y);  // x, y 좌표에 마린 생성
    ~Marine();

    int attack();                       // 데미지를 리턴한다.
    void be_attacked(int damage_earn);  // 입는 데미지
    void move(int x, int y);            // 새로운 위치

    void show_status();  // 상태를 보여준다.
};