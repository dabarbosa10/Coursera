/*
 * Mayor1.cpp
 *
 *  Created on: 31 dic. 2021
 *      Author: diegobarbosa
 */


#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int get_Mayor(int a[],int m, int left, int right);
int main(){
	  int n;
	  cin >> n;
	  int a[n];
	  for (int i = 0; i < n; ++i) {
	    cin >> a[i];
	  }
	  cout << (get_Mayor(a,n, 0, n) != -1) << '\n';


	return 0;
}
int get_Mayor(int a[],int m, int left, int right){

	int ele=a[0],count=0;
	for(int i=0;i<m;i++){
		if(a[i]==ele){
			count=count+1;
		}
		else{
			count=count-1;
		}

		if (count<=0){
			ele=a[i];
			count=1;
		}
	}

	count=0;
	for(int i=0;i<m;i++){
		if(a[i]==ele){
			count++;
		}
		if(count>(m/2)){
			return ele;
		}
	}

	return -1;
}
