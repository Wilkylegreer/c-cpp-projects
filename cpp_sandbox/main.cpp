#include <iostream>

int main()
{

    int h = 10;
    int i = ++h;
    int j = h++;

    std::cout << "I : " << i << std::endl;
    std::cout << "I X: " << h << std::endl;
    std::cout << "J : " << j << std::endl;
    std::cout << "J X : " << h << std::endl;

    double x = 10;
    int y = 3;
    double z = x / y;

    std::cout << "X / Y: " << z << std::endl;

    const double pi = 3.14;

    int a = 1;
    int b = 2;
    int bucket = a;

    a = b;
    b = bucket;

    std::cout << "A: " << a << std::endl;
    std::cout << "B: " << b << std::endl;

    int age = 25;
    double height = 5.9;
    char grade = 'A';
    std::string name = "Kyle";

    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Height: " << height << std::endl;
    std::cout << "Grade: " << grade << std::endl;

    return 0;
}