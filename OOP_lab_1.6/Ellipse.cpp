#include "Ellipse.h"
#include <cmath>

const double PI = 3.141592653589793;

// Реалізація вкладеного класу Pair

// Сетер першого поля з перевіркою коректності
bool Ellipse::Pair::setFirst(double f) {
    if (f > 0) {
        first = f;
        return true;
    }
    first = 0;
    return false;
}

// Сетер другого поля з перевіркою коректності
bool Ellipse::Pair::setSecond(double s) {
    if (s > 0) {
        second = s;
        return true;
    }
    second = 0;
    return false;
}

// Ініціалізація пари чисел
bool Ellipse::Pair::Init(double f, double s) {
    return setFirst(f) && setSecond(s);
}

// Введення пари чисел з клавіатури
void Ellipse::Pair::Read() {
    double f, s;
    do {
        cout << "Vvedit pershu piv-vis (a > 0): ";
        cin >> f;
        cout << "Vvedit drugu piv-vis (b > 0): ";
        cin >> s;
    } while (!Init(f, s));
}

void Ellipse::Pair::Display() const {
    cout << toString() << endl;
}

string Ellipse::Pair::toString() const {
    stringstream sout;
    sout << "Piv-osi: (" << first << ", " << second << ")";
    return sout.str();
}

// Обчислення добутку двох чисел
double Ellipse::Pair::Product() const {
    return first * second;
}

// Реалізація класу Ellipse

// Ініціалізація еліпса через півосі
bool Ellipse::Init(double a, double b) {
    return semiAxes.Init(a, b);
}

// Введення даних еліпса
void Ellipse::Read() {
    cout << "--- Vvedennya danyh dlya elipsu ---" << endl;
    semiAxes.Read();
}

void Ellipse::Display() const {
    cout << toString() << endl;
}

string Ellipse::toString() const {
    stringstream sout;
    sout << "Fihura: Elips. " << semiAxes.toString();
    return sout.str();
}

// Площа еліпса: S = π * a * b
double Ellipse::Area() const {
    return PI * semiAxes.Product();
}

// Периметр еліпса :
// P ≈ 2 * π * √((a² + b²) / 2)
double Ellipse::Perimeter() const {
    double a = semiAxes.getFirst();
    double b = semiAxes.getSecond();
    return 2 * PI * sqrt((a * a + b * b) / 2.0);
}