#include <iostream>
using namespace std;

int main(){
	int porcentagem = 100;
	float sal, conta, despesas, economias, lazer, sobras;
	cout<< "Sistema Administrador de Salário Versão 2";
	cout<< "Insira o seu salário (Ex R$ 1300.99) :" ;
	cin>> sal;
	
	if (sal>0){
		cout<<"Você poderá distribuir as porcentagens do seu salário entre\nDespesas, Economias, Lazer e Sobra"<< endl;
		
		cout<<"Qual a porcentagem você deseja separar para as despesas: ";
		cin>> despesas ;
		porcentagem = porcentagem - despesas;
		cout<<"\nPorcentagem restante :" << porcentagem << "%\n"<< endl;
		
		cout<<"Qual a porcentagem você deseja separar para as economias:"<< endl;
		cin>> economias ;
		porcentagem = porcentagem - economias;
		cout<<"\nPorcentagem restante :" << porcentagem << "%\n"<< endl;
		
		cout<<"Qual a porcentagem você deseja separar para as Lazer:"<< endl;
		cin>> lazer ;
		porcentagem = porcentagem - lazer;
		cout<<"\nPorcentagem restante :" << porcentagem << "%\n"<< endl;
		
		cout<<"Qual a porcentagem você deseja separar para as Sobras:"<< endl;
		cin>> sobras;
		porcentagem = porcentagem - sobras;
		cout<<"\nPorcentagem restante :" << porcentagem << "%\n"<< endl;
		if (porcentagem ==0){
			conta= sal/100;
			cout<< "Salário administrado: R$"<< sal<< endl;
			cout<<"Despesas: R$ " << (despesas*conta)<< endl;
			cout<< "Economias: R$ "<< (economias*conta)<< endl;
			cout<<"Lazer: R$ " << (lazer*conta)<< endl;
			cout<< "Sobras: R$ "<< (sobras*conta)<< endl;
		} else{
            cout<< "Tente novamente, a soma das porcentagens deve totalizar o número 100 enquanto os que você adicionou somam: "<<(porcentagem *(-1)+ 100) <<"%"<<endl;
		 }
	
} else{
	 cout<< "Tente novamente com um valor válido";
	 
}
    return 0;
}
