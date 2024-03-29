/*
Faça um programa que leia um número representando uma quantidade de horas e imprima a hora convertida em minutos conforme os exemplos
Dica: Trabalhe com inteiros.
Result: 
input: 1 Output: 1 horas = 60 minutos
input: 35 Output: 35 horas = 2100 minutos
*/
#include <iostream>
using namespace std;

int main ()
{
    int horas, minutos;
    //variável para receber o número de horas e variável para devolver o número de minutos
    cout << "Escreva o numero de horas: " << endl;
    cin >> horas;
    minutos = horas * 60;
    cout << horas << " horas = " << minutos << " minutos" ;
    return 0;
}