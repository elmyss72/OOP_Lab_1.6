#include <iostream>
#include "Ellipse.h"

using namespace std;

int main() {

    Ellipse el; // Створення об’єкта
    el.Read();  // Введення даних

    cout << "\n--- Rezultaty ---" << endl;
    el.Display(); // Виведення

    // Демонстрація методів обчислення
    cout << "Ploshcha elipsu (Area) = " << el.Area() << endl;
    cout << "Perymetr elipsu (Perimeter) = " << el.Perimeter() << endl;

    //Демонстрація роботи з вкладеним класом Pair 
    cout << "\nTestuvannya vkladenoho klasu:" << endl;
    Ellipse::Pair p; // Створення об’єкта вкладеного класу
    p.Init(5.0, 10.0); // Ініціалізація
    p.Display(); // Виведення
    cout << "Dobutok piv-osey (Product) = " << p.Product() << endl;

    return 0;
}