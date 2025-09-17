/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

int main()
{
    // Задача 19
    std::cout<<"Задача 19"<<std::endl<<std::endl;
    
    int a; // Змінна A
    
    // Зчитуємо значення А
    std::cout<<"Введіть значення А: ";
    std::cin>>a;
    
    int a2 = a * a; // Змінна А2 = A * A
    std::cout<<std::endl<<"A2 = "<<a2<<std::endl; // Виводимо значення А2
    int a3 = a2 * a; // Змінна А3 = A2 * A
    std::cout<<"A3 = "<<a3<<std::endl; // Виводимо значення А3

    a = a2 * a3; // Перезаписуємо значення А на А5 = А2 * А3
    std::cout<<"A5 = "<<a<<std::endl; // Виводимо значення А5
    
    a2 = a * a; // Перезаписуємо значення А2 на А10 = А5 * А5
    std::cout<<"A10 = "<<a2<<std::endl; // Виводимо значення А10
    
    a3 = a2 * a; // Перезаписуємо значення А3 на А15 = А10 * А5
    std::cout<<"A15 = "<<a3<<std::endl<<std::endl; // Виводимо значення А15
    
    // Задача 24
    std::cout<<std::endl<<"Задача 24"<<std::endl<<std::endl;
    
    double x; // Вага (Х кг)
    double x_price; // Ціна за Х кг
    
    // Зчитуємо вагу та ціну
    std::cout<<"Введіть вагу цукерок: ";
    std::cin>>x;
    std::cout<<"Введіть ціну за "<<x<<" кг цукерок: ";
    std::cin>>x_price;
    
    // Розраховуємо та виводимо вагу за 1 кг
    std::cout<<std::endl<<"Вага за 1 кг: "<<x_price / x <<" грн."<<std::endl; 
    
    double y; // Вага для розрахунку (Y)
    
    // Зчитуємо вагу для розрахунку
    std::cout<<std::endl<<"Введіть вагу цукерок: ";
    std::cin>>y;
    
    // Розраховуємо та виводимо ціну за Y кг
    std::cout<<"Вага за "<<y<<" кг: "<< (x_price / x) * y <<" грн."<<std::endl<<std::endl;
    
    // Задача 48
    std::cout<<std::endl<<"Задача 48"<<std::endl<<std::endl;
    
    int b; // Друга змінна
    
    // Зчитуємо числа для розрахунку
    std::cout<<"Введіть значення А: ";
    std::cin>>a;
    std::cout<<"Введіть значення B: ";
    std::cin>>b;
    
    std::cout<<std::endl<<"G2 = "<<a * b;
    
    return 0;
}