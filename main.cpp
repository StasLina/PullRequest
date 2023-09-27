/*  Стартовый шаблон
*   Написан студентом КемГу
*   Инситута цифры
*   Кафедры цифровых технологий
*   Группи ПИ-231
*   Хозяенок С.О.*/

//task 1 
#include <iostream>
#include <math.h>
#define M_PI 3.14159265358979323846
int main()
{
    setlocale(0, "RUS");
    double rib_lenght = 6.35 / 100;
    double angel_one = 16 * M_PI / 180;
    double angel_two = 44 * M_PI / 180;
    double oppos_rib_one = rib_lenght * sin(angel_two) / sin(angel_one);
    double oppos_rib_two = rib_lenght * (sin(M_PI - angel_one - angel_two) / sin(angel_one));
    double bissector_lenght_from = 2 * oppos_rib_one * oppos_rib_two * cos(angel_one / 2) / (oppos_rib_one + oppos_rib_two);
    double median_ = sqrt(
        (pow(oppos_rib_one, 2) + pow(oppos_rib_two, 2) + 2 * oppos_rib_one * oppos_rib_two * cos(angel_one))
    )//end sqrt
        / 2;
    double height = oppos_rib_two * sin(angel_two);
    std::cout << "Hello dear teacher!\n";
    std::cout << "Variant 14 of book \"Блок 2. Cборник задач.chp\":" << std::endl;
    std::cout << "1) Длина ребра b: " << oppos_rib_one << std::endl;
    std::cout << "2) Длина ребра c: " << oppos_rib_two << std::endl;
    std::cout << "3) Длина биссектрисы из угла A: " << bissector_lenght_from << std::endl;
    std::cout << "4) Длина медины из вершины A: " << median_ << std::endl;
    std::cout << "5) Длина высоты из вершины A:" << height << std::endl;
    std::cout << "А это значение медианы из вершины A набранное по формуле приведенной в zadachnike" << std::endl << "4)" <<
        sqrt(
            (pow(oppos_rib_one, 2) + pow(oppos_rib_two, 2) + 2 * oppos_rib_one * oppos_rib_two * cos(angel_one))
            / 2);//end sqrt
    std::cout << std::endl << "Как видим в задачнике используемая формула приведена не верно"
        << std::endl << "Спасибо за внимание";
    system("pause");
}
