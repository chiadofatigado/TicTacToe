#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void tabela();
void player1();
void player2();
void p1win();
void p2win();
void verifica();
int fim();
int escolha = 0;
int rnd = 0;
bool player = false; //false -> Jogador 1 | True -> Jogador 2

char campo[9] = {'1','2','3','4','5','6','7','8','9'};

int main(){
    tabela();
    if(player == false){
        player1();
    }else{
        player2();
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
void player1(){
    tabela();
    cout<<"Jogador 1: ";
    cin.sync();
    cin>>escolha;
    if(escolha>=1 && escolha<=9 && campo[escolha-1]!='X' && campo[escolha-1]!='O'){
        campo[escolha-1]='X';
    }else{
        player1();
    }
    player = true;
    verifica();
    main();
}
void player2(){
    if(jogadasPC==4){
        cout<<"EMPATE"<<endl;
        system("PAUSE");
        exit(0);
    }
    tabela();
    cout<<"Jogador 2: ";
    cin.sync();
    srand(time(NULL));
    rnd = rand() % 9 + 1;
    if(rnd>=1 && rnd<=9 && campo[rnd-1]!='X' && campo[rnd-1]!='O'){
        campo[rnd-1]='O';
    }else{
        player2();
    }
    player = false;
    verifica();
    main();
}
void verifica(){
    int ct = 0;
    for(int i=0; i=8; i++){

    }

    //Player 1 Ganha
    if(campo[0]=='X'&&campo[1]=='X'&&campo[2]=='X')p1win();
    if(campo[3]=='X'&&campo[4]=='X'&&campo[5]=='X')p1win();
    if(campo[6]=='X'&&campo[7]=='X'&&campo[8]=='X')p1win();

    if(campo[0]=='X'&&campo[3]=='X'&&campo[6]=='X')p1win();
    if(campo[1]=='X'&&campo[4]=='X'&&campo[7]=='X')p1win();
    if(campo[2]=='X'&&campo[5]=='X'&&campo[8]=='X')p1win();

    if(campo[0]=='X'&&campo[4]=='X'&&campo[8]=='X')p1win();
    if(campo[2]=='X'&&campo[4]=='X'&&campo[6]=='X')p1win();

    //Player 2 Ganha
    if(campo[0]=='O'&&campo[1]=='O'&&campo[2]=='O')p2win();
    if(campo[3]=='O'&&campo[4]=='O'&&campo[5]=='O')p2win();
    if(campo[6]=='O'&&campo[7]=='O'&&campo[8]=='O')p2win();

    if(campo[0]=='O'&&campo[3]=='O'&&campo[6]=='O')p2win();
    if(campo[1]=='O'&&campo[4]=='O'&&campo[7]=='O')p2win();
    if(campo[2]=='O'&&campo[5]=='O'&&campo[8]=='O')p2win();

    if(campo[0]=='O'&&campo[4]=='O'&&campo[8]=='O')p2win();
    if(campo[2]=='O'&&campo[4]=='O'&&campo[6]=='O')p2win();

    //else main();
}
void p1win(){
    tabela();
    cout<<"O JOGADOR 1 GANHOU"<<endl;
    system("PAUSE");
    fim();
}
void p2win(){
    tabela();
    cout<<"O JOGADOR 1 GANHOU"<<endl;

    system("PAUSE");
    fim();
}
void tabela(){
    system("CLS");
    cout<<endl;
    cout<<"    |    |    "<<endl;
    cout<<"  "<<campo[0]<<"   "<<campo[1]<<"    "<<campo[2]<<"  "<<endl;
    cout<<"____|____|____"<<endl;
    cout<<"    |    |    "<<endl;
    cout<<"  "<<campo[3]<<"   "<<campo[4]<<"    "<<campo[5]<<"  "<<endl;
    cout<<"____|____|____"<<endl;
    cout<<"    |    |    "<<endl;
    cout<<"  "<<campo[6]<<"   "<<campo[7]<<"    "<<campo[8]<<"  "<<endl;
    cout<<"    |    |    "<<endl;
}
int fim(){
    exit(0);
}
