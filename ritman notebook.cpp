#include <iostream> // header de entrada e saida
using namespace std; //bibilioteca de cmd padr�o
#include <locale.h> // heade de localiza��o para poder usar acentos

int main (){
 			setlocale (LC_ALL, "PORTUGUESE");
 			int hp = 3;
 				int tempo = 5;

 				cout<< "hp:" <<hp << "\n";
 				char escolha, escolha1, escolha2;
 				 cout<< "Ol� hitman. voc� recebeu uma nova miss�o.\n";
 cout << "Sua miss�o � abater dois alvos. \n De acordo com a investiga��o eles v�o se encontrar num galp�o as 20 horas de \n amanh� Se prepare. levando sniper, faca de ca�a, pistola 9mm, C4, gancho(com corda).\n";
 cout<< "Chegando a hora, voc� est� adiantado uma hora e meia para verificar a planta do local e os seguran�as.\n Tem 2 seguran�as no port�o da frente, 2 no de tr�s e 4 l� dentro. Duas janelas de cada lado do segundo andar  (a 15 metros de altura do ch�o). \n Voc� deseja:\n";
 
 cout<< "A) entrar pela frente: \n";
 cout<< "BLOQUEADO) entrar pela janela.(disponivel apenas na compra da DLC) \n";
  cout<< "BLOQUEADO) entrar por tr�s.(disponivel apenas na compra da DLC) \n";
  do {
 cin>> escolha;
 if (escolha == 'a' || 's' || 'd'){
 escolha = toupper (escolha);
  system ("CLS");
 	switch (escolha) {
	case 'A': 
	cout<< "hp:" <<hp << "\n";
	cout<< "voc� se aproximou e matou silenciosamente os dois seguran�as da entrada principal, cortando as suas gargantas com a faca de ca�a, logo em seguida escondeu os corpos no lado do galp�o\n, ap�s isso entrou no galp�o \n";
	cout<< "voc� pode: \n";
	cout<< "A) entrar e plantar a c4 e sair, ou \n";
	cout<< "BLOQUEADO) entrar e ficar (sistema de combate ainda n�o est� disponivel) \n";
	cin>> escolha;
	escolha = toupper (escolha);
	system ("CLS");
	switch (escolha) {
	case 'A': 
	cout<< "hp:" <<hp << "\n";
	cout<< "agora que os alvos chegaram estranharam a falta dos dois seguran�as e decidiram mudar o encontro para outro local e \n mandararam mais 4 seguran�as l� pra dentro para te ca�ar.\n saia de l� pela janela r�pido (rapel) ou suba no telhado (com o gancho). \n";
	cout<< "voc� pode: \n";
	cout<< "A)descer de rapel \n";
	cout<< "S) subir no telhado \n";
	cin>> escolha;
		escolha = toupper (escolha);
		system ("CLS");
		break;
	case '4': cout<< "voc� n�o tem bala suficiente para enfrentar 8 seguran�as fortemente armados\n (e o sistema de combate ainda n�o est� disponivel),  assim como suas chances s�o baixas voc� acaba falecendo";
	break;
	 default: cout<<"nao � uma letra \n OU a letra n�o � valida";
		}
		break;
	case '2': cout<< "disponivel apenas na compra da DLC \n";
break;
	case '3': cout<< "disponivel apenas na compra da DLC \n";
break;
 default: cout<<"nao � uma letra \n OU a letra n�o � valida";
} // escolha 1
	 }else {cout<<"nao � uma letra \n OU a letra n�o � valida";}
	 
	 // subir ou descer
		switch (escolha) { // fracasso descendo
	case 'A': //desce ao ch�o
	cout<< "voc� � visto descendo pelos dois seguran�as do lado de fora e atiram contra. \n voc� � atingido e ca� de uns 6 metros. \n Mandam os dois seguran�as restante no lado de fora atr�s de vc. \n Quando eles chegam voc�: \n";
	cout<< "A) detona a bomba \n";
	cout<< "S) atira nos seguran�as \n";
			hp = hp -2;
			cout<< "hp:" <<hp << "\n";
	cin>> escolha;
		escolha = toupper (escolha);
		system ("CLS");
		switch (escolha) { //fracasso descendo - final
	case 'A': 
		cout<< "hp:" <<hp << "\n";
	cout<< "voc� detona a bomba matando todos l� dentro e distra� eles com a explos�o. \n E mata eles com a pistola enquanto os alvos fogem. \n";
	cout<< "Voc� tenta ir atr�s mas est� com a perna machucada e acaba perdendo eles de vista. (Fracassou na miss�o). \n";
hp = hp - 3;
		break;
	case 'S': 
	cout<< "hp:" <<hp << "\n";
	cout<< "voc� atira nos seguran�as, acaba provocando um tiroteio e mata um deles mas acaba morrendo. (Morte do jogador). \n";
	cout<< "voc� morreu (Fracassou na miss�o). /n";
			hp = hp -1;		
		break;
		 default: cout<<"nao � uma letra \n OU a letra n�o � valida";
		} 
	break;
	
	// sobe ao telhado
	case 'S': //sobe ao telhado
	cout<< "hp:" <<hp << "\n";
	cout<< "sobe ao telhado e prepara a sniper. V� os 4 indiv�duos (2 seguran�as e os 2 alvos), mas acaba perdendo 3 alvos na esquina de outro galp�o. \n";
	cout<< "Z)mata o �nico cara vis�vel \n"; 
	cout<< "X) corre para frente e salta, explode o galp�o. \n";
		cin>> escolha2;
	escolha2 = toupper (escolha2);
	system ("CLS");
	switch (escolha2) { //escolha final
	case 'Z': 
	cout<< "depois de matar um dos seguran�as os alvos acabam correndo e o ultimo seguran�a entra no seu �ngulo de tiro para atirar em vc.\n Cada um atira uma bala, ele morre, mas o atinge.\n Agora precisa mudar de local.\n";
	cout<< "voc� \n";
	cout<< "Z)pula para o galp�o mais pr�ximo (a direita) alcan�a o angulo perfeito para atirar... \n";
	//cout<< "Y) corre para frente e salta explode o galp�o... \n";
    hp = hp -1;
 	cout<< "hp:" <<hp << "\n";
	cin>> escolha2;
	escolha2 = toupper (escolha2);
	system ("CLS");
	// FRACASSO
	switch (escolha2) { // ultima decis�o: fracasso subindo
	case 'Z': 
	cout<< " mas na hora de fazer foi alvejado pelos outros seguran�as que estava no galp�o, e uns 2 ainda est�o l�. \n";
	cout<< "Eles te cercaram e s� resta duas op��es:\n";
	cout<< "Z) causar uma distra��o com o explosivo \n";
	cout<< "X) ou tentar resistir e mat�-los\n";
	 hp = hp -1;
 	cout<< "hp:" <<hp << "\n";
	cin>> escolha2;
	escolha2 = toupper (escolha2);
	system ("CLS");
	//
	switch (escolha2) { // fracasso subindo
	case 'Z': 
		cout<< "hp:" <<hp << "\n";
	cout<< "Voc� corre e pula para o galp�o anterior e no ar aciona o explosivo que com a explos�o te joga contra a janela. \n";
    cout<< "Tudo o que eles viram foi vc pulando no galp�o e logo ele explodindo.\n";
    cout<< " Embora tenha sobrevivido, a miss�o fracassou pois os alvos fugiram.\n";
    //cout<< "(era pra acabar aqui, mas por alguma raz�o a resposta daqui t� refletindo nas outras escolhas abaixo) \n";
	hp = hp - 3;
     break;
     case 'X': 
	cout<< " Vc j� foi atingido duas vezes e n�o est� t�o r�pido quanto antes. Embora tenha resistido, foi por pouco tempo e acabou morrendo \n";
	cout<< "game over (era pra acabar aqui, mas n�o sei onde errei e n�o acaba) \n";
	 hp = hp -1;
 	cout<< "hp:" <<hp << "\n";
	break;
		default: cout<<"nao � uma letra \n OU a letra n�o � valida";
} // fracasso subindo
// FRACASSO
} // ultima decis�o fracasso subindo
break;
    case 'X':
	cout<< "com a explos�o voc� pegou impulso para voar at� o galp�o por onde haviam passado os alvos. \n Eles se separaram, um foi para o norte e outro entrou no galp�o. \n voc� procurou um �ngulo certeiro e matou o que foi pro norte \n";
	cout<< "Ao disparar o segundo alvo te alvejou por baixo.  O que far� a seguir? \n";
	cout<< "Z)corre, deixa o gancho, e pula.   \n";
	// aqui era pra ter uma variavel de tempo que contaria at� 5 e se nesse tempo n�o tivesse escolhido a op��o teria outra a��o (automatica) onde o jogador morreria.
	hp = hp -1;
	cout<< "hp:" <<hp << "\n";
  cin>> escolha2;
	escolha2 = toupper (escolha2);
	system ("CLS");
	//break;
  switch (escolha2) {
	case 'Z': 
	cout<< "Em meio a  Uma queda livre de 20 metros tu puxa o gancho e com efeito se joga contra o port�o de madeira, quebrando ele todo. \n";
	cout<< "Com a arma empunhada rapidamente faz v�rios disparos matando o segundo alvo.\n";
	cout<< "Miss�o conclu�da com sucesso \n";
	hp = hp-1;
	cout<< "hp:" <<hp << "\n";
	hp = hp -3;
	//default: cout<<"nao � uma letra \n OU a letra n�o � valida";
  } 
  	 //default: cout<<"nao � uma letra \n OU a letra n�o � valida";

} // escolha final
	 //default: cout<<"nao � uma letra \n OU a letra n�o � valida";
	} // escolha 3 fracasso descendo
	
	
	//}// escolha 


 }while (hp <= 3 && hp > 0);
 }// int main
