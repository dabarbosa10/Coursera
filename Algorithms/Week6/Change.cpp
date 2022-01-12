/*
 * Change.cpp
 *
 *  Created on: 11 ene. 2022
 *      Author: diegobarbosa
 */

#include <iostream>
#include <cassert>
#include <vector>
#include <cmath>
using namespace std;

int get_change(int m) {
  int a[3]={1, 3, 4};
  int coins[m];
  coins[0]=0;
  for(int i=1;i<=m;i++){
	  int min=10000;
	  for(int j=0; j<=2;j++){
		  if(a[j]<=i && coins[i-a[j]] <min){
			  min=coins[i-a[j]];
		  }

	  }
	  coins[i]=1+min;

  }
  return coins[m];
}

int main() {
  int m;
  cin >> m;
  cout << get_change(m) << '\n';
}
