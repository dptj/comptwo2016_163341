#include <vector>
#include <ctime>
#include <string>
#include <iostream> 
#include <stdio.h>
#include <windows.h>


gotoxy(int x, int y) 
{
	COORD pos = {x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos); 
	
}

using namespace std;  


const int MaxCard=52;  
const int Speed=1000;
const int PromptSpeed=2000;


 class Card{
 int number;
 private:   
	string SPADE;  
	string HART;  
	string DIAMOND;  
	string CLOVER;   
 public:
  Card(int number);
  void show();
  Card(){
  	number = 52;
  	SPADE = "♠";
  	HART = "♡";  
    DIAMOND = "◇";  
	CLOVER ="♣";  
	 }
   int Cardpoint()
   {
   	int temp=0;
   	if(number%10==0)
   	{
   		temp=temp+10;
	   }
	else if(number%10<10 )
	{
		temp = temp + number%10;
	}
	else
   {
   	temp = temp + 10;
   }
   return(temp);
	}
  };

 class DeckofCards{
	private:
		vector<Card>number;
		
	public:
	
	DeckofCards();
	
	void init();
	
	void shuffle();
	
	Card getCard();	
};

 Card::Card(int number)
 {
 	this->number = number;
 }

 class BACK
 {
 	public :
 		
 void before(){
 	 int b,back;
 	
 	 cin>>back;
 	 
	 for(b=0;b<back;b++){
	 	if(back==1){
	 		
		 system("cls");
 		cout<<"START"<<endl;
 		break;
     
	 		}
  		}
	}
};


 class MENU{
 	
 public :
 	
 void menu(){
  
  gotoxy(15,5);
 cout << "[king]"<<endl;
 gotoxy(15,6);
 cout << "\n";
 gotoxy(15,7);
 cout << "\n";
 gotoxy(15,8);
 cout << "1.시작\n"<<endl;
 gotoxy(15,9);
 cout << "2.설명\n"<<endl;
 gotoxy(15,10);
 cout << "3.끝\n"<<endl;
 gotoxy(15,12);
 cout << "선택하세요 :"<<endl;
 gotoxy(28,12);

	 }
 };
 
 
 class explanation{
 	public :
 		
 	void explain(){
 		
 		system("cls"); 
	 	gotoxy(0,5);
		cout << "-------------------------------------------------------------------------------------------------------------------"<<endl; 
	 	gotoxy(0,6);
		cout << "게임 규칙"<<endl;
		gotoxy(0,7);
	 	cout << "♠(31~40)>♡(21~30)>◇(11~20)>♣(1~11)"<<endl;
	 	gotoxy(0,8);
	 	cout << "중앙에 40개의 카드 중 한장이 랜덤으로 놓이게 된다."<<endl;
	 	gotoxy(0,9);
		cout << "플레이어는 숫자를 입력하여 중앙의 카드가 무엇인지 맞춘다."<<endl;
	 	gotoxy(0,10);
		cout << "플레이어가 입력한 숫자보다 높으면 위, 낮으면 아래라고 출력한다."<<endl;
	 	gotoxy(0,11);
		cout << "게임은 3판 2선승제로 첫판에서 승리한 사람은 찬스카드를 얻는다."<<endl;
	 	gotoxy(0,12);
		cout << "찬스카드가 중앙의 카드와 계급이 같을경우 패자들은 2번의 기회를 잃는다."<<endl;
	 	gotoxy(0,13);
		cout << "찬스카드가 계급이 다를경우 변수카드로 중앙의 카드가 변수카드의 계급으로 바뀌게되며 승자는 1번의 기회를 더 얻는다."<<endl;
	 	gotoxy(0,14);
		cout << "*찬스카드가 발동하는 것은 모든 플레이어가 2번의 기회를 마쳤을 때 이다."<<endl;
	 	gotoxy(0,15);
		cout << "-------------------------------------------------------------------------------------------------------------------"<<endl;
		gotoxy(0,16);
		cout<<"게임을 시작하려면 1을 누르세요."<<endl;
		
	 }
 };
  
  
 void Card::show()
 {
 	int a;
 	int pattern;
 	int cardnumber;
 	
 	pattern = number/10;
 	cardnumber = number%10;
 	
 	for(a=0;a<=number;a++){
 		if(31<=number<=40){
 			cout<<"♠";
		 }
		 else if(21<=number<=30){
		 	cout<<"◇";
		 } else if(11<=number<=20){
		 	cout<<"♡";
		 } else if(1<=number<=10){
		 	cout<<"♣";
		 }
		 else{
		 	break;
		 }
	 }
 	
 	switch(pattern){
 		case 0:
 			cout<<"♠";
 			break;
 			
 		case 1:
		 	cout<<"◇";
			 break;
			 
		case 2:
			cout<<"♡";
			break;
			
		case 3:
			cout<<"♣";
			break;
		default:
			break;		 	
	 }
	 
	 
 }
 
 
int main() {
 int i,p,game,playerCount;
 MENU M;
 BACK K;	
 explanation E;
 
	M.menu();
 
  cin>>game;
 
 for(i=0;i<game;i++)
 {
 	if(game==1)
 	{
 		system("cls");
 		cout << "게임의 인원을 입력하세요(최대5명까지 가능) :" << endl;
		gotoxy(45,0); 		
 		
 		cin>>playerCount;
 		
 		for(p=0;p<playerCount;p++)
 		{
 		if(playerCount<=5){
		
 		system("cls");
 		cout<<"게임을 시작합니다"<<endl;

			
			break;
				 
			}	
		}
	
	}
	 
	 else if(game==2)
	 {
	 	E.explain();
	 	
		K.before();
		
		break;	
	 }
	 
	 else(game==3);
	 {
		return 0;
	 }
	 
	}
	
}
