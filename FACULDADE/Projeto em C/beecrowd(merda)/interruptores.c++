#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

bool comparador(int *inicial, int *atual, int m){
	for(int i = 0; i < m; i++){
		if(inicial[i] != atual[i]){
			return true;
		}
	}
	return false;
}

bool desligado(int *atual, int m){
	for(int i = 0; i < m; i++){
		if(atual[i] != -1){
			return false;
		}
	}
	return true;

}

int main(){

	int n, m, l, x, k, y, cont;
	//scanf("%d,%d",&n,&m);
	cin>>n>>m;


	int lampadas[m], inicial[m];

	vector <int> interruptores[n];


	for(int i = 0; i < m; i++){
		lampadas[i] = -1;
	}
	//scanf("%d",&l);
	cin>>l;
	for(int i = 0; i < l; i++){
		//scanf("%d",&x);
		cin>>x;
		lampadas[x-1] *= -1;
	}

	for(int i = 0; i < n; i++){
		//scanf("%d",&k);
		cin>>k;
		for(int j = 0; j < k; j++){
			//scanf("%d",&y);
			cin>>y;
			interruptores[i].push_back(y-1);
		}
	}

	for(int i = 0; i < m; i++){
		inicial[i] = lampadas[i];
	}

	cont = 0;
	if(desligado(lampadas, m)){
		//printf("0\n");
		cout<<0<<endl;
		return 0;
	}
	

	do{

		for(int i = 0; i < n; i++){

			for(int j = 0; j < interruptores[i].size(); j++){
				lampadas[interruptores[i][j]] *= -1;
			}

			cont++; 

			if(desligado(lampadas, m)){
				//printf("%d", cont);
				cout<<cont<<endl;
				return 0;
			}
		}
	}while(comparador(inicial, lampadas, m)); 
	//printf("-1");
	cout<<"-1"<<endl;
	return 0;
}