// euromilhoes random

#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

void num(int x, int y){
	int n[x];
	
	for (int i=0;i<=x;i++){
		n[i]=rand() % y + 1;
		for (int j=0;j<=x;j++)
    		if (n[i] == n[j] && i!=j){
        		n[i]=rand() % y + 1;
        		i=0;
        	}		
	}
	for (int i:n) 
		cout << i << " ";
}


int main()
{
	char o;
	srand(time(NULL));

	do{
		cout << "\033[2J\033[1;1H";
		cout << "\n*** Euromilhoes ***\n";
		
		cout << "\nNumeros:\n ";
		num(5,50);
		
		cout << "\nEstrelas:\n ";
		num(2,12);

		cout << endl;
		cout << "\nPrima 0 para sair.\n";
		o=getchar();
	}while(o!='0');
	
	return 0;
}
