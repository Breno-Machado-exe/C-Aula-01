/*
Faça um algoritmo que leia as 3 notas de um aluno, calcule e imprima a média final deste aluno. Considerar que a média é ponderada e que o peso das notas é: 2, 3 e 5, respectivamente.
Results:
Input: 60 60 60 Output: Media final: 60.0
Input: 20 50 70 Output: Media final: 54.0
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    int nota[3];
    float media;
    //Variáveis para receber as notas do aluno e variável para receber a media
    for (int i = 0; i < 3; i++)
    {
        cout << "Escreva a " << i+1 << " nota do aluno:" <<endl;
        cin >> nota[i];
    }
    media = ((nota[0]*2) + (nota[1]*3) + (nota[2]*5)) / 10;
    //Leitura das notas e criação da média
    cout << fixed << setprecision (1) << "A media eh: "<< media;
    return 0;
}

