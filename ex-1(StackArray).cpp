// nama	: Naufal ariful Amri
// NPM	: 140810180009

#include <iostream>
using namespace std ;

struct stack {
	char nama[255] ;
	int top ;
};

stack s ;

void create (stack& s) {
	s.top = -1 ;
}

void push (stack& s, char x) {
	cout << ":: " ;
	cin >> x ;
	if (s.top > 255){
		cout << "PENUH\n" ;		
	} 
	else {
		s.top = s.top + 1 ;	
		s.nama[s.top] = x ;
	}
}

void pop (stack& s, char x) {
	if (s.top < 0) {
		cout << "Kosong\n" ;
	}
	else {
		x = s.nama[s.top] ;
		s.top = s.top -1 ;
	}
}

int main () {
	char x ;
	stack v ;
	
	create (s) ;
	
	cout << "========\nPUSH\n" ;
	for (int i = 0 ; i < 5 ; i++){
		push(s,x) ;
	}
	
	
	for (int i = s.top ; i > -1 ; i--) {
		cout <<"| " << s.nama[i] << " |" <<  endl; 
	}
	cout << "========\nPOP\n" ;
	
	for (int i = 0 ; i < 5 ; i++){
		pop(s,x) ;
	}
	cout << "kosong";
	
		
}


