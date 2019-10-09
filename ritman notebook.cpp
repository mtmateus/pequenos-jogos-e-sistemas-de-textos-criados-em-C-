#include <iostream> // header de entrada e saida
using namespace std; //bibilioteca de cmd padrão
#include <locale.h> // heade de localização para poder usar acentos

int main (){
 			setlocale (LC_ALL, "PORTUGUESE");
 			int hp = 3;
 				int tempo = 5;

 				cout<< "hp:" <<hp << "\n";
 				char escolha, escolha1, escolha2;
 				 cout<< "Olá hitman. você recebeu uma nova missão.\n";
 cout << "Sua missão é abater dois alvos. \n De acordo com a investigação eles vão se encontrar num galpão as 20 horas de \n amanhã Se prepare. levando sniper, faca de caça, pistola 9mm, C4, gancho(com corda).\n";
 cout<< "Chegando a hora, você está adiantado uma hora e meia para verificar a planta do local e os seguranças.\n Tem 2 seguranças no portão da frente, 2 no de trás e 4 lá dentro. Duas janelas de cada lado do segundo andar  (a 15 metros de altura do chão). \n Você deseja:\n";
 
 cout<< "A) entrar pela frente: \n";
 cout<< "BLOQUEADO) entrar pela janela.(disponivel apenas na compra da DLC) \n";
  cout<< "BLOQUEADO) entrar por trás.(disponivel apenas na compra da DLC) \n";
  do {
 cin>> escolha;
 if (escolha == 'a' || 's' || 'd'){
 escolha = toupper (escolha);
  system ("CLS");
 	switch (escolha) {
	case 'A': 
	cout<< "hp:" <<hp << "\n";
	cout<< "você se aproximou e matou silenciosamente os dois seguranças da entrada principal, cortando as suas gargantas com a faca de caça, logo em seguida escondeu os corpos no lado do galpão\n, após isso entrou no galpão \n";
	cout<< "você pode: \n";
	cout<< "A) entrar e plantar a c4 e sair, ou \n";
	cout<< "BLOQUEADO) entrar e ficar (sistema de combate ainda não está disponivel) \n";
	cin>> escolha;
	escolha = toupper (escolha);
	system ("CLS");
	switch (escolha) {
	case 'A': 
	cout<< "hp:" <<hp << "\n";
	cout<< "agora que os alvos chegaram estranharam a falta dos dois seguranças e decidiram mudar o encontro para outro local e \n mandararam mais 4 seguranças lá pra dentro para te caçar.\n saia de lá pela janela rápido (rapel) ou suba no telhado (com o gancho). \n";
	cout<< "você pode: \n";
	cout<< "A)descer de rapel \n";
	cout<< "S) subir no telhado \n";
	cin>> escolha;
		escolha = toupper (escolha);
		system ("CLS");
		break;
	case '4': cout<< "você não tem bala suficiente para enfrentar 8 seguranças fortemente armados\n (e o sistema de combate ainda não está disponivel),  assim como suas chances são baixas você acaba falecendo";
	break;
	 default: cout<<"nao é uma letra \n OU a letra não é valida";
		}
		break;
	case '2': cout<< "disponivel apenas na compra da DLC \n";
break;
	case '3': cout<< "disponivel apenas na compra da DLC \n";
break;
 default: cout<<"nao é uma letra \n OU a letra não é valida";
} // escolha 1
	 }else {cout<<"nao é uma letra \n OU a letra não é valida";}
	 
	 // subir ou descer
		switch (escolha) { // fracasso descendo
	case 'A': //desce ao chão
	cout<< "você é visto descendo pelos dois seguranças do lado de fora e atiram contra. \n você é atingido e caí de uns 6 metros. \n Mandam os dois seguranças restante no lado de fora atrás de vc. \n Quando eles chegam você: \n";
	cout<< "A) detona a bomba \n";
	cout<< "S) atira nos seguranças \n";
			hp = hp -2;
			cout<< "hp:" <<hp << "\n";
	cin>> escolha;
		escolha = toupper (escolha);
		system ("CLS");
		switch (escolha) { //fracasso descendo - final
	case 'A': 
		cout<< "hp:" <<hp << "\n";
	cout<< "você detona a bomba matando todos lá dentro e distraí eles com a explosão. \n E mata eles com a pistola enquanto os alvos fogem. \n";
	cout<< "Você tenta ir atrás mas está com a perna machucada e acaba perdendo eles de vista. (Fracassou na missão). \n";
hp = hp - 3;
		break;
	case 'S': 
	cout<< "hp:" <<hp << "\n";
	cout<< "você atira nos seguranças, acaba provocando um tiroteio e mata um deles mas acaba morrendo. (Morte do jogador). \n";
	cout<< "você morreu (Fracassou na missão). /n";
			hp = hp -1;		
		break;
		 default: cout<<"nao é uma letra \n OU a letra não é valida";
		} 
	break;
	
	// sobe ao telhado
	case 'S': //sobe ao telhado
	cout<< "hp:" <<hp << "\n";
	cout<< "sobe ao telhado e prepara a sniper. Vê os 4 indivíduos (2 seguranças e os 2 alvos), mas acaba perdendo 3 alvos na esquina de outro galpão. \n";
	cout<< "Z)mata o único cara visível \n"; 
	cout<< "X) corre para frente e salta, explode o galpão. \n";
		cin>> escolha2;
	escolha2 = toupper (escolha2);
	system ("CLS");
	switch (escolha2) { //escolha final
	case 'Z': 
	cout<< "depois de matar um dos seguranças os alvos acabam correndo e o ultimo segurança entra no seu ângulo de tiro para atirar em vc.\n Cada um atira uma bala, ele morre, mas o atinge.\n Agora precisa mudar de local.\n";
	cout<< "você \n";
	cout<< "Z)pula para o galpão mais próximo (a direita) alcança o angulo perfeito para atirar... \n";
	//cout<< "Y) corre para frente e salta explode o galpão... \n";
    hp = hp -1;
 	cout<< "hp:" <<hp << "\n";
	cin>> escolha2;
	escolha2 = toupper (escolha2);
	system ("CLS");
	// FRACASSO
	switch (escolha2) { // ultima decisão: fracasso subindo
	case 'Z': 
	cout<< " mas na hora de fazer foi alvejado pelos outros seguranças que estava no galpão, e uns 2 ainda estão lá. \n";
	cout<< "Eles te cercaram e só resta duas opções:\n";
	cout<< "Z) causar uma distração com o explosivo \n";
	cout<< "X) ou tentar resistir e matá-los\n";
	 hp = hp -1;
 	cout<< "hp:" <<hp << "\n";
	cin>> escolha2;
	escolha2 = toupper (escolha2);
	system ("CLS");
	//
	switch (escolha2) { // fracasso subindo
	case 'Z': 
		cout<< "hp:" <<hp << "\n";
	cout<< "Você corre e pula para o galpão anterior e no ar aciona o explosivo que com a explosão te joga contra a janela. \n";
    cout<< "Tudo o que eles viram foi vc pulando no galpão e logo ele explodindo.\n";
    cout<< " Embora tenha sobrevivido, a missão fracassou pois os alvos fugiram.\n";
    //cout<< "(era pra acabar aqui, mas por alguma razão a resposta daqui tá refletindo nas outras escolhas abaixo) \n";
	hp = hp - 3;
     break;
     case 'X': 
	cout<< " Vc já foi atingido duas vezes e não está tão rápido quanto antes. Embora tenha resistido, foi por pouco tempo e acabou morrendo \n";
	cout<< "game over (era pra acabar aqui, mas não sei onde errei e não acaba) \n";
	 hp = hp -1;
 	cout<< "hp:" <<hp << "\n";
	break;
		default: cout<<"nao é uma letra \n OU a letra não é valida";
} // fracasso subindo
// FRACASSO
} // ultima decisão fracasso subindo
break;
    case 'X':
	cout<< "com a explosão você pegou impulso para voar até o galpão por onde haviam passado os alvos. \n Eles se separaram, um foi para o norte e outro entrou no galpão. \n você procurou um ângulo certeiro e matou o que foi pro norte \n";
	cout<< "Ao disparar o segundo alvo te alvejou por baixo.  O que fará a seguir? \n";
	cout<< "Z)corre, deixa o gancho, e pula.   \n";
	// aqui era pra ter uma variavel de tempo que contaria até 5 e se nesse tempo não tivesse escolhido a opção teria outra ação (automatica) onde o jogador morreria.
	hp = hp -1;
	cout<< "hp:" <<hp << "\n";
  cin>> escolha2;
	escolha2 = toupper (escolha2);
	system ("CLS");
	//break;
  switch (escolha2) {
	case 'Z': 
	cout<< "Em meio a  Uma queda livre de 20 metros tu puxa o gancho e com efeito se joga contra o portão de madeira, quebrando ele todo. \n";
	cout<< "Com a arma empunhada rapidamente faz vários disparos matando o segundo alvo.\n";
	cout<< "Missão concluída com sucesso \n";
	hp = hp-1;
	cout<< "hp:" <<hp << "\n";
	hp = hp -3;
	//default: cout<<"nao é uma letra \n OU a letra não é valida";
  } 
  	 //default: cout<<"nao é uma letra \n OU a letra não é valida";

} // escolha final
	 //default: cout<<"nao é uma letra \n OU a letra não é valida";
	} // escolha 3 fracasso descendo
	
	
	//}// escolha 


 }while (hp <= 3 && hp > 0);
 }// int main
