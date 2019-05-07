// nama	: Naufal ariful Amri
// NPM	: 140810180009

#include <iostream>
using namespace std ;

struct stack {
	char nama[255] ;
	stack* next ;
};

typedef stack* list ;
typedef stack* pointer ;

void create (list& top) {
	top = NULL ;
}

void elemen (pointer& p) {
	p = new stack ;
	cout << ":: " ; cin >> p->nama ;
	p->next = NULL ; 
}

void push (list& top, pointer& pBaru) {
	if (top == NULL) {
		top = pBaru ;
	}
	else {
		pBaru->next = top ;
		top = pBaru ;
	}
}

void pop(list& top, pointer& pHapus){
	if (top == NULL){
		cout << "" ;
	}
	else {
		pHapus = top ; 
		top = top->next ;
		pHapus->next = NULL ;
	}
}


void traversal (list top) {
	pointer bantu ;
	bantu = top ;
	if(bantu == NULL){
		cout << "KOSONG\n" ;
	}
	else {
		while (bantu != NULL) {
			cout <<"| " << bantu->nama << " |" <<  endl; 
			bantu = bantu->next ;
		}
		
	}
}


int main (){
	list top ;
	pointer p,q ;
	
	cout << "========\nPUSH\n" ;
	create (top) ;
	for (int i = 0 ; i < 5 ; i++) {
		elemen(p) ;
		push (top,p) ;
	}
	
	traversal(top) ;
	
	cout << "========\nPOP\n" ;
	for (int i = 0 ; i < 5 ; i++) {
		pop(top,p) ;
	}
	
	traversal(top) ;
		
}





