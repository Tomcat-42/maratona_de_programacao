#include <iostream>
#include <map>

using namespace std;

int main(){
	/* Meses com dias diferentes de 31*/
	map<int,int> meses = { {2, 29}, {4, 30}, {6,30}, {9,30}, {11,30} };
	int mes, dia, soma;
	map<int, int>::iterator iter;

	//for(pair<int,int> i: meses){
	//	cout << "{" << i.first << ", " << i.second << "}" << endl;
	//}


	while(scanf("%d %d", &mes, &dia) !=EOF){
		
		if( (iter = meses.find(mes)) == meses.end())
			soma = 31 - dia;
		else
			soma = iter->second - dia;

		for(int i=mes+1; i<12; i++){
			if( (iter = meses.find(i)) == meses.end() ){
				soma+=31;
			}else{
				soma += iter->second;
			}
		}
		soma+=25;


		if(mes == 12 && dia == 24)
			cout << "E vespera de natal!" << endl;
		else if(mes == 12 && dia == 25)
			cout << "E natal!" << endl;
		else if(mes == 12 && dia > 25)
			cout << "Ja passou!" << endl;
		else
			cout << "Faltam "<< soma << " dias para o natal!"  << endl;
	}

	return 0;
}
