// Lab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <math.h>
#define M_PI 3.14

using namespace std;

int main()
{
    

    
    
   //Обчислити площу бічної поверхні s=prl; та об’єм V=pr^2/3 конуса за заданою висотою h, твірною l та радіусом основи r.//

   //Version 1//

    /*double n = M_PI, const r = 20, l = 6;

    double s = M_PI * r * l;

    double V = M_PI * r * r / 3;

    printf_s("s = %lf\nV = %lf",s,V);

    system("pause");*/




    //Version B//

    /*double n = M_PI, const r, l;

    printf_s("input r:");
    scanf_s("%lf", &r);

    printf_s("input l:");
    scanf_s("%lf", &l);

    double s = M_PI * r * l;

    double V = M_PI * r * r / 3;

    printf_s("s = %lf\nV = %lf", s, V);

    system("pause"); */




    //Version C//

    double n = M_PI, const r, l;

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "input r:";
    cin >> r;

    cout << "input l";
    cin >> l;

    double s = M_PI * r * l;

    double V = M_PI * r * r / 3;

    printf_s("s = %lf\nV = %lf", s, V);

    system("pause"); 






}