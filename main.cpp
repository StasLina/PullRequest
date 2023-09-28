/**********************************************************
* Хозяенок Станислав Олегович, ПИ-231
* Share-Link: https://onlinegdb.com/jC4_akfv9
* Тема: Программирование линейных алгоритмов, вариант 14
***********************************************************/

#include <iostream>
#include <math.h>

#define M_PI 3.14159265358979323846
#define __input__
#define __output__
using namespace std;
void ChtoToStahnoeSoStilem(
    const double& __input__ rib1,
    const double& __input__ rib2,
    const double& __input__ angel,
    double& __output__ height){
    height=sqrt(
            (pow(rib1, 2) + pow(rib2, 2) + 2 * rib1 * rib2 * cos(angel))
            / 2);
};
int main(){
    double 
        rib_lenght,
        angel_one,
        angel_two,
        oppos_rib_one,
        oppos_rib_two,
        bissector_lenght_from,//длина биссектрисы от угла 1
        median_,//длина медианы
        height,//высота
        height_2;//высота по форме из книжки
    setlocale(0, "RUS");
    //input rib_lenght 6.35
    cout<<"Длина ребра (см): ";cin>>rib_lenght;
    //input angel_one 16
    cout<<"Величина угла 1(•): ";cin>>angel_one;
    //input angel_two 44
    cout<<"Величина угла 2(•): ";cin>>angel_two;
    
    rib_lenght /= 100;
    angel_one = angel_one * M_PI / 180;
    angel_two = angel_two * M_PI / 180;
    oppos_rib_one = rib_lenght * sin(angel_two) / sin(angel_one);
    oppos_rib_two = rib_lenght * (sin(M_PI - angel_one - angel_two) / sin(angel_one));
    bissector_lenght_from = 2 * oppos_rib_one * oppos_rib_two * cos(angel_one / 2) / (oppos_rib_one + oppos_rib_two);
    median_ = sqrt(
        (pow(oppos_rib_one, 2) + pow(oppos_rib_two, 2) + 2 * oppos_rib_one * oppos_rib_two * cos(angel_one))
    )//end sqrt
        / 2;
    height = oppos_rib_two * sin(angel_two);
    ChtoToStahnoeSoStilem(oppos_rib_one,oppos_rib_two,angel_one,height_2);
    
    std::cout << "Hello dear teacher!\n"
     << "Variant 14 of book \"Блок 2. Cборник задач.chp\":" << std::endl
     << "1) Длина ребра b: " << oppos_rib_one << std::endl
     << "2) Длина ребра c: " << oppos_rib_two << std::endl
     << "3) Длина биссектрисы из угла A: " << bissector_lenght_from << std::endl
     << "4) Длина медины из вершины A: " << median_ << std::endl
     << "5) Длина высоты из вершины A:" << height << std::endl
     << "А это значение медианы из вершины A набранное по формуле приведенной в zadachnike" << std::endl << "4)"
     <<height_2<< std::endl 
     << "Как видим в задачнике используемая формула приведена не верно"
     << std::endl << "Спасибо за внимание";
    
    system("pause");
    return 0x0;
}
