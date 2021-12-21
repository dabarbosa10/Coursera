/*
 * knapsack.cpp
 *
 *  Created on: 20 dic. 2021
 *      Author: diegobarbosa
 */


#include <iostream>
#include <vector>

using namespace std;

int main(){
	//Vector declaration
	vector<int> myvec;
	// Let's fill the array using numbers in reverse order
	for(int i=5; i>=1; i--){
		myvec.push_back(i);
	}
	cout<<"The vector elements are: ";
	for(int i=0; i<myvec.size(); i++){
		cout<<myvec[i]<<" ";
	}
	vector<int> assi(myvec.size(),0);
	cout<<endl;
	cout<<"The vector elements are: ";
		for(int j=0; j<myvec.size(); j++){
			cout<<assi[j]<<" ";
		}
	cout<<endl;
	return 0;
	
}

