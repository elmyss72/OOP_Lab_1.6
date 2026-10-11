#pragma once
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

// Клас-контейнер Ellipse (еліпс)
// Містить поле «пара чисел» (Pair), яка описує півосі еліпса
class Ellipse {
public:
    // Вкладений клас Pair  
    
    class Pair {
    private:
        double first;   // Перше число (піввісь a)
        double second;  // Друге число (піввісь b)

    public:
        // Методи доступу (константні геттери)
        double getFirst() const { return first; }
        double getSecond() const { return second; }

        // Методи запису (сетери) з контролем коректності (> 0)
        // Перевірку неможливо обійти, бо поля приватні
        bool setFirst(double f);
        bool setSecond(double s);

        // Обов’язкові методи
        bool Init(double f, double s);   // Ініціалізація
        void Read();                     // Введення з клавіатури
        void Display() const;            // Виведення на екран
        string toString() const;         // Перетворення в рядок

        // Метод обчислення добутку чисел (вимога завдання)
        double Product() const;
    };

private:
    // Приватне поле-контейнер: пара чисел (піввісі)
    Pair semiAxes;

public:
    // Методи доступу до поля-пари
    Pair getSemiAxes() const { return semiAxes; }
    void setSemiAxes(Pair p) { semiAxes = p; }

    // Обов’язкові методи класу-контейнера
    bool Init(double a, double b);       // Ініціалізація
    void Read();                         // Введення з клавіатури
    void Display() const;                // Виведення на екран
    string toString() const;             // Перетворення в рядок

    // Методи обчислення площі та периметра еліпса (вимога завдання)
    double Area() const;
    double Perimeter() const;
};