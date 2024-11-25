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

    //Armazenando o número secreto
    int secret_number = 42;


    //Comando para receber entrada = "cin >>"
    int guess;
    cout << "Qual seu chute? ";
    cin >> guess;
    cout << "O valor do seu chute foi: " << guess << endl;

    if (guess == secret_number) 
    {
        cout << "Parabens, voce acertou!" << endl;
    }
    else if (guess > secret_number)
    {
        cout << "Voce errou! O numero secreto e menor." << endl;
    }
    else
    {
        cout << "Voce errou! O numero secreto e maior." << endl;
    }
    
    
}