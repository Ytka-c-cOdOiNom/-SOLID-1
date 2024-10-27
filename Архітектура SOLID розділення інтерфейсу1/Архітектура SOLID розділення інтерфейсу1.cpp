/*
Неправильний код

#include <iostream>

class Robot {
public:
    virtual void fly() = 0;
    virtual void walk() = 0;
    virtual void swim() = 0;
};

class WalkingRobot : public Robot {
public:
    void fly() override {
        //...
    }

    void walk() override {
        cout << "Робот ходить" << endl;
    }

    void swim() override {
        //...
    }
};
Клас WalkingRobot має реалізувати всі методи інтерфейсу Robot, 
навіть якщо він не вміє літати чи плавати, що створює надлишкові та непотрібні залежності.
*/

#include <iostream>
#include <windows.h>
using namespace std;

// Інтерфейси для різних можливостей
class Flyable {
public:
    virtual void fly() = 0;
};

class Walkable {
public:
    virtual void walk() = 0;
};

class Swimmable {
public:
    virtual void swim() = 0;
};

// Клас робота, який тільки ходить
class WalkingRobot : public Walkable {
public:
    void walk() override {
        cout << "Робот ходить" << endl;
    }
};

// Клас робота, який тільки літає
class FlyingRobot : public Flyable {
public:
    void fly() override {
        cout << "Робот літає" << endl;
    }
};

// Клас робота, який тільки плаває
class SwimmingRobot : public Swimmable {
public:
    void swim() override {
        cout << "Робот плаває" << endl;
    }
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    WalkingRobot walkingRobot;
    FlyingRobot flyingRobot;
    SwimmingRobot swimmingRobot;

    walkingRobot.walk();
    flyingRobot.fly();
    swimmingRobot.swim();

    return 0;
}
