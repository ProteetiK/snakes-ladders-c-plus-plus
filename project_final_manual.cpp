//preprocessors imported
#include<iostream>
#include<random>
#include <fstream>
#include <ctime>
#include <map>
using namespace std;
//class for the player construct; each player has a name and a their positions on the board
class player
{
private:
  map <int, string> name;
  int position;
  int move=0;
public:
  player()
  {
    //initializing position and move to 0 inside constructor
    position=0;
    move=0;
  }
  void enter_name (int i)
  {
    fstream fout;
    fout.open("terminal_out.txt", ios::app);
    //entering name in terminal and file
    cin>>name[i];
    fout<<name[i];
    fout.close ();
  }
  void show_name (int i)
  {
    fstream fout;
    fout.open("terminal_out.txt", ios::app);
    //display name in terminal and entering in file
    cout<<name.find(i)->second;
    fout<<name.find(i)->second;
    fout.close ();
  }
  int show_pos()
  {
    //displaying position
    return position;
  }
  void reset_val ()
  {
    position=0;
    move=0;
  }
  void snake_or_ladder()
  {
    ofstream fout;
    fout.open("terminal_out.txt", ios::app);
    int d=0; char di;
    //rolling dice using the rand () function after a user enters their choice
    cout<<endl<<"Enter D to Roll Dice: ";
    cin>>di;
    fout<<endl<<"Enter D to Roll Dice: "<<di;
    if(di=='D' || di=='d')
	    d=rand()%6+1;
    else
      {
        cout<<endl<<"Game Aborted. Exiting.";
        fout<<endl<<"Game Aborted. Exiting.";
        exit(0);
      }
   //double assigning to make sure value of dice is in between 1 and 6
   d%=7;
    cout<<endl<<"Dice: "<<d<<endl;
    fout<<endl<<"Dice: "<<d<<endl;
    if (d==6)
      {
        //double roll for a six
        cout<<"Rolling once more: ";
        d=d+rand()%6+1;
        cout<<d-6<<endl;
        fout<<"Rolling once more: "<<d-6<<endl;
        if(d==12)
          {
            //triple roll for two sixes
            d=d+rand()%6+1;
            cout<<"Rolling once more: ";
            cout<<d-12<<endl;
            fout<<"Rolling once more: "<<d-12<<endl;
            if(d==18)
              {
                cout<<endl<<"Sorry. Chance lost!"<<endl;
                fout<<endl<<"Sorry. Chance lost!"<<endl;
                return;
              }
          }
      }
    //incrementing position with value of dice
    position+=d; move++;
    //checking if increment is within bounds of the board
    if (position<=100)
    {
    //declaring a snake
    if (position==99 || position==95 || position==95 || position==93 || position==87 || position==47 || position==16|| position==62 || position==49 || position==64 || position==56)
        {
        cout<<endl<<"Oops! You got a snake there!"<<endl;
        fout<<endl<<"Oops! You got a snake there!"<<endl;
        }
    //declaring a ladder
    if (position==10 || position==28 || position==71 || position==51 || position==21 || position==4 || position==9|| position==1 || position==36)
        {
        cout<<endl<<"Congrats you're on a ladder now!"<<endl;
        fout<<endl<<"Congrats you're on a ladder now!"<<endl;
        }
    //snakes’ decrement
    if (position==99)
        {
          position=2;
          cout<<endl<<"Going from 99 to 2.";
          fout<<endl<<"Going from 99 to 2.";
        }
    else if (position==95)
        {
          position=75;
          cout<<endl<<"Going from 95 to 75.";
          fout<<endl<<"Going from 95 to 75.";
        }
    else if (position==93)
        {
          position=73;
          cout<<endl<<"Going from 93 to 73.";
          fout<<endl<<"Going from 93 to 73.";
        }
    else if (position==87)
        {
          position=24;
          cout<<endl<<"Going from 87 to 24.";
          fout<<endl<<"Going from 87 to 24.";
        }
    else if (position==47)
        {
          position=26;
          cout<<endl<<"Going from 47 to 26.";
          fout<<endl<<"Going from 47 to 26.";
        }
    else if (position==16)
        {
          position=6;
          cout<<endl<<"Going from 16 to 6.";
          fout<<endl<<"Going from 16 to 6.";
        }
    else if (position==62)
        {
          position=19;
          cout<<endl<<"Going from 62 to 19.";
          fout<<endl<<"Going from 62 to 19.";
        }
    else if (position==49)
        {
          position=11;
          cout<<endl<<"Going from 49 to 11.";
          fout<<endl<<"Going from 49 to 11.";
        }
    else if (position==64)
        {
          position=60;
          cout<<endl<<"Going from 64 to 60.";
          fout<<endl<<"Going from 64 to 60.";
        }
    else if (position==56)
        {
          position=53;
          cout<<endl<<"Going from 56 to 53.";
          fout<<endl<<"Going from 56 to 53.";
        }
    //ladders’ increment
    else if (position==10)
        {
          position=80;
          cout<<endl<<"Going from 10 to 80.";
          fout<<endl<<"Going from 10 to 80.";
        }
    else if (position==28)
        {
          position=84;
          cout<<endl<<"Going from 28 to 84.";
          fout<<endl<<"Going from 28 to 84.";
        }
    else if (position==71)
        {
          position=91;
          cout<<endl<<"Going from 71 to 91.";
          fout<<endl<<"Going from 71 to 91.";
        }
    else if (position==51)
        {
          position=57;
          cout<<endl<<"Going from 51 to 57.";
          fout<<endl<<"Going from 51 to 57.";
        }
    else if (position==21)
        {
          position=42;
          cout<<endl<<"Going from 21 to 42.";
          fout<<endl<<"Going from 21 to 42.";
        }
    else if (position==4)
        {
          position=14;
          cout<<endl<<"Going from 4 to 14.";
          fout<<endl<<"Going from 4 to 14.";
        }
    else if (position==9)
        {
          position=31;
          cout<<endl<<"Going from 9 to 31.";
          fout<<endl<<"Going from 9 to 31.";
        }
    else if (position==1)
        {
          position=38;
          cout<<endl<<"Going from 1 to 38.";
          fout<<endl<<"Going from 1 to 38.";
        }
    else if (position==36)
        {
          position=44;
          cout<<endl<<"Going from 36 to 44.";
          fout<<endl<<"Going from 36 to 44.";
        }
    }
    else
      {
      //rebound logic. For eg if current position: 97 and dice: 5, position moves 3 ahead to touch 100 and then comes back 2 to settle for 98.
      cout<<endl<<"Exact move not achieved. Moving back the excess."<<endl;
      fout<<endl<<"Exact move not achieved. Moving back the excess."<<endl;
      position=200-(position+d);
      }
      fout.close();
  }
//this function accesses the name variable due to friend status. This protects privacy from driver code while still allowing it to be accessed
friend void insert_record(char, int, player, int);
};
void insert_record(char if_enter,  int n, player pl, int i)
{
//opening ofstream to write into file
ofstream of;
of.open("records.txt", ios::app);
time_t tt;
struct tm * ti;
time (&tt);
ti=localtime(&tt);
//the time and winner name is inserted only when program receives a yes ('Y') from the driver code
if(if_enter=='Y')
{
	of<<endl<<asctime(ti);
	of<<endl<<"Winner Name: "<<pl.name.find(i)->second<<endl;
  of<<endl<<"Player no: "<<i;
  of<<"No of moves: "<<pl.move<<endl;
  of<<"No of players: "<<n<<endl;
}
of.close();
}
void display_records()
{
int i; char str[80];
ifstream f; ofstream fout;
f.open("records.txt", ios::in);
fout.open("terminal_out.txt", ios::app);
while(f)
{
	//file contents are displayed line by line
	f.getline(str, 80);
	cout<<str<<endl;
  fout<<str<<endl;
}
f.close();
fout.close ();
}
int main ()
{
  //driver code
  int i,n,j, menu; char ch;
  player p[10];
  ofstream fout;
  fout.open("terminal_out.txt", ios::app);
//this do-while works as long as an integer value is entered but exits execution if a non-integer value of menu is encountered.
do
{
  //using a menu
  cout<<endl<<" Menu: \n 1. New Game. \n 2. About Game. \n 3. Leaderboard \n 4. Exit Game. \n Enter choice: ";
  cin>>menu;
  fout<<endl<<" Menu: \n 1. New Game. \n 2. About Game. \n 3. Leaderboard \n 4. Exit Game. \n Enter choice: "<<menu;
  //checking if menu has integer value or not
  if (!cin)
  {
      cout<<endl<<" Invalid choice. Exiting. ";
      fout<<endl<<" Invalid choice. Exiting. ";
      exit(0);
  }
  switch (menu)
{
//new game segment
case 1:
do
{
  cout<<endl<<" Enter the no of players (Max 10): "; cin>>n;
  fout<<endl<<" Enter the no of players (Max 10): "<<n;
  if (n>10)
  {
  	cout<<" Maximum Limit exceeded. Please enter no of players in 1 to 10: "; cin>>n;
    fout<<" Maximum Limit exceeded. Please enter no of players in 1 to 10: "<<n;
  }
  for (i=0; i<n; i++)
  {
    cout<<endl<<" Player "<<i+1<<" Name: ";
    fout<<endl<<" Player "<<i+1<<" Name: "; p[i].enter_name(i+1);
  }
  cout<<endl<<" Initiating Game."<<endl<<endl;
  fout<<endl<<" Initiating Game."<<endl<<endl;
  //this do-while works as 'y' or 'Y' is entered after end of a game. Otherwise, control returns to main menu.
  do
  {
  //this for loop works as long as none of the players have won.
  for (i=0; i<n; i++)
  {
    cout<<endl<<endl<<" ";
    fout<<endl<<endl<<" ";
    p[i].show_name(i+1); cout<<"'s turn. "<<endl;
    fout<<"'s turn. "<<endl;
    cout<<" Current position: "<<p[i].show_pos();
    fout<<endl<<" Current position: "<<p[i].show_pos();
    //main game logic invoked
    p[i].snake_or_ladder();
    cout<<"Position now: "<<p[i].show_pos();
    fout<<"Position now: "<<p[i].show_pos();
  //winner name is inserted and game-do-while-loop (and for-loop) terminated
    if (p[i].show_pos()==100)
      {
        cout<<endl; p[i].show_name(i+1);
        cout<<" Wins!"<<endl;
        fout<<" Wins!"<<endl;
        insert_record('Y', n, p[i], i+1);
        ch='C';
        for(j=0; j<n; j++)
          p[j].reset_val();
        break;
      }
  }
  } while (ch!='C');
  //^end of game loop.
  cout<<endl<<" Y: Restart Game. \n N: Return to Menu. \n Enter choice: ";
  cin>>ch;
  fout<<endl<<" Y: Restart Game. \n N: Return to Menu. \n Enter choice: "<<ch;
} while(ch=='y' || ch=='Y');
break;
//about game segment
case 2: cout<<endl<<" Snake and Ladders is an Indian game. This is a luck-based race, popular worldwide. It can be played by essentially 2 or more people, although a one-person game is still possible. It involves moves based upon the rolling of a dice. The player may encounter a ladder or a snake by sheer chance and be promoted or demoted in the game respectively.\n This version of the game has been developed by Proteeti Kushari.";
fout<<endl<<" Snake and Ladders is an Indian game. This is a luck-based race, popular worldwide. It can be played by essentially 2 or more people, although a one-person game is still possible. It involves moves based upon the rolling of a dice. The player may encounter a ladder or a snake by sheer chance and be promoted or demoted in the game respectively.\n This version of the game has been developed by Proteeti Kushari.";
break;
case 3: display_records(); break;
//exit game segment
case 4: exit(0); break;
default: {
  cout<<endl<<" Invalid choice. Enter again.";
  fout<<endl<<" Invalid choice. Enter again.";
}
}
} while(menu>-32767 && menu<32767);
//The above line check if menu is an integer or not. If not, the game is terminated, otherwise in case of an invalid integer option the user is simply directed to re-enter their choice.
// closing the file
fout.close ();
return 0;
}
