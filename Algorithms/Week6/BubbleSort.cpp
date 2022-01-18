/*
 * BubbleSort.cpp
 *
 *  Created on: 17 ene. 2022
 *      Author: GatoFisico
 */


#include <iostream>
#include <cassert>
#include <vector>
#include <cmath>
using namespace std;

void print(float [], int);
void sort(float[], int);

int main(){
	float a[]={55.5, 22.5, 99.9, 66.6, 44.4, 88.8, 77.3, 33.3 };
	print(a,8);
	sort(a,8);
	print(a,8);

	return 0;

}

void print(float a[], int n){
	for(int i=0;i<n; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

void sort(float a[], int n){
	for(int i=1; i<n;i++){
		for(int j=0;j<n-1;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
}
