#include <iostream>
using namespace std;
#include <locale.h> // heade de localiza��o para poder usar acentos
#include <time.h>
#include <conio.h>

char escolha;
bool morreu = false;


void QUEST() //fun��o sem parametro e sem retorno
{
	cin >> escolha;
	escolha = toupper (escolha);
	
}
	void TEMPO() //fun��o sem parametro e sem retorno
{
char numInput;
    clock_t start = clock();

    bool morreu = false;
    while ( ! _kbhit()   && !morreu ) //Check for keyboard hit
    {
        //Check if 2 sec timer expired or not
        if (((clock () - start)/ CLOCKS_PER_SEC ) >= 15 ) 
        {
		cout << "A vida � feita de momentos e escolhas, mas n�o fazer nada tamb�m � uma escolha. VOC� VENCEU ESTE JOGO!" << endl;
			morreu = true;
			
        } else {
		}      

    }
    if (morreu == false) {
    	cin >> numInput;
	cout << "Data accepted: " << numInput << endl;

	 		switch (numInput){
			case 'A': 
	cout<< "GAMER OVER. Bom isso s� prova que eu estava certo e o qu�o limitado sua vis�o �. \n voc� seguiu as regras do jogo at� o fim e acabou morto. \n";
		 	 break;
      		case 'S': 
     	cout<< "Se voc� quer continuar jogando fa�a-o sozinho. \n Pare e pense em quanto sua vida � limitada pelas regras, o quanto essa falsa liberdade te domina. \n Uma dica: n�o jogue pelas regras, jogue com as regras.";
			   break;
			default: cout<<"nao � uma letra \n OU a letra n�o � valida";
		}	
			 if (morreu == true){
 	 //cout << "A vida � feita de momentos e escolhas, mas n�o fazer nada tamb�m � uma escolha." << endl;
 }
}
}


int main()
{	
setlocale (LC_ALL, "PORTUGUESE");
cout<< "Ol�, sente-se. \n Eu sou o doutor, pode me chamar de gray. \n Eu sei por qual raz�o voc� veio at� mim, foi para jogar um jogo. \n";
cout<< "Mas o que � um jogo? \n";
cout<< "A) atividade cuja natureza ou finalidade � a divers�o, o conduzindo a fuga da realidade. \n";
cout<< "S) atividade, submetida a regras que estabelecem quem vence e quem perde. \n";

	QUEST();	 // chamando fun��o
	 
	cout << escolha<< "\n";
	
	switch (escolha) { // fracasso subindo
		
	case 'a': 
	cout<< "Essa atividade te leva a outro 'mundo', outra 'realidade', onde voc� � subemetido a regras daquele lugar. \n";
    cout<< "Bom, voc� tem direito a uma pequena liberdade dentro desse mundo, entretanto na maioria dos casos essa � uma 'falsa liberdade'. \n";
    cout<< "Essa 'falsa liberdade' te d� somente a op��o de seguir em frente ou morrer, sendo obrigado a seguir o roteiro, sendo assim o jogo te controla  .\n";
    cout<< "bom, sendo assim voc� s� tem duas op��es: \n A)Se matar. \n ou B)continuar jogando. \n";
		TEMPO();
			break;
    
	
	 case 'S': 
     	cout<< "Ent�o um jogo � bastante parecido com a vida, porqu� ";
	cout<< "na vida, em quase tudo somos subemetidos a regras. \n Em alguns lugares como trabalho e estudo elas estabelecem quem ganha ou perde. \n";
	cout<< "ent�o porque n�o levamos a vida como um jogo? por que levamos a vida t�o � s�rio? \n por qual raz�o n�o nos empenhamos tanto para passar na prova quanto para vencer o chef�o? \n";
	cout<< "A vida, por si s� � um jogo. Mas e voc�? joga para vencer? ou por jogar? Reflita sobre o assunto e me diga a resposta";
	break;
	default: cout<<"nao � uma letra \n OU a letra n�o � valida";
/*
me desculpe pelo jogo curto, mas por causa da falta de tempo devido ao trabalho e os problemas pessoais que venho enfrentando, n�o consegui fazer um jogo mais completo.
*/
} // fracasso subindo
}

