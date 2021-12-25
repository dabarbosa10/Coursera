/*
 * PlayVec.cpp
 *
 *  Created on: 23 dic. 2021
 *      Author: diegobarbosa
 */


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

float GreedyFK(int capacity, vector<int> pesos, vector<int> valores);

int main(){
	//Vector declaration
	int s, capacity;
	cin>>s>>capacity;
	vector<int> weights(s);
	vector<int> values(s);
	vector<double> frac(s);
	vector<double> fracor;
	for(int i=0;i<s;i++){
		cin>>values[i]>>weights[i];
	}

	vector<int> peso;
	vector<int> valor;

	for(int j=0;j<s;j++){
		frac[j]=values[j]/weights[j];
		//cout<<frac[j]<<" values: "<<values[j]<<" weights: " <<weights[j] <<endl;
	}

	while(frac.size()>0){

		double max=0.0;
		max=*max_element(frac.begin(),frac.end());

		auto it=find(frac.begin(),frac.end(),max);
		int index = it - frac.begin();
		//cout<< "maxim value: " << max << "indice" <<index << endl;
		valor.push_back(values[index]);
		peso.push_back(weights[index]);
		fracor.push_back(frac[index]);
		frac.erase(frac.begin()+index);
		values.erase(values.begin()+index);
		weights.erase(weights.begin()+index);
		//cout<<" frac size: "<<frac.size()<<endl;

	}

	//cout<<"Tamaño vector "<<valor.size()<<endl;
	//for(int m=0; m<valor.size();m++){
	//	cout<<" valor: " <<valor[m]<< " peso: "<<peso[m]<<" densidad: "<<fracor[m]<<endl;
	//}
	float optimal_value=GreedyFK(capacity, peso, valor);
	cout.precision(4);
	cout<<fixed<<optimal_value<<endl;


  return 0;
}

float GreedyFK(int capacity, vector<int> pesos, vector<int> valores){
	float val=0.00000;
	vector<double> A(pesos.size(),0.0);
	float a;
	for(int i=0;i<pesos.size();i++){
		if(capacity==0){
			return val;
		}
		a=float(min(pesos[i],capacity));
		val=val+a*(float(valores[i])/float(pesos[i]));
		//cout<<" valor: "<<val<<" frac: "<< float(valores[i]/pesos[i])<<endl;
		pesos[i]=pesos[i]-a;
		A[i]=A[i]+a;
		capacity=capacity-a;
		//cout<<" valor: " <<valores[i]<< " peso: "<<pesos[i]<<" densidad: "<<(valores[i]/pesos[i])<<endl;
	}


	return val;
}

