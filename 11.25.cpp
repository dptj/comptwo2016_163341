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
  	SPADE = "��";
  	HART = "��";  
    DIAMOND = "��";  
	CLOVER ="��";  
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
 cout << "1.����\n"<<endl;
 gotoxy(15,9);
 cout << "2.����\n"<<endl;
 gotoxy(15,10);
 cout << "3.��\n"<<endl;
 gotoxy(15,12);
 cout << "�����ϼ��� :"<<endl;
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
		cout << "���� ��Ģ"<<endl;
		gotoxy(0,7);
	 	cout << "��(31~40)>��(21~30)>��(11~20)>��(1~11)"<<endl;
	 	gotoxy(0,8);
	 	cout << "�߾ӿ� 40���� ī�� �� ������ �������� ���̰� �ȴ�."<<endl;
	 	gotoxy(0,9);
		cout << "�÷��̾�� ���ڸ� �Է��Ͽ� �߾��� ī�尡 �������� �����."<<endl;
	 	gotoxy(0,10);
		cout << "�÷��̾ �Է��� ���ں��� ������ ��, ������ �Ʒ���� ����Ѵ�."<<endl;
	 	gotoxy(0,11);
		cout << "������ 3�� 2�������� ù�ǿ��� �¸��� ����� ����ī�带 ��´�."<<endl;
	 	gotoxy(0,12);
		cout << "����ī�尡 �߾��� ī��� ����� ������� ���ڵ��� 2���� ��ȸ�� �Ҵ´�."<<endl;
	 	gotoxy(0,13);
		cout << "����ī�尡 ����� �ٸ���� ����ī��� �߾��� ī�尡 ����ī���� ������� �ٲ�ԵǸ� ���ڴ� 1���� ��ȸ�� �� ��´�."<<endl;
	 	gotoxy(0,14);
		cout << "*����ī�尡 �ߵ��ϴ� ���� ��� �÷��̾ 2���� ��ȸ�� ������ �� �̴�."<<endl;
	 	gotoxy(0,15);
		cout << "-------------------------------------------------------------------------------------------------------------------"<<endl;
		gotoxy(0,16);
		cout<<"������ �����Ϸ��� 1�� ��������."<<endl;
		
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
 			cout<<"��";
		 }
		 else if(21<=number<=30){
		 	cout<<"��";
		 } else if(11<=number<=20){
		 	cout<<"��";
		 } else if(1<=number<=10){
		 	cout<<"��";
		 }
		 else{
		 	break;
		 }
	 }
 	
 	switch(pattern){
 		case 0:
 			cout<<"��";
 			break;
 			
 		case 1:
		 	cout<<"��";
			 break;
			 
		case 2:
			cout<<"��";
			break;
			
		case 3:
			cout<<"��";
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
 		cout << "������ �ο��� �Է��ϼ���(�ִ�5����� ����) :" << endl;
		gotoxy(45,0); 		
 		
 		cin>>playerCount;
 		
 		for(p=0;p<playerCount;p++)
 		{
 		if(playerCount<=5){
		
 		system("cls");
 		cout<<"������ �����մϴ�"<<endl;

			
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
