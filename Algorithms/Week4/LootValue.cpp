/*
 * LootValue.cpp
 *
 *  Created on: 25 dic. 2021
 *      Author: diegobarbosa
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void arreglo(vector<double>& b, vector<int>& v, vector<int>& w);
double GreedyFK(int capacity, vector<int> pesos, vector<int> valores);


int main() {
  int n;
  int capacity;
  std::cin >> n >> capacity;
  vector<int> values(n);
  vector<int> weights(n);
  for (int i = 0; i < n; i++) {
    std::cin >> values[i] >> weights[i];
  }
  double optimal_value = GreedyFK(capacity, weights, values);
  cout.precision(10);
  cout << optimal_value << endl;
  return 0;
}


void arreglo(vector<double>& b, vector<int>& v, vector<int>& w){
  for (int i = 0; i < b.size(); i++){
    int max = i;
    for (int j = i+1; j < b.size(); j++){
      if (b[j] > b[max]) {
        max = j;
      }
    }
    if (max != i) {
      iter_swap(b.begin()+i, b.begin()+max);
      iter_swap(v.begin()+i, v.begin()+max);
      iter_swap(w.begin()+i, w.begin()+max);
    }
  }
}

double GreedyFK(int capacity, vector<int> pesos, vector<int> valores){
	double val=0.0;
	int n=pesos.size();
	vector<double> dens(n);

	for(int j=0; j<n; j++){
		dens[j]=((double) valores[j]/(double) pesos[j]);
	}
  arreglo(dens, valores, pesos);

	for(int i=0;i<n;i++){
		int a=min(pesos[i],capacity);
		int residual=capacity-a;
		if(residual>=0){
			capacity=residual;
			val+=dens[i]*a;
		}
		//cout<<" valor: " <<valores[i]<< " peso: "<<pesos[i]<<" densidad: "<<(valores[i]/pesos[i])<<endl;
	}

	return val;

}


