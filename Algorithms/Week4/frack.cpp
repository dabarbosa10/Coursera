/*
 * frack.cpp
 *
 *  Created on: 20 dic. 2021
 *      Author: diegobarbosa
 */
#include <iostream>
#include <vector>

using namespace std;

double printF(int capacity, vector<int> weights, vector<int> values);

int main(){
	int n, capacity;
	cin>>n>>capacity;
	vector<int> values(n);
	vector<int> weights(n);
	for(int i=0; i<n;i++){
		cin>> values[i]>> weights[i];
	}

	double optimal_value=printF(capacity, weights, values);
	cout.precision(10);
	cout<<optimal_value<<endl;
	return 0;
}

double printF(int capacity, vector<int> weights, vector<int> values){
	double value=0.0;
	vector<double> rat(weights.size(),0.0);
	double weight=0.0;

	for(int i=0; i<weights.size(); i++){
		rat[i]=values[i]/weights[i];
		cout<<rat[i]<<" Densities"<<endl;
	}
	sort(rat.begin(),rat.end());
	reverse(rat.begin(),rat.end());

	for(int j=0;j<weights.size();j++){
		cout<<"Sorted density value:  "<<rat[j]<<endl;
	}



	return value;
}


