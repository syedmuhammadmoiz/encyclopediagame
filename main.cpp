#include<iostream>
#include<string>
#include<ctime>
#include<Windows.h>
#include<conio.h>
#include<cstdlib>
#include<stdlib.h>
#include<limits>

using namespace std;

class wordlvl1{

	public:
		const int h=10;
		string word[10]={"ant","egg","fat","fox","dog","ice","kid","leg","hen","map"};
		string nword[10]={"nat","geg","fta","oxf","odg","iec","dik","elg","neh","pam"};
        string j;
        int points,p=0;

       void start()
       {
       	for (int i=0;i<h;i++)
            {
                cout<<endl<<endl;
       	    	cout<<"     SHUFFLE WORD : "<<nword[i]<<endl;
       	    	cout<<"     ENTER :";
       		    cin>>j;
       		if (j==word[i])
       		   {
       		    cout<<"                     *******"<<endl;
       		 	cout<<"                    |CORRECT|"<<endl;
       		 	cout<<"                     *******"<<endl<<endl<<endl;
       		 	Sleep(2000);
       		 	system("cls");
       			p++;
			   }
			   else
			   {
			   cout<<"                    !#!WRONG!#!"<<endl<<endl<<endl;
			   Sleep(2000);
			   system("cls");
			   }
		     }
        cout<<endl<<endl;
		cout<<"    YOUR SCORE : "<<p<<endl;
		Sleep(4000);
		system("cls");
		}

};
class wordlvl2:public wordlvl1{
public:
  string mword[10]={"life","love","ring","fish","tree","king","time","sing","star","city"};
  string gword[10]={"ifel","leov","gnir","hisf","tere","ingk","etmi","snig","stra","ciyt"};

 void start1()
 {
             cout<<endl;

             cout<<"                                         Level 2"<<endl;
             cout<<"                                        ---------"<<endl;
                   Sleep(2000);
             cout<<"                                        ##START##";
                   Sleep(2000);
                   system("cls");
       	for (int i=0;i<h;i++)
            {
                cout<<endl<<endl;
       		    cout<<"     SHUFFLE WORD : "<<gword[i]<<endl;
       	    	cout<<"     ENTER :";
                cin>>j;
            if (j==mword[i])
                 {
                  cout<<"                       *******"<<endl;
       		 	  cout<<"                      |CORRECT|"<<endl;
                  cout<<"                       *******"<<endl<<endl<<endl;
                  Sleep(2000);
                  system("cls");
                  p++;
		          }
             else{
                  cout<<"                     !#!WRONG!#!"<<endl<<endl<<endl;
                  Sleep(2000);
                  system("cls");
                 }
		     }
           cout<<endl<<endl;
		   cout<<"    YOUR SCORE : "<<p<<endl;
		   Sleep(4000);
		   system("cls");

	   }
};
class wordlvl3:public wordlvl2
{
    public:
        string eword[10]={"seven","dream","pizza","water","month","three","happy","music","sugar","apple"};
        string rword[10]={"vense","drema","zzapi","wetar","mnoht","eerht","papyh","sicmu","ugars","ppale"};

void start2()
{            cout<<endl;
             cout<<"                                         Level 3"<<endl;
             cout<<"                                        ---------"<<endl;
                   Sleep(2000);
             cout<<"                                        ##START##";
                   Sleep(2000);
                   system("cls");

    for (int i=0;i<h;i++)
        {
                cout<<endl<<endl;
       		    cout<<"     SHUFFLE WORD : "<<rword[i]<<endl;
       	    	cout<<"     ENTER :";
                cin>>j;

        if (j==eword[i])
            {
                cout<<"                   *******"<<endl;
       		 	cout<<"                  |CORRECT|"<<endl;
       		 	cout<<"                   *******"<<endl<<endl<<endl;
       		 	Sleep(2000);
       		 	system("cls");

            p++;
            }
        else{
            cout<<"                      !#!WRONG!#!"<<endl<<endl<<endl;
            Sleep(2000);
            system("cls");
            }
        }
        cout<<endl<<endl;
		cout<<"     YOUR SCORE : "<<p<<endl;
		Sleep(4000);
		system("cls");
}
};


class mazestr{
    public:

static const char space;
static const char me;
static char lvl1[20][20];
static char lvl3[20][20];
static char lvl2[20][20];

};
char const mazestr::me='@';
char const mazestr::space = ' ';
char mazestr::lvl1[20][20]={ {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#','#' , '#', '#', '#', '#', '#'},
                    { 'X', ' ', ' ', ' ', ' ', ' ', '#', '#', '#', '#', '#', '#', '#', '#', '#' , '#', '#', '#', '#', '#'},
                    { '#', ' ', '#', '#', '#', ' ', ' ', '#', '#', '#', '#', '#', '#', '#', '#' , '#', '#', '#', '#', '#'},
                    { '#', ' ', ' ', '#', '#', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#' , '#', '#', '#', '#', '#'},
                    { '#', ' ', ' ', ' ', '#', '#', '#', '#', '#', '#', '#', '#', '#', ' ', '#' , '#', '#', '#', '#', '#'},
                    { '#', ' ', '#', ' ', '#', '#', '#', '#', '#', '#', '#', '#', '#', ' ', ' ' , ' ', '#', '#', '#', '#'},
                    { '#', ' ', '#', ' ', '#', '#', '#', ' ', ' ', ' ', ' ', '#', '#', '#', '#' , ' ', '#', '#', '#', '#'},
                    { '#', ' ', '#', ' ', '#', '#', '#', ' ', '#', '#', ' ', ' ', ' ', '#', '#' , ' ', '#', '#', '#', '#'},
                    { '#', ' ', '#', ' ', '#', '#', '#', ' ', '#', '#', '#', '#', ' ', ' ', '#' , ' ', '#', '#', '#', '#'},
                    { '#', ' ', '#', ' ', '#', '#', '#', ' ', '#', '#', '#', '#', ' ', '#', '#' , ' ', '#', '#', '#', '#'},
                    { '#', ' ', '#', ' ', ' ', ' ', '#', ' ', '#', '#', '#', '#', ' ', '#', '#' , ' ', ' ', ' ', ' ', '#'},
                    { '#', ' ', '#', '#', '#', ' ', '#', ' ', '#', '#', '#', ' ', ' ', ' ', '#' , '#', '#', '#', ' ', '#'},
                    { '#', ' ', '#', '#', '#', ' ', '#', ' ', '#', '#', '#', ' ', '#', ' ', ' ' , '#', '#', '#', ' ', '#'},
                    { '#', ' ', '#', '#', '#', ' ', ' ', ' ', '#', '#', '#', ' ', '#', '#', ' ' , '#', '#', '#', ' ', '#'},
                    { '#', ' ', ' ', ' ', '#', '#', '#', '#', '#', '#', '#', ' ', '#', '#', ' ' , '#', '#', '#', '#', '#'},
                    { '#', '#', '#', ' ', ' ', ' ', '#', '#', '#', ' ', '#', ' ', '#', '#', ' ' , '#', ' ', ' ', ' ', 'X'},
                    { '#', '#', '#', '#', '#', ' ', '#', '#', '#', ' ', '#', ' ', '#', '#', ' ' , '#', ' ', '#', '#', '#'},
                    { '#', '#', '#', '#', '#', ' ', '#', '#', '#', ' ', '#', ' ', ' ', '#', ' ' , ' ', ' ', '#', '#', '#'},
                    { '#', '#', '#', '#', '#', ' ', ' ', ' ', ' ', ' ', '#', '#', ' ', ' ', '#' , '#', '#', '#', '#', '#'},
                    { '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#' , '#', '#', '#', '#', '#'}};

char mazestr::lvl2[20][20] = { { '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#','#', '#', '#', '#', '#' },
                    { '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#','#', '#', '#', '#', '#' },
                    { '#', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' ,'#', '#', '#', '#', '#'},
                    { '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', ' ', '#', '#', '#', ' ' ,' ', '#', '#', '#', '#'},
                    { '#', ' ', ' ', ' ', ' ', '#', '#', '#', '#', '#', ' ', '#', '#', '#', '#' ,' ', ' ', ' ', ' ', '#'},
                    { '#', ' ', '#', '#', ' ', '#', '#', '#', '#', '#', ' ', '#', '#', '#', '#' ,'#', '#', '#', ' ', '#'},
                    { '#', ' ', '#', '#', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', '#', '#', '#' ,'#', '#', '#', ' ', '#'},
                    { '#', ' ', ' ', '#', ' ', '#', '#', '#', '#', '#', ' ', '#', '#', ' ', ' ' ,' ', '#', '#', ' ', '#'},
                    { '#', '#', ' ', '#', ' ', '#', '#', '#', '#', '#', ' ', '#', '#', ' ', '#' ,' ', '#', '#', ' ', '#'},
                    { '#', '#', ' ', '#', ' ', '#', '#', '#', '#', '#', ' ', '#', '#', ' ', '#' ,' ', ' ', '#', ' ', '#'},
                    { '#', '#', ' ', '#', ' ', '#', '#', '#', '#', '#', ' ', '#', '#', ' ', '#' ,'#', ' ', '#', ' ', '#'},
                    { '#', '#', ' ', '#', ' ', '#', '#', ' ', ' ', ' ', ' ', '#', ' ', ' ', '#' ,' ', ' ', '#', ' ', '#'},
                    { '#', '#', ' ', '#', ' ', '#', ' ', ' ', '#', '#', '#', '#', '#', ' ', '#' ,' ', '#', '#', ' ', '#'},
                    { 'X', ' ', ' ', '#', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', '#' ,' ', '#', '#', ' ', '#'},
                    { '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#' ,' ', ' ', ' ', ' ', '#'},
					{ '#', '#', '#', '#', ' ', '#', '#', '#', '#', '#', '#', '#', '#', ' ', '#' ,'#', '#', '#', ' ', 'X'},
                    { '#', '#', '#', '#', ' ', '#', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#' ,'#', '#', '#', ' ', '#'},
                    { '#', '#', '#', '#', ' ', '#', ' ', ' ', '#', '#', '#', '#', '#', '#', '#' ,'#', '#', '#', ' ', '#'},
                    { '#', '#', '#', '#', ' ', ' ', ' ', '#', '#', '#', ' ', ' ', ' ', ' ', ' ' ,' ', ' ', ' ', ' ', '#'},
                    { '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#' ,'#', '#', '#', '#', '#'} };

char mazestr::lvl3[20][20] = { { '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#','#', '#', '#', '#', '#' },
                    { '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#','#', ' ', ' ', ' ', ' ' },
                    { '#', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', '#' ,'#', ' ', '#', '#', 'X'},
                    { '#', ' ', '#', '#', '#', '#', '#', '#', ' ', '#', '#', '#', '#', ' ', '#' ,'#', ' ', '#', '#', '#'},
                    { '#', ' ', '#', '#', '#', '#', '#', '#', ' ', '#', '#', '#', '#', ' ', ' ' ,' ', ' ', '#', '#', '#'},
                    { '#', ' ', ' ', ' ', ' ', ' ', '#', '#', ' ', '#', '#', '#', '#', '#', '#' ,'#', '#', '#', ' ', '#'},
                    { '#', ' ', '#', '#', '#', ' ', '#', '#', ' ', '#', '#', '#', '#', '#', '#' ,'#', '#', ' ', ' ', '#'},
                    { '#', ' ', '#', '#', '#', ' ', '#', '#', ' ', '#', '#', '#', '#', '#', '#' ,'#', ' ', ' ', '#', '#'},
                    { '#', ' ', '#', '#', '#', ' ', '#', '#', ' ', ' ', ' ', ' ', '#', '#', '#' ,' ', ' ', '#', '#', '#'},
                    { '#', ' ', ' ', '#', '#', ' ', '#', '#', '#', '#', '#', ' ', '#', '#', '#' ,' ', '#', '#', ' ', '#'},
                    { '#', '#', ' ', ' ', '#', ' ', '#', '#', '#', '#', '#', ' ', '#', ' ', ' ' ,' ', '#', '#', ' ', '#'},
                    { '#', '#', '#', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', '#', '#', '#' ,' ', '#', '#', ' ', '#'},
                    { '#', '#', '#', ' ', '#', '#', '#', '#', '#', ' ', '#', ' ', '#', '#', '#' ,' ', '#', '#', ' ', '#'},
                    { 'X', ' ', '#', ' ', '#', ' ', '#', '#', '#', ' ', '#', ' ', '#', '#', ' ' ,' ', '#', ' ', ' ', '#'},
                    { '#', ' ', '#', ' ', '#', ' ', ' ', '#', ' ', ' ', ' ', ' ', '#', '#', ' ' ,'#', '#', ' ', '#', '#'},
					{ '#', ' ', '#', ' ', '#', ' ', '#', '#', ' ', '#', ' ', ' ', ' ', ' ', ' ' ,'#', '#', ' ', '#', '#'},
                    { '#', ' ', '#', ' ', '#', ' ', '#', '#', ' ', ' ', '#', '#', '#', ' ', '#' ,'#', '#', ' ', '#', '#'},
                    { '#', ' ', ' ', ' ', ' ', ' ', '#', '#', '#', ' ', ' ', ' ', ' ', ' ', ' ' ,' ', ' ', ' ', '#', '#'},
                    { '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#' ,'#', '#', '#', '#', '#'},
                    { '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#' ,'#', '#', '#', '#', '#'} };

class Maze:public mazestr{
    public:
void welcome(){
    cout << "\t\t\t=================================================\n";
	cout << "\t\t\t|                                               |\n";
	cout << "\t\t\t|        -----------------------------          |\n";
	cout << "\t\t\t|        |          WELCOME          |          |\n";
	cout << "\t\t\t|        |            TO             |          |\n";
	cout << "\t\t\t|        |        PUZZLE MAZE        |          |\n";
	cout << "\t\t\t|        -----------------------------          |\n";
    cout << "\t\t\t|                                               |\n";
	cout << "\t\t\t=================================================\n\n";

	cout<<"                                            LEVEL 1      "<<endl;
    cout<<"                                           ---------      "<<endl;
    Sleep(2000);
    cout<<"                                           ##START##       ";
    Sleep(2000);
    system("cls");
    cout<<endl<<"\t\t          USE THE ARROW KEYS TO MOVE '@' TO 'X'";
}
void setMe(int lvl){
int x,y;
if(lvl==1){
    x=getX(lvl,y);
    lvl1[x][y]=me;
}
if (lvl==2){
    x=getX(lvl,y);
    lvl2[x][y]=me;
}
if (lvl==3){
    x=getX(lvl,y);
    lvl3[x][y]=me;
}
}

void printLevel(int lvl){
    cout << "\n\n\n\n\n";
    if (lvl == 1){
        for (int i = 0; i != 20; ++i){
            cout << endl << "\t\t\t\t";
            for (int j = 0; j != 20; ++j){
                cout << lvl1[i][j];
            }
        } cout << endl;
    }
    if (lvl == 2){
        for (int i = 0; i != 20; ++i){
            cout << endl << "\t\t\t\t";
            for (int j = 0; j != 20; ++j){
                cout << lvl2[i][j];
            }
        } cout << endl;
    }
     if (lvl == 3){
        for (int i = 0; i != 20; ++i){
            cout << endl << "\t\t\t\t";
            for (int j = 0; j != 20; ++j){
                cout << lvl3[i][j];
            }
        } cout << endl;
    }
}

char getKeyPress(){

    char key = 127;
    key = _getch();

    if (key == 0 || key == -32){

        key = _getch();

        if (key == 72) {
            key = 'u';
        } else if (key == 75){
            key = 'l';
        } else if (key == 77){
            key = 'r';
        } else if (key == 80){
            key = 'd';
        }
     }
    return key;
}

bool isExit(int x, int y, int lvl){
    if (lvl == 1){
        if (lvl1[x][y] == 'X'){

            return true;
        }
        else {
            return false;
        }
    }
     if (lvl == 2){
        if (lvl2[x][y] == 'X'){
            return true;
        }
        else {
            return false;
        }
    }
       if (lvl == 3){
        if (lvl3[x][y] == 'X'){
            return true;
        }
        else {
            return false;
        }
    }
    return true;
}
int getPos(int lvl, int &y){
    int xCoord;
    if (lvl == 1){
        for (int i = 0; i != 20; ++i){
            for (int j = 0; j != 20; ++j){
                if (lvl1[i][j] == '@'){
                    xCoord = i;
                    y = j;
                    return xCoord;
                }
            }
        }
    }
    if (lvl == 2){
        for (int i = 0; i != 20; ++i){
            for (int j = 0; j != 20; ++j){
                if (lvl2[i][j] == '@'){
                    xCoord = i;
                    y = j;
                    return xCoord;
                }
            }
        }
    }
     if (lvl == 3){
        for (int i = 0; i != 20; ++i){
            for (int j = 0; j != 20; ++j){
                if (lvl3[i][j] == '@'){
                    xCoord = i;
                    y = j;
                    return xCoord;
                }
            }
        }
    }
    return 0;
}

bool isWall(int x, int y, int lvl){
    if (lvl == 1){
        if (lvl1[x][y] == '#'){
            cout << "\n\t\t\tCannot move! That is a wall / boundary.";
            Sleep(400);
            system("CLS");
            printLevel(lvl);
            return true;
        }
        else {
            return false;
        }
    }
    if (lvl == 2){
        if (lvl2[x][y] == '#'){
            cout << "\n\t\t\tCannot move! That is a wall / boundary.";
            Sleep(400);
            system("CLS");
            printLevel(lvl);
            return true;
        }
        else {
            return false;
        }
    }
        if (lvl == 3){
        if (lvl3[x][y] == '#'){
            cout << "\n\t\t\tCannot move! That is a wall / boundary.";
            Sleep(400);
            system("CLS");
            printLevel(lvl);
            return true;
        }
        else {
            return false;
        }
    }
    return true;
}

int getX(int lvl, int &y){
    int xCoord;
    if (lvl == 1){
        for (int i = 0; i != 20; ++i){
            for (int j = 0; j != 20; ++j){
                if (lvl1[i][j] == 'X'){
                    xCoord = i;
                    y = j;
                    return xCoord;
                }
            }
        }
    }
     if (lvl == 2){
        for (int i = 0; i != 20; ++i){
            for (int j = 0; j != 20; ++j){
                if (lvl2[i][j] == 'X'){
                    xCoord = i;
                    y = j;
                    return xCoord;
                }
            }
        }
    }
      if (lvl == 3){
        for (int i = 0; i != 20; ++i){
            for (int j = 0; j != 20; ++j){
                if (lvl3[i][j] == 'X'){
                    xCoord = i;
                    y = j;
                    return xCoord;
                }
            }
        }
    }
    return 0;
}

void update(int lvl, int x, int y){
    if (lvl == 1){
        lvl1[x][y] = me;
        printLevel(lvl);
    }
    if (lvl == 2){
        lvl2[x][y] = me;
        printLevel(lvl);
    }
    if (lvl == 3){
        lvl3[x][y] = me;
        printLevel(lvl);
    }
}

void makeSpace(int lvl, int x, int y){
    if (lvl == 1){
        lvl1[x][y] = space;
    }
    if (lvl == 2){
        lvl2[x][y] = space;
    }
     if (lvl == 3){
        lvl3[x][y] = space;
    }
}
};


class splashmath{

private:
    int choice;

public:
    int n1,n2,n3,n4,n5,n6,p=0;
    double ans;
    double total;


void setnumber1(int no1)
{
     n1=no1;
}

void setnumber2(int no2)
{
     n2=no2;
}

void setchoice(int c)
{
     choice=c;
}

void adittion1(){
    ad:
              cout<<endl<<endl;
           cout<<"    WHAT IS : "<<n1<<"  +  "<<n2<<"  ?"<<endl;
           cout<<"    ENTER : ";
           cin>>ans;
           if(!cin.fail()){
           total=n1+n2;

     if(ans==n1+n2){
                cout<<"                   *******"<<endl;
       		 	cout<<"                  |CORRECT|"<<endl;
       		 	cout<<"                   *******"<<endl<<endl<<endl;
           Sleep(2000);
           system("cls");
           p++;
           }
     else{
           cout<<"                     !#!WRONG!#!"<<endl<<endl<<endl;
           Sleep(2000);
           system("cls");
         }
           }
           else{ cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout<<endl;
            cout<<"                    !!ENTER AN INTEGER PLEASE!!";
            Sleep(2000);
            system("cls");
            goto ad;}
}
void addition2(){
    ad1:
       cout<<endl<<endl;
           cout<<"    WHAT IS : "<<n3<<"  +  "<<n4<<"  ?"<<endl;
           cout<<"    ENTER : ";
           cin>>ans;
           if(!cin.fail()){
           total=n3+n4;

     if(ans==n3+n4){
                cout<<"                   *******"<<endl;
       		 	cout<<"                  |CORRECT|"<<endl;
       		 	cout<<"                   *******"<<endl<<endl<<endl;
           Sleep(2000);
           system("cls");
           p++;
           }
     else{
           cout<<"                     !#!WRONG!#!"<<endl<<endl<<endl;
           Sleep(2000);
           system("cls");
         }
           }
            else{ cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout<<endl;
            cout<<"                    !!ENTER AN INTEGER PLEASE!!";
            Sleep(2000);
            system("cls");
            goto ad1;}
}
void addition3(){
    ad3:
       cout<<endl<<endl;
       cout<<"    WHAT IS : "<<n5<<"  +  "<<n6<<"  ?"<<endl;
       cout<<"    ENTER : ";
           cin>>ans;
           if(!cin.fail()){
           total=n5+n6;

     if(ans==n5+n6){
                cout<<"                   *******"<<endl;
       		 	cout<<"                  |CORRECT|"<<endl;
       		 	cout<<"                   *******"<<endl<<endl<<endl;
           Sleep(2000);
           system("cls");
           p++;
           }
     else{
           cout<<"                     !#!WRONG!#!"<<endl<<endl<<endl;
           Sleep(2000);
           system("cls");
         }
           }
            else{ cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout<<endl;
            cout<<"                    !!ENTER AN INTEGER PLEASE!!";
            Sleep(2000);
            system("cls");
            goto ad3;}
}

void subtraction1(){
    sub:
              cout<<endl<<endl;
           cout<<"    WHAT IS :  "<<n1<<"  -  "<<n2<<"  ?"<<endl;
           cout<<"    ENTER : ";
           cin>>ans;
           if(!cin.fail()){
           total=n1-n2;

      if(ans==n1-n2){
                cout<<"                   *******"<<endl;
       		 	cout<<"                  |CORRECT|"<<endl;
       		 	cout<<"                   *******"<<endl<<endl<<endl;
             Sleep(2000);
           system("cls");
           p++;
             }
      else{
            cout<<"                     !#!WRONG!#!"<<endl<<endl<<endl;
             Sleep(2000);
           system("cls");
          }
           }
             else{ cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout<<endl;
            cout<<"                    !!ENTER AN INTEGER PLEASE!!";
            Sleep(2000);
            system("cls");
            goto sub;}
}
void subtraction2(){
    sub1:
                 cout<<endl<<endl;
           cout<<"    WHAT IS : "<<n3<<"  -  "<<n4<<"  ?"<<endl;
           cout<<"    ENTER : ";
           cin>>ans;
           if(!cin.fail()){
           total=n3-n4;

      if(ans==n3-n4){
                cout<<"                   *******"<<endl;
       		 	cout<<"                  |CORRECT|"<<endl;
       		 	cout<<"                   *******"<<endl<<endl<<endl;
           Sleep(2000);
           system("cls");
           p++;
             }
      else{
            cout<<"                     !#!WRONG!#!"<<endl<<endl<<endl;
             Sleep(2000);
           system("cls");
          }
           }
             else{ cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout<<endl;
            cout<<"                    !!ENTER AN INTEGER PLEASE!!";
            Sleep(2000);
            system("cls");
            goto sub1;}
}
void subtraction3(){
    sub2:
               cout<<endl<<endl;
           cout<<"    WHAT IS : "<<n5<<"  -  "<<n6<<"  ?"<<endl;
           cout<<"    ENTER : ";
           cin>>ans;
           if(!cin.fail()){
           total=n5-n6;

      if(ans==n5-n6){
                cout<<"                   *******"<<endl;
       		 	cout<<"                  |CORRECT|"<<endl;
       		 	cout<<"                   *******"<<endl<<endl<<endl;
             Sleep(2000);
           system("cls");
           p++;
             }
      else{
            cout<<"                     !#!WRONG!#!"<<endl<<endl<<endl;
             Sleep(2000);
           system("cls");
          }
           }
             else{ cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout<<endl;
            cout<<"                    !!ENTER AN INTEGER PLEASE!!";
            Sleep(2000);
            system("cls");
            goto sub2;}
}

void multiply1(){
    mul:
                cout<<endl<<endl;
         cout<<"    WHAT IS : "<<n1<<"  *  "<<n2<<"  ?"<<endl;
         cout<<"    ENTER : ";
         cin>>ans;
         if(!cin.fail()){
         total=n1*n2;

    if(ans==n1*n2){
                cout<<"                   *******"<<endl;
       		 	cout<<"                  |CORRECT|"<<endl;
       		 	cout<<"                   *******"<<endl<<endl<<endl;
           Sleep(2000);
           system("cls");
           p++;
         }
    else{
         cout<<"                     !#!WRONG!#!"<<endl<<endl<<endl;
           Sleep(2000);
           system("cls");
         }
         }
            else{ cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout<<endl;
            cout<<"                    !!ENTER AN INTEGER PLEASE!!";
            Sleep(2000);
            system("cls");
            goto mul;}
}

void multiply2(){
    mul1:
            cout<<endl<<endl;
         cout<<"    WHAT IS : "<<n3<<"  *  "<<n4<<"  ?"<<endl;
         cout<<"    ENTER : ";
        cin>>ans;
        if(!cin.fail()){
         total=n3*n4;

    if(ans==n3*n4){
               cout<<"                   *******"<<endl;
       		 	cout<<"                  |CORRECT|"<<endl;
       		 	cout<<"                   *******"<<endl<<endl<<endl;
                  Sleep(2000);
           system("cls");
           p++;
         }
    else{
         cout<<"                     !#!WRONG!#!"<<endl<<endl<<endl;
           Sleep(2000);
           system("cls");
         }
        }
            else{ cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout<<endl;
            cout<<"                    !!ENTER AN INTEGER PLEASE!!";
            Sleep(2000);
            system("cls");
            goto mul1;}
}

void multiply3(){
    mul2:
            cout<<endl<<endl;
         cout<<"    WHAT IS : "<<n5<<"  *  "<<n6<<"  ?"<<endl;
         cout<<"    ENTER : ";
         cin>>ans;
         if(!cin.fail()){
         total=n5*n6;

    if(ans==n5*n6){
                cout<<"                   *******"<<endl;
       		 	cout<<"                  |CORRECT|"<<endl;
       		 	cout<<"                   *******"<<endl<<endl<<endl;
           Sleep(2000);
           system("cls");
           p++;
         }
    else{
         cout<<"                     !#!WRONG!#!"<<endl<<endl<<endl;
           Sleep(2000);
           system("cls");
         }
         }
            else{ cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout<<endl;
            cout<<"                    !!ENTER AN INTEGER PLEASE!!";
            Sleep(2000);
            system("cls");
            goto mul2;}
}

void divide1(){
    dvd:
                  cout<<endl<<endl;
           cout<<"    WHAT IS: "<<n1<<"  /  "<<n2<<"  ?"<<endl;
           cout<<"    ENTER : ";
          cin>>ans;
          if(!cin.fail()){
          total=n1/n2;

     if(ans==n1/n2){
                cout<<"                   *******"<<endl;
       		 	cout<<"                  |CORRECT|"<<endl;
       		 	cout<<"                   *******"<<endl<<endl<<endl;
             Sleep(2000);
           system("cls");
           p++;
           }
     else{
           cout<<"                     !#!WRONG!#!"<<endl<<endl<<endl;
             Sleep(2000);
           system("cls");
         }
          }
                     else{ cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout<<endl;
            cout<<"                    !!ENTER AN INTEGER PLEASE!!";
            Sleep(2000);
            system("cls");
            goto dvd;}
}
void divide2(){
    dvd1:
             cout<<endl<<endl;
          cout<<"    WHAT IS : "<<n3<<"  /  "<<n4<<"  ?"<<endl;
          cout<<"    ENTER : ";
          cin>>ans;
          if(!cin.fail()){
          total=n3/n4;

     if(ans==n3/n4){
                cout<<"                   *******"<<endl;
       		 	cout<<"                  |CORRECT|"<<endl;
       		 	cout<<"                   *******"<<endl<<endl<<endl;
             Sleep(2000);
           system("cls");
           p++;
           }
     else{
           cout<<"                     !#!WRONG!#!"<<endl<<endl<<endl;
             Sleep(2000);
           system("cls");
         }
          }
                     else{ cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout<<endl;
            cout<<"                    !!ENTER AN INTEGER PLEASE!!";
            Sleep(2000);
            system("cls");
            goto dvd1;}
}
void divide3(){
    dvd2:
             cout<<endl<<endl;
          cout<<"    WHAT IS : "<<n5<<"  /  "<<n6<<"  ?"<<endl;
          cout<<"    ENTER : ";
          cin>>ans;
          if(!cin.fail()){
          total=n5/n6;

     if(ans==n5/n6){
                cout<<"                   *******"<<endl;
       		 	cout<<"                  |CORRECT|"<<endl;
       		 	cout<<"                   *******"<<endl<<endl<<endl;
       		 	 Sleep(2000);
           system("cls");
           p++;
           }
     else{
           cout<<"                     !#!WRONG!#!"<<endl<<endl<<endl;
             Sleep(2000);
           system("cls");
         }
          }
                     else{ cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout<<endl;
            cout<<"                    !!ENTER AN INTEGER PLEASE!!";
            Sleep(2000);
            system("cls");
            goto dvd2;}
}


};


int main(){
    bool cont=true;
    int c;
	string a;
	int b;
    int r;
	splashmath obj;
	wordlvl3 ob;
        pos:
	    start:
        up:
        jump:
    cout<<endl<<"                                 _____________________________________________________";
	cout<<endl<<"                                |                                                     |";
    cout<<endl<<"                                |                                                     |";
    cout<<endl<<"                                |               **********************                |";
    cout<<endl<<"                                |                    ENCYCLOPEDIA                     |";
    cout<<endl<<"                                |                        GAME                         |";
    cout<<endl<<"                                |               **********************                |";
    cout<<endl<<"                                |                                                     |";
    cout<<endl<<"                                |                                                     |";
    cout<<endl<<"                                |          press '1' to play or '2' to quit           |";
    cout<<endl<<"                                |                                                     |";
    cout<<endl<<"                                |_____________________________________________________|"<<endl;

    cout<<"\n\n\n\n";
    cout<<"Enter : ";
    cin>>r;

if(!cin.fail()){
    switch(r){
    	case 1:{

    	    system("cls");
           tro:
    	    cout<<endl;
                    cout<<endl<<"\t\t              ********************************************************";
                    cout<<endl<<"\t\t             |                                                        |";
                    cout<<endl<<"\t\t             |  Instructions :                                        |";
	                cout<<endl<<"\t\t             |             This is 3 in 1 Encyclopedia Game           |";
	                cout<<endl<<"\t\t             |             Enter Age from 3 to 5 for SHUFFLE WORD     |";
	                cout<<endl<<"\t\t             |             Enter age from 6 to 8 for PUZZLE MAZE      |";
	                cout<<endl<<"\t\t             |             Enter age from 9 to 12 for SPLASH MATHS    |";
	                cout<<endl<<"\t\t             |                                                        |";
	                cout<<endl<<"\t\t              ********************************************************";
	                cout<<"\n\n\n\n\n";
             Sleep(2000);
                cout<<endl;
                cin.ignore();
    		cout<<"ENTER NAME : ";
    		getline(cin,a);
    		cout<<endl;
    		cout<<"ENTER AGE : ";
    		cin>>b;

    		if(b>=3&&b<=12){
    		cout<<endl;
               system("cls");

    		if(b>=3&&b<=5){
    cout << "\t\t\t=================================================\n";
	cout << "\t\t\t|                                               |\n";
	cout << "\t\t\t|        -----------------------------          |\n";
	cout << "\t\t\t|        |          WELCOME          |          |\n";
	cout << "\t\t\t|        |            TO             |          |\n";
	cout << "\t\t\t|        |       SHUFFLE WORDS       |          |\n";
	cout << "\t\t\t|        -----------------------------          |\n";
    cout << "\t\t\t|                                               |\n";
	cout << "\t\t\t=================================================\n\n";
	Sleep(2000);
	cout<<"                                            LEVEL 1      "<<endl;
    cout<<"                                           ---------      "<<endl;
    Sleep(2000);
    cout<<"                                           ##START##       ";
    Sleep(2000);
    system("cls");

    			ob.start();
                    ob.start1();
                        ob.start2();
                        system("cls");
                        cout<<endl;
            cout<<"                                       --------- "<<endl;
            cout<<"                                       GAME OVER  "<<endl;
            cout<<"                                       --------- "<<endl;
            Sleep(2000);
               system("cls");
            goto start;
			}
			else if(b>=6&&b<=8){

     Maze obj;
     obj.welcome();
     int lvl=1;


do
{
   obj.setMe(lvl);
    obj.printLevel(lvl);
    int x, y;

while(lvl<4)
    {

        char move = obj.getKeyPress();

        switch (move){

        case 'u':
            x = obj.getPos(lvl, y);
            if (!obj.isWall(x - 1, y, lvl)){
                if (obj.isExit(x - 1, y, lvl)){
                    system("CLS");
               cout<<endl;
                cout<<"                                        -------"<<endl;
                cout<<"                                        YOU WIN "<<endl;
                cout<<"                                        -------"<<endl;
                Sleep(2000);
                system("cls");
                cout<<endl;
                cout<<"                                       --------- "<<endl;
                cout<<"                                       GAME OVER  "<<endl;
                cout<<"                                       --------- "<<endl;
                 Sleep(2000);
                 system("cls");
                    lvl++;
                }
                system("CLS");
                obj.makeSpace(lvl, x, y);
                obj.update(lvl, x - 1, y);
            }
            break;
        case 'd':
            x = obj.getPos(lvl, y);
            if (!obj.isWall(x + 1, y, lvl)){
                if (obj.isExit(x + 1, y, lvl)){
                    system("CLS");
                    cout<<endl;
                cout<<"                                        -------"<<endl;
                cout<<"                                        YOU WIN "<<endl;
                cout<<"                                        -------"<<endl;
                    Sleep(2000);
                    system("cls");
                     cout<<endl;
                cout<<"                                       --------- "<<endl;
                cout<<"                                       GAME OVER  "<<endl;
                cout<<"                                       --------- "<<endl;
                 Sleep(2000);
                 system("cls");
                    lvl++;
                }
                system("CLS");
                obj.makeSpace(lvl, x, y);
                obj.update(lvl, x + 1, y);
            }
            break;
        case 'l':
            x = obj.getPos(lvl, y);
            if (!obj.isWall(x, y - 1, lvl)){
                if (obj.isExit(x, y - 1, lvl)){
                    system("CLS");
      cout<<"                                          LEVEL 3"<<endl;
      cout<<"                                         ---------"<<endl;
    Sleep(2000);
      cout<<"                                         ##START##";
            Sleep(2000);
                    lvl++;
                }
                system("CLS");
                obj.makeSpace(lvl, x, y);
                obj.update(lvl, x, y - 1);
            }
            break;
        case 'r':
            x = obj.getPos(lvl, y);
            if (!obj.isWall(x, y + 1, lvl)){
                if (obj.isExit(x, y + 1, lvl)){
                    system("CLS");
      cout<<"                                          LEVEL 2"<<endl;
      cout<<"                                         ---------"<<endl;
    Sleep(2000);
      cout<<"                                         ##START##";
                    Sleep(2000);
                    lvl++;
                }
                system("CLS");
                obj.makeSpace(lvl, x, y);
                obj.update(lvl, x, y + 1);
            }
            break;
        default:
            if(lvl==4)
        {
            break;
        }

        }
    }
goto up;
}while(lvl<4);
}

			else if (b>=9&&b<=12){
math:

    cout << "\t\t\t=================================================\n";
	cout << "\t\t\t|                                               |\n";
	cout << "\t\t\t|        -----------------------------          |\n";
	cout << "\t\t\t|        |          WELCOME          |          |\n";
	cout << "\t\t\t|        |            TO             |          |\n";
	cout << "\t\t\t|        |        SPLASH MATHS       |          |\n";
	cout << "\t\t\t|        -----------------------------          |\n";
    cout << "\t\t\t|                                               |\n";
    cout << "\t\t\t|                                               |\n";
	cout << "\t\t\t=================================================\n\n\n";

				cout << "\t\t\t\t          -- Menu --" << endl<<endl;
                cout << "\t\t\t\t   PRESS              1: Add" << endl;
                cout << "\t\t\t\t   PRESS              2: Subtract" << endl;
                cout << "\t\t\t\t   PRESS              3: Multiply" << endl;
                cout << "\t\t\t\t   PRESS              4: Divide" << endl;
                cout << "\t\t\t\t   PRESS              0: Exit" << endl<<endl<<endl;
                cout<<"ENTER : ";
                cin >>c;
                system("cls");
                obj.setchoice(c);
                switch(c){
                case 1:{
      cout<<"                                          LEVEL 1"<<endl;
      cout<<"                                         ---------"<<endl;
    Sleep(2000);
      cout<<"                                         ##START##";
       Sleep(2000);
      system("cls");

                    for(int i=1;i<=10;i++){
                    srand(time(0));
                    obj.n1 = rand() % 20;
                    obj.n2 = rand() % 20 + 1;
                    obj.adittion1();
                }
                 cout<<endl<<endl;
		cout<<"     YOUR SCORE : "<<obj.p<<endl;
		Sleep(4000);
		system("cls");
      cout<<"                                          LEVEL 2"<<endl;
      cout<<"                                         ---------"<<endl;
    Sleep(2000);
      cout<<"                                         ##START##";
       Sleep(2000);
      system("cls");
                 for(int m=1;m<=10;m++){
                    srand(time(0));
                    obj.n3=rand()% 20+30;
                    obj.n4=rand()% 20+40;
                obj.addition2();
                }
                 cout<<endl<<endl;
		cout<<"     YOUR SCORE : "<<obj.p<<endl;
		Sleep(4000);
		system("cls");
      cout<<"                                          LEVEL 3"<<endl;
      cout<<"                                         ---------"<<endl;
    Sleep(2000);
      cout<<"                                         ##START##";
       Sleep(2000);
       system("cls");
                 for(int z=1;z<=10;z++){
                    srand(time(0));
                    obj.n5=rand()%30+40;
                    obj.n6=rand()%30+40;
                obj.addition3();
                }
                 cout<<endl<<endl;
		cout<<"     YOUR SCORE : "<<obj.p<<endl;
		Sleep(4000);
		system("cls");

                break;
                }
                case 2:{
      cout<<"                                          LEVEL 1"<<endl;
      cout<<"                                         ---------"<<endl;
    Sleep(2000);
      cout<<"                                         ##START##";
       Sleep(2000);
       system("cls");
                         for(int i=1;i<=10;i++){
                    srand(time(0));
                    obj.n1 = rand() % 20;
                    obj.n2 = rand() % 20 + 1;

                obj.subtraction1();
                }
      cout<<"                                          LEVEL 2"<<endl;
      cout<<"                                         ---------"<<endl;
    Sleep(2000);
      cout<<"                                         ##START##";
       Sleep(2000);
       system("cls");
                 for(int m=1;m<=10;m++){
                    srand(time(0));
                    obj.n3=rand()% 20+30;
                    obj.n4=rand()% 20+40;
                obj.subtraction2();
                }
      cout<<"                                          LEVEL 3"<<endl;
      cout<<"                                         ---------"<<endl;
    Sleep(2000);
      cout<<"                                         ##START##";
       Sleep(2000);
       system("cls");
                 for(int z=1;z<=10;z++){
                    srand(time(0));
                    obj.n5=rand()%30+40;
                    obj.n6=rand()%30+40;
                obj.subtraction3();
                }
                   break;
                }
                case 3:{
      cout<<"                                          LEVEL 1"<<endl;
      cout<<"                                         ---------"<<endl;
     system("cls");
      cout<<"                                         ##START##";
       Sleep(2000);
 system("cls");
                for(int i=1;i<=10;i++){
                    srand(time(0));
                    obj.n1 = rand() % 10;
                    obj.n2 = rand() % 10 + 1;
                    obj.multiply1();
                }
      cout<<"                                          LEVEL 2"<<endl;
      cout<<"                                         ---------"<<endl;
    Sleep(2000);
      cout<<"                                         ##START##";
       Sleep(2000);
       system("cls");
                 for(int m=1;m<=10;m++){
                    srand(time(0));
                    obj.n3=rand()% 10+1;
                    obj.n4=rand()% 5+15;
                    obj.multiply2();
                }
      cout<<"                                          LEVEL 3"<<endl;
      cout<<"                                         ---------"<<endl;
    Sleep(2000);
      cout<<"                                         ##START##";
       Sleep(2000);
                 system("cls");
                  for(int z=1;z<=10;z++){
                    srand(time(0));
                    obj.n5=rand()%10;
                    obj.n6=rand()%10+25;
                    obj.multiply3();
                }
                break;
                }
                  case 4:{
      cout<<"                                          LEVEL 1"<<endl;
      cout<<"                                         ---------"<<endl;
    Sleep(2000);
      cout<<"                                         ##START##";
       Sleep(2000);
       system("cls");
                   for(int i=1;i<=10;i++){
                    srand(time(0));
                    obj.n1 =2*rand() % 10+2;
                    obj.n2 =2*rand() % 20+2;
                    obj.divide1();
                }
      cout<<"                                          LEVEL 2"<<endl;
      cout<<"                                         ---------"<<endl;
    Sleep(2000);
      cout<<"                                         ##START##";
       Sleep(2000);
       system("cls");
                 for(int m=1;m<=10;m++){
                    srand(time(0));
                    obj.n3=2*rand()% 20+2;
                    obj.n4=2*rand()% 40+2;
                    obj.divide2();
                }
      cout<<"                                          LEVEL 3"<<endl;
      cout<<"                                         ---------"<<endl;
    Sleep(2000);
      cout<<"                                         ##START##";
       Sleep(2000);
       system("cls");
                 for(int z=1;z<=10;z++){
                    srand(time(0));
                    obj.n5=2*rand()%40+2;
                    obj.n6=2*rand()%60+2;
                    obj.divide3();
                }
                break;
                }
                case 0:{
                  cout<< endl;
                  cout<<"                                -----------------"<<endl;
                  cout<<"                                YOU CHOSE TO EXIT"<<endl;
                  cout<<"                                -----------------"<<endl;
                   Sleep(2000);
                   system("cls");
                  goto jump;
                }

                default:{
                cout<< endl;
                  cout<<"                                -----------------"<<endl;
                  cout<<"                             FOLLOW THE INSTRUCTIONS"<<endl;
                  cout<<"                                -----------------"<<endl;
                   Sleep(2000);
                   system("cls");
                  goto math;
                  break;
                }

                }
                }

		}
		else{
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout<<endl;
            cout<<"                     Please Follow The Instructions";
            Sleep(2000);
            system("cls");
            goto tro;
		}

		}
		case 2:{
			break;
		}
		}
}
		else{
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout<<endl;
            cout<<"                     Please Follow The Instructions";
            Sleep(2000);
            system("cls");
            goto pos;
            }

return 0;
	}






