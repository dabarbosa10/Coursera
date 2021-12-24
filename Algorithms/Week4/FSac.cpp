/*
 * FSac.cpp
 *
 *  Created on: 22 dic. 2021
 *      Author: diegobarbosa
 */
#include <iostream>
#include <vector>

using namespace std;

double GreedyFK(int capacity, vector<int> weight, vector<int> values);

int main(){
	int n, capacity;
	cin>>n>>capacity;
	vector<int> values(n);
	vector<int> weights(n);
	for(int i=0; i<n;i++){
		cin>> values[i]>> weights[i];
	}

	double optimal_value=GreedyFK(capacity, weights, values);
	cout.precision(10);
	cout<<optimal_value<<endl;

	return 0;
}
double GreedyFK(int capacity, vector<int> weight, vector<int> values){
	double val=0.0;
	vector<double> rat(weight.size(),0.0);
	double profit=0.0, wei=0.0;
	int i=0;
	//-------------------------------------------
	while(wei<capacity){
		if(wei+weight[i]<=capacity){
			rat[i]=1;
			wei=wei+weight[i];
		}
		else{
			rat[i]=(capacity-wei)/weight[i];
			wei=capacity;
		}
		profit=profit+values[i]*rat[i];
		cout<<rat[i]<<endl;
		i=i+1;
	}

	return profit;
}



