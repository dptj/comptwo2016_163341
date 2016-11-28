#include <vector>
#include <ctime>
#include <string>
#include <iostream> 
#include <stdio.h>
#include <windows.h>
#include <time.h>


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
		cout << "������ �����Ϸ��� 1�� �Է��ϼ���."<<endl;
		gotoxy(0,17);
		cout << "�����Ϸ��� 2�� �Է��ϼ���"<<endl;
		
	 }
 };

 class BACK
 {
 	public :
 		
 void before(){
 	
 	 explanation E;
 	 MENU M;
 	 int b,back;
 	
 	 cin>>back;
 	 
	 for(b=0;b<back;b++){
	 	if(back==1){
	 		
		 system("cls");
 		cout<<"START"<<endl;
 		break;
     
	 		}
	 		
	 	else if(back==2) 
		 {
		 	system("cls");
		 	
		 	break;
		 	
			 }	
  		}
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
 
 class shuffle
 {
 	public : 
 	
 	int CardShuffle(){
	
	vector<int> LottoNum;
 	for (int i = 0; i < 41; ++i)
	LottoNum.push_back((i+1));
	vector<int> ResultLottoNum;  
 	int NumRand = 0;
 
 	srand((unsigned)time(0));
 
 	for (int i = 0; i < 41; ++i)
  	{
 		vector<int>::iterator vcItr;
 
 		int SelectRandNum = 0;
 		SelectRandNum = rand()%LottoNum.size();  
  
  		vcItr = LottoNum.begin() + SelectRandNum;
  
 		NumRand = *vcItr; 
 		
 		cout << NumRand << " / ";
 
 		if ((i+1)%5 == 0)
 			cout << endl;
 		ResultLottoNum.push_back(NumRand); 
		LottoNum.erase(vcItr);   
	}
	return 0;

 }
 
};

 class stop
 {
 	public :
 		void halt(){
 			
 			system("cls");
 			gotoxy(40,10);
 			cout << "������ �ε����Դϴ�"<< endl;
 			system("PAUSE");
 			gotoxy(45,11);
 			cout << "�ε��Ϸ�" << endl;
 			
 			
		 }
		 
 };
 
int main() {
 int i,p,game,playerCount,play;
 MENU M;
 BACK K;	
 explanation E;
 shuffle S;
 stop T;
 
	M.menu();
 
  cin>>game;
 
 for(i=0;i<game;i++)
 {
 	if(game==1)
 	{
 		system("cls");
 		
 		gotoxy(30,10);
 		cout << "������ �ο��� �Է��ϼ���(�ִ�5����� ����) :" << endl; 		
 		
 		gotoxy(75,10);
 		cin>>playerCount;
 		
 		for(p=0;p<playerCount;p++)
 		{
 		if(playerCount<=5){
 		
 		system("cls");
 		
 		gotoxy(45,10);
 		cout<<"������ �����մϴ�"<<endl;
		
		T.halt();
			
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
	 
	 else;
	 {
		return 0;
	 }
	 
		}
	}
	
