/**********************************************************
* Хозяенок Станислав Олегович, ПИ-231
* Share-Link: https://onlinegdb.com/a9NVZ8wkS
* Тема: Программирование линейных алгоритмов, вариант 14
***********************************************************/

#define M_PI 3.14159265358979323846

#include <iostream>
#include <math.h>

using namespace std;

int main(){

    double RibLenght, AngelOne, AngelTwo, OpposRibOne, OpposRibTwo,
           BissectorLenghtFrom, Median_lenght, HeightLenght;
    
    setlocale(0, "RUS");
    
    //input RibLenght 6.35
    cout<<"Длина ребра (см): ";
    cin>>RibLenght;
    //input AngelOne 16
    cout<<"Величина угла 1(•): ";
    cin>>AngelOne;
    //input AngelTwo 44
    cout<<"Величина угла 2(•): ";
    cin>>AngelTwo;
    
    RibLenght /= 100;
    AngelOne = AngelOne * M_PI / 180;
    AngelTwo = AngelTwo * M_PI / 180;
    OpposRibOne = RibLenght * sin(AngelTwo) / sin(AngelOne);
    OpposRibTwo = RibLenght * (sin(M_PI - AngelOne - AngelTwo) / sin(AngelOne));
    BissectorLenghtFrom = 2 * OpposRibOne * OpposRibTwo * cos(AngelOne / 
                            2) / (OpposRibOne + OpposRibTwo);
    Median_lenght = sqrt((pow(OpposRibOne, 2) + pow(OpposRibTwo, 2) + 2 * OpposRibOne 
              * OpposRibTwo * cos(AngelOne)))
        / 2;
    HeightLenght = OpposRibTwo * sin(AngelTwo);

    cout << "Hello dear teacher!\n"
         << "Variant 14 of book \"Блок 2. Cборник задач.chp\":" << std::endl
         << "1) Длина ребра b: " << OpposRibOne << std::endl
         << "2) Длина ребра c: " << OpposRibTwo << std::endl
         << "3) Длина биссектрисы из угла A: " << BissectorLenghtFrom << std::endl
         << "4) Длина медины из вершины A: " << Median_lenght << std::endl
         << "5) Длина высоты из вершины A:" << HeightLenght << std::endl;
    
    system("pause");
    
    return 0;
}
