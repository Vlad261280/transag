#include <iostream>
#include <ctime>

using namespace std;

//КЛАСС САМОЛЁТ
class PLANE
{
public:
    //Цена
    int price_dollars_km;
    //Скорость
    int speed_km_hour;
    //Аварийность
    int crush_percent;
    //Установка значений
    PLANE()
    {
        //Цена доллар/км 
        price_dollars_km = 5;
        //Скорость км/час
        speed_km_hour = 850;
        //Шанс аварии %
        crush_percent = 5;
    }
    //ШАНС АВАРИИ
    void CHANCE_CRASH()
    {
        //При аварии вычитываются деньги
        if(rand()%101 < crush_percent)
        {
            /* ЗДЕСЬ ДОЛЖЕН БЫТЬ БЮДЖЕТ */ - /* какой-то % от стоимости груза*/;
        }
    }
};

//КЛАСС ПОЕЗД
class TRAIN
{
public:
    //Цена
    int price_dollars_km;
    //Скорость
    int speed_km_hour;
    //Аварийность
    int crush_percent;
    //Установка значений
    TRAIN()
    {
        //Цена доллар/км
        price_dollars_km = 0.2;
        //Скорость км/час
        speed_km_hour = 45;
        //Шанс аварии %
        crush_percent = 15;
    }
    //ШАНС АВАРИИ
    void CHANCE_CRASH()
    {
        //При аварии вычитываются деньги
        if(rand()%101 < crush_percent)
        {
            /* ЗДЕСЬ ДОЛЖЕН БЫТЬ БЮДЖЕТ */ - /* какой-то % от стоимости груза*/;
        }
    }
};

//КЛАСС АВТОМОБИЛЬ
class AVTO
{
public:
    //Цена
    int price_dollars_km;
    //Скорость
    int speed_km_hour;
    //Аварийность
    int crush_percent;
    //Установка значений
    AVTO()
    {
        //Цена доллар/км
        price_dollars_km = 1;
        //Скорость км/час
        speed_km_hour = 70;
        //Шанс аварии %
        crush_percent = 35;
    }
    //ШАНС АВАРИИ
    void CHANCE_CRASH()
    {
        //При аварии вычитываются деньги
        if(rand()%101 < crush_percent)
        {
            /* ЗДЕСЬ ДОЛЖЕН БЫТЬ БЮДЖЕТ */ - /* какой-то % от стоимости груза*/;
        }
    }
};

int main(int argc, char** argv)
{
    srand(time(NULL));
    PLANE plane;
    TRAIN train;
    AVTO avto;
    return 0;
}