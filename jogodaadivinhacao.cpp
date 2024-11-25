//Biblioteca necessária para usar operações de saída no C++
#include <iostream>
//Biblioteca para utilizar algumas funções da linguagem C
#include <cstdlib>
//Biblioteca time
#include <ctime>
//Dizendo ao programa que estamos utilizando as funções padrões
using namespace std;

//Função principal que guarda o código ao ser iniciado
int main (){
    //std::cout == print
    cout << "**************************************" << endl; //endl == quebra de linha
    cout << "* Bem-Vindos ao jogo da adivinhacao! *" << endl;
    cout << "**************************************" << endl;

    //Pedindo para o player escolher a dificuldade
    cout << "Escolha a dificuldade: " << endl;
    cout << "Facil (F) | Medio (M) | Dificil (D)" << endl;

    //Variável de dificuldade
    char difficulty;
    cin >> difficulty;

    //numero de tentativas
    int tries_player;

    if (difficulty == 'F')
    {
        tries_player = 15;
    }
    else if (difficulty == 'M')
    {
        tries_player = 10;
    }
    else
    {
        tries_player = 5;
    }

    //Armazenando o número secreto e declarando que ela é uma constante
    //Variaveis constantes seguem uma regra de nomenclatura onde todos os caracteres são em CAPS Lock
    srand(time(NULL));
    const int SECRET_NUMBER = rand() % 100;

    bool wrong_answer = true;
    //Variável de tentativas
    int tries = 0;

    //Varável representando os pontos que o player irá iniciar
    double score = 1000.0;

    //Laço de repetição para permitir vários chutes
    for(tries = 1; tries <= tries_player; tries++)
    {

        //Comando para receber entrada = "cin >>"
        int guess;
        cout << "Tentativa: " << tries << endl;
        cout << "Qual seu chute? ";
        cin >> guess;
        cout << "O valor do seu chute foi: " << guess << endl;

        //Variável bool
        bool guessed = guess == SECRET_NUMBER;
        bool higher = guess > SECRET_NUMBER;

        //abs = devolve o valor positivo de um número
        double lost_score = abs(guess - SECRET_NUMBER) / 2.0;
        score = score - lost_score; 

        if (guessed) 
        {
            cout << "Parabens! voce acertou!" << endl;

            //Fazendo o wrong_answer se tornar true para parar o laço
            wrong_answer = false;
            break;
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

    if (wrong_answer)
    {
        cout << "Voce perdeu o jogo! O numero secreto era: " << SECRET_NUMBER << endl;
    }
    else
    {
        cout << "Voce levou um total de: " << tries << " tentativas" << endl;
        //Precisão para imprimir casas decimais mesmo quando não haja
        cout.precision(2);
        //Deixando as vírgulas fixas em um local
        cout << fixed;
        cout << "Seu score final foi de: " << score << " pontos" << endl;
    }
    
}