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

    bool wrong_answer = true;
    int tries = 0;

    //Laço de repetição para permitir vários chutes
    while (wrong_answer)
    {
        //Aumentando o número de tentativas que o usuário levou para acertar
        tries++;

        //Comando para receber entrada = "cin >>"
        int guess;
        cout << "Tentativa: " << tries << endl;
        cout << "Qual seu chute? ";
        cin >> guess;
        cout << "O valor do seu chute foi: " << guess << endl;

        //Variável bool
        bool guessed = guess == SECRET_NUMBER;
        bool higher = guess > SECRET_NUMBER;


        if (guessed) 
        {
            cout << "Parabens! voce acertou!" << endl;

            //Fazendo o wrong_answer se tornar true para parar o laço
            wrong_answer = false;
        }
        else if (higher)
        {
            cout << "Voce errou! Seu chute foi maior que o numero secreto." << endl;
        }
        else
        {
            cout << "Voce errou! Seu chute foi menor que o numero secreto." << endl;
        }
    }
    
    cout << "Fim de jogo!" << endl;
    cout << "Voce levou um total de: " << tries << " tentativas" << endl;
    
}