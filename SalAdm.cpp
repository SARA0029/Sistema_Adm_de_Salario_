#include <iostream>
using namespace std;
int main(){
	float sal; //aqui optei por declarar a variável como float levando em consideração que o salário pode não ser um número inteiro
	cout<< "Seja bem vindo(a) ao sistema administrador de salários" << endl;
	cout<< "Insira o seu salário (Ex: 1300.90):";
	cin>> sal;
	if (sal>0){
	
		cout<< "\nDespesas - 40% : R$ " <<(sal*0.4)<<endl;
		cout<< "Economia - 30% : R$ "<<(sal*0.3)<<endl;
		cout<< "Lazer - 20% : R$ " <<(sal*0.2) <<endl;
		cout<< "Sobra - 10% : R$ " << (sal*0.1)<<endl;
		
		
	
	}else{
		cout<< "Insira um valor válido por favor" << endl;
	}
	
}