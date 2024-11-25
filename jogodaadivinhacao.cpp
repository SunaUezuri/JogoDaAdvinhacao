//Biblioteca necessária para usar operações de saída no C++
#include <iostream>
#include<stdio.h>
//Dizendo ao programa que estamos utilizando as funções padrões
using namespace std;

//Função principal que guarda o código ao ser iniciado
int main (){
    //std::cout == print
    cout << "**************************************" << endl; //endl == quebra de linha
    cout << "* Bem-Vindos ao jogo da adivinhacao! *" << endl;
    cout << "**************************************" << endl;

    //Armazenando o número secreto e declarando que ela é uma constante
    //Variaveis constantes seguem uma regra de nomenclatura onde todos os caracteres são em CAPS Lock
    const int SECRET_NUMBER = 42;


    //Comando para receber entrada = "cin >>"
    int guess;
    cout << "Qual seu chute? ";
    cin >> guess;
    cout << "O valor do seu chute foi: " << guess << endl;

    //Variável bool
    bool guessed = guess == SECRET_NUMBER;
    bool lower = guess < SECRET_NUMBER;

    if (guessed) 
    {
        cout << "Parabens! voce acertou!" << endl;
    }
    else if (lower)
    {
        cout << "Voce errou! O numero secreto e menor." << endl;
    }
    else
    {
        cout << "Voce errou! O numero secreto e maior." << endl;
    }
    
    
}