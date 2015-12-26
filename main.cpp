#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void table();
void player1();
void player2();
void p1win();
void p2win();
void verification();
int end();

int escolha = 0, rnd = 0, PCplays = 0;
bool player = false; //false -> Player 1 | True -> Player 2 (PC)

char field[9] = {'1','2','3','4','5','6','7','8','9'};

int main(){
    table();
    if(player == false){
        player1();
    }else{
        player2();
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
void player1(){
    table();
    cout<<"Jogador 1: ";
    cin.sync();
    cin>>escolha;
    if(escolha>=1 && escolha<=9 && field[escolha-1]!='X' && field[escolha-1]!='O'){
        field[escolha-1]='X';
    }else{
        player1();
    }
    player = true;
    verification();
    main();
}
void player2(){
    if(PCplays==4){
        cout<<"It's a tie!"<<endl;
        system("PAUSE");
        exit(0);
    }
    table();
    cout<<"Jogador 2: ";
    cin.sync();
    srand(time(NULL));
    rnd = rand() % 9 + 1;
    if(rnd>=1 && rnd<=9 && field[rnd-1]!='X' && field[rnd-1]!='O'){
        field[rnd-1]='O';
    }else{
        player2();
    }
    player = false;
    PCplays++;
    verification();
    main();
}
void verification(){
    int ct = 0;
    for(int i=0; i=8; i++){

    }

    //Player 1 Wins
    if(field[0]=='X'&&field[1]=='X'&&field[2]=='X')p1win();
    if(field[3]=='X'&&field[4]=='X'&&field[5]=='X')p1win();
    if(field[6]=='X'&&field[7]=='X'&&field[8]=='X')p1win();

    if(field[0]=='X'&&field[3]=='X'&&field[6]=='X')p1win();
    if(field[1]=='X'&&field[4]=='X'&&field[7]=='X')p1win();
    if(field[2]=='X'&&field[5]=='X'&&field[8]=='X')p1win();

    if(field[0]=='X'&&field[4]=='X'&&field[8]=='X')p1win();
    if(field[2]=='X'&&field[4]=='X'&&field[6]=='X')p1win();

    //Player 2 Wins
    if(field[0]=='O'&&field[1]=='O'&&field[2]=='O')p2win();
    if(field[3]=='O'&&field[4]=='O'&&field[5]=='O')p2win();
    if(field[6]=='O'&&field[7]=='O'&&field[8]=='O')p2win();

    if(field[0]=='O'&&field[3]=='O'&&field[6]=='O')p2win();
    if(field[1]=='O'&&field[4]=='O'&&field[7]=='O')p2win();
    if(field[2]=='O'&&field[5]=='O'&&field[8]=='O')p2win();

    if(field[0]=='O'&&field[4]=='O'&&field[8]=='O')p2win();
    if(field[2]=='O'&&field[4]=='O'&&field[6]=='O')p2win();

    //else main();
}
void p1win(){
    table();
    cout<<"Player 1 wins!"<<endl;
    system("PAUSE");
    end();
}
void p2win(){
    table();
    cout<<"Player 2 wins!"<<endl;

    system("PAUSE");
    end();
}
void table(){
    system("CLS");
    cout<<endl;
    cout<<"    |    |    "<<endl;
    cout<<"  "<<field[0]<<"   "<<field[1]<<"    "<<field[2]<<"  "<<endl;
    cout<<"____|____|____"<<endl;
    cout<<"    |    |    "<<endl;
    cout<<"  "<<field[3]<<"   "<<field[4]<<"    "<<field[5]<<"  "<<endl;
    cout<<"____|____|____"<<endl;
    cout<<"    |    |    "<<endl;
    cout<<"  "<<field[6]<<"   "<<field[7]<<"    "<<field[8]<<"  "<<endl;
    cout<<"    |    |    "<<endl;
}
int end(){
    exit(0);
}