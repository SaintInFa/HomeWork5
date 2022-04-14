
#include <iostream>
//1. Реализовать шаблон класса Pair1, который позволяет пользователю передавать
// данные одного типа парами.
//
using namespace std;


template <class T>
class Pair1 {
private:
    T a;
    T b;
public:
    Pair1(T _a, T _b): a(_a), b(_b) {}
    T first()  const {
        return a;
    };
    T second() const {
        return b;
    };
};


//Реализовать класс Pair, который позволяет использовать разные типы данных в
//передаваемых парах.

template <class T1, class T2>
class Pair {
private:
    T1 a;
    T2 b;
public:
    Pair(T1 _a, T2 _b) : a(_a), b(_b) {}
    T1 first()  const {
        return a;
    };
    T2 second() const {
        return b;
    };
};

// Написать шаблон класса StringValuePair, в котором первое значение всегда типа string, а
// второе — любого типа. Этот шаблон класса должен наследовать частично
// специализированный класс Pair, в котором первый параметр — string, а второй — любого
// типа данных.

template <class T>
class Pair <string,T>{
protected:
    string a;
    T b;
public:
    Pair(string _a, T _b) : a(_a), b(_b) {}
    string first(){
        return a;
    };
    T second(){
        return b;
    };
};
template <class T>
class StringValuePair :public Pair <string, T> {
public:
    StringValuePair(string a, T b) : Pair <string, T>(a, b) {};
};







int main()
{
    StringValuePair <int> svp("Amazing", 7);
    std::cout << "Pair: " << svp.first() << ' ' << svp.second() << '\n';
    return 0;
}