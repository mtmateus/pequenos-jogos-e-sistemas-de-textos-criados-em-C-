#include <iostream>
using namespace std;
#include <locale.h> // heade de localização para poder usar acentos
#include <time.h>
#include <conio.h>

char escolha;
bool morreu = false;


void QUEST() //função sem parametro e sem retorno
{
	cin >> escolha;
	escolha = toupper (escolha);
	
}
	void TEMPO() //função sem parametro e sem retorno
{
char numInput;
    clock_t start = clock();

    bool morreu = false;
    while ( ! _kbhit()   && !morreu ) //Check for keyboard hit
    {
        //Check if 2 sec timer expired or not
        if (((clock () - start)/ CLOCKS_PER_SEC ) >= 15 ) 
        {
		cout << "A vida é feita de momentos e escolhas, mas não fazer nada também é uma escolha. VOCÊ VENCEU ESTE JOGO!" << endl;
			morreu = true;
			
        } else {
		}      

    }
    if (morreu == false) {
    	cin >> numInput;
	cout << "Data accepted: " << numInput << endl;

	 		switch (numInput){
			case 'A': 
	cout<< "GAMER OVER. Bom isso só prova que eu estava certo e o quão limitado sua visão é. \n você seguiu as regras do jogo até o fim e acabou morto. \n";
		 	 break;
      		case 'S': 
     	cout<< "Se você quer continuar jogando faça-o sozinho. \n Pare e pense em quanto sua vida é limitada pelas regras, o quanto essa falsa liberdade te domina. \n Uma dica: não jogue pelas regras, jogue com as regras.";
			   break;
			default: cout<<"nao é uma letra \n OU a letra não é valida";
		}	
			 if (morreu == true){
 	 //cout << "A vida é feita de momentos e escolhas, mas não fazer nada também é uma escolha." << endl;
 }
}
}


int main()
{	
setlocale (LC_ALL, "PORTUGUESE");
cout<< "Olá, sente-se. \n Eu sou o doutor, pode me chamar de gray. \n Eu sei por qual razão você veio até mim, foi para jogar um jogo. \n";
cout<< "Mas o que é um jogo? \n";
cout<< "A) atividade cuja natureza ou finalidade é a diversão, o conduzindo a fuga da realidade. \n";
cout<< "S) atividade, submetida a regras que estabelecem quem vence e quem perde. \n";

	QUEST();	 // chamando função
	 
	cout << escolha<< "\n";
	
	switch (escolha) { // fracasso subindo
		
	case 'a': 
	cout<< "Essa atividade te leva a outro 'mundo', outra 'realidade', onde você é subemetido a regras daquele lugar. \n";
    cout<< "Bom, você tem direito a uma pequena liberdade dentro desse mundo, entretanto na maioria dos casos essa é uma 'falsa liberdade'. \n";
    cout<< "Essa 'falsa liberdade' te dá somente a opção de seguir em frente ou morrer, sendo obrigado a seguir o roteiro, sendo assim o jogo te controla  .\n";
    cout<< "bom, sendo assim você só tem duas opções: \n A)Se matar. \n ou B)continuar jogando. \n";
		TEMPO();
			break;
    
	
	 case 'S': 
     	cout<< "Então um jogo é bastante parecido com a vida, porquê ";
	cout<< "na vida, em quase tudo somos subemetidos a regras. \n Em alguns lugares como trabalho e estudo elas estabelecem quem ganha ou perde. \n";
	cout<< "então porque não levamos a vida como um jogo? por que levamos a vida tão à sério? \n por qual razão não nos empenhamos tanto para passar na prova quanto para vencer o chefão? \n";
	cout<< "A vida, por si só é um jogo. Mas e você? joga para vencer? ou por jogar? Reflita sobre o assunto e me diga a resposta";
	break;
	default: cout<<"nao é uma letra \n OU a letra não é valida";
/*
me desculpe pelo jogo curto, mas por causa da falta de tempo devido ao trabalho e os problemas pessoais que venho enfrentando, não consegui fazer um jogo mais completo.
*/
} // fracasso subindo
}

