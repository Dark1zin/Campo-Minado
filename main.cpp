#include <iostream>
#include <time.h>
#include <windows.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main() {
	int x, y,b,bx,by;

	cout << "INSIRA A QUANTIDADE DE LINHAS DO SEU CAMPO MINADO" << endl;
	cin >> x;
	cout << "INSIRA A QUANTIDADE DE COLUNAS DO SEU CAMPO MINADO(Max 26 Pelo alfabeto)" << endl;
	cin >> y;
	cout << "INSIRA A QUANTIDADE DE BOMBAS DO SEU CAMPO MINADO" << endl;
	cin >> b;
	if(y>27){
            cout<<"numero invalido";
        return 0;
	}
	int campo[x][y], m[x][y],coluna[y],c;
	int i, j, s ,s2;
	char linha[x],l;
	bool test;
	s = 65;
	s2 = 1;
	for (i = 0; i < x; i++) {
		linha[i] = s;
		s = 1 + s;
	}
	for (j = 0; j < y; j++) {
		coluna[j] =s2;
		s2 = 1 + s2;
	}
	for (i = 0; i < x; i++) {
		for (j = 0; j < y; j++) {
			campo[i][j] = 1;
		}
	}
	for(int i2=0;i2<=b;i2++){
        bx=rand()%x;
        by=rand()%y;
	}





	for(int jogo=0;jogo==0;jogo=jogo+0){

	for (j = 0; j < y; j++) {
		cout << coluna[j]<<" ";
	}
	cout<<"\n";
	cout<<"\n";
	for (i = 0; i < x; i++) {
		for (j = 0; j < y; j++) {
			cout << campo[i][j] << " ";
		}
		cout <<"  "<<linha[i]<< "\n";
	}
	        cout<<"INSIRA A LINHA QUE DESEJA REVELAR"<<endl;
                cin>>l;
                l=toupper(l);
            cout<<"INSIRA A COLUNA QUE DESEJA REVELAR"<<endl;
                cin>>c;
	}

	return 0;
}

