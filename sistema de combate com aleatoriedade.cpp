#include <iostream>
using namespace std;
#include <locale.h> // heade de localização para poder usar acentos
 #include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
 int atks;
 int decisao;
char escolha;
int atk1, atk2, atk3, score;
int hp = 10;
int numSecreto;
	
void ATK() //função sem parametro e sem retorno
{
  cout << "Ataque-1, defesa-2, esquiva-3 \n";
	cin >> decisao;	
}

void ATAQUE1 () {
	cout << "\n Pé direito a frente. \n ";
	ATK ();
	cout << "\n Ataque vindo de cima \n ";
	
    switch (decisao) {
    		default: hp = 0;
    	case 1:
    	cout << "\n tomou um golpe direto na cabeça \n";
    	cout << hp << "-3 = " << hp-3<< "\n";
    	hp = hp -3;
    	break;
    	case 2: cout << "\n defendeu o golpe, e contra-atacou \n";
    	score = score + 1;
    	cout << "score +1 = " << score;
    	break;
    	case 3: cout << "\n esquivou-se do golpe, e o atacou desprevinido \n";
    	score = score + 2;
    	cout << "score +2 = " << score;
break;
	}
	
}
void ATAQUE2 () {
	cout << "\n Pé direito a frente, \n ";
	ATK ();
	cout << "\n corte pela direita \n ";
	switch (decisao) {
    		default: hp = 0;
    	case 1:
    	cout << "\n os ataques colidiram \n";
    	cout << "sem dano ou score \n";
    	break;
    	case 2: cout << "\n defendeu o golpe, e contra-atacou \n";
    	score = score + 1;
    	cout << "score +1 = " << score;
    	break;
    	case 3: cout << "\n esquivou-se do golpe, e o atacou desprevinido \n";
    	score = score + 2;
    	cout << "score +2 = " << score;
break;

	}
}
void ATAQUE3 () {
	cout << "\n Pé esquerdo a frente. \n ";
	ATK ();
	cout << "\n corte pela esquerda \n ";
		switch (decisao) {
    		default: hp = 0;
    	case 1:
    	cout << "\n ambos se acertaram \n";
    	cout << hp << "-1 = "  << hp-1<< "\n";
    		hp = hp -1;
    		score = score + 1;
    			cout << "score +1 = " << score;
    	break;
    	case 2: cout << "\n defendeu o golpe, e contra-atacou \n";
    	score = score + 1;
    	cout << "score +1 = " << score;
    	break;
    	case 3: cout << "\n esquivou-se do golpe, e o atacou desprevinido \n";
    	score = score + 2;
    	cout << "score +2 = " << score;
break;

	}
}
void ATAQUE4 () {
	cout << "\n Pé esquerdo a frente, \n ";
	ATK ();
	cout << "\n giro e corte pela direita \n ";
		switch (decisao) {
    		default: hp = 0;
    	case 1:
    	cout << "o oponente se esquivou e te atacou \n";
    	cout << hp << "-2 = "  << hp-2<< "\n";
    		hp = hp -2;
    	break;
    	case 2: cout << "\n defendeu o golpe, e contra-atacou \n";
    	score = score + 1;
    	cout << "score +1 = " << score;
    	break;
    	case 3: cout << "\n o oponente te surpreendeu e atacou \n";
    	cout << hp << "-3 = "  << hp-3<< "\n";
    		hp = hp -3;
    	break;

	}
}
 int main (){
 setlocale (LC_ALL, "PORTUGUESE");	
 cout << "olá jovem guerreiro, vamos a mais um treino de espadas... (você pegou sua espada de madeira). \n";
 cout << "preste bastante atenção nos movimentos e nos Minimos Detalhes \n";
  cout << "qualquer desvio não será tolerado e você repetirá na hora (hp = 0) \n";
 cout << "o treino será até você ser derrotado (HP = 0). \n mas se você me atingir um determinado número de vezes será promovido a uma nova classe (vitória). \n Que comece o treino! \n";

	while (hp >= 0 && hp <= 10)
	{
		srand (time(NULL)); 
	numSecreto = rand() % 4 +1; 
switch (numSecreto) {
 	case 1: ATAQUE1();
 	break;
 	case 2: ATAQUE2();
 	break;
 	case 3: ATAQUE3();
 	break;
 	case 4: ATAQUE4();
 	break;
 } // switch
 
} // while
 
 
 if (score >= 0 && score <= 3) {
 	cout << "nossa, só isso? precisa treinar mais";
 } else { 
 	if (score == 4 && score == 6) {
 		cout << "seus movimentos ainda estão rigidos e previsíveis, tente treinar mais";
	 }else { 
 	if (score == 7 && score == 8) {
 		cout << "muito bem, deu pra dar uma aquecida aqui, agora estou gostando";
	 }else { 
 	if (score == 9 && score == 10) {
 		cout << "agora sim estou gostanto, poderiamos lutar a sério qualquer dia desses?";
	 } else { 
 	if (score > 10 && score < 25) {
 		cout << "meus parabéns seu progresso está excelente, é o melhor da classe";
	 } 
 }
 }
 }
 }
 
 
 }
