/*This program is to generate a Gaussian distribution of R_max in the formula:
f = R_max/(g[1+B]^p) and L_ext = L_core/(f*del^p).  The data gives a peak of R 
at ~22.74 and a standard dev of 8.57 */

#include <iostream>
#include <fstream> 
#include <math.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int rand_0toMAX(int max);

int main(){
  int n=0, j=0, i=0, k=0, c=1;
  double x;
  double y;
  
  
  srand(time(NULL));
  do{
  cout << "Enter the number of dice in the roll: ";
  cin >> n;

  cout << "Enter the dice type d(4,6,8,10,20): ";
  cin >> i;
  

  int Dice[n];


  do{
    int DMAX = i;
    
    Dice[k] = rand_0toMAX(DMAX) + 1;

    k++;
  }while(k<n);

   for(j=0;j<n;j++){
     cout << "Die " << j+1 << ":" << Dice[j] << endl; 

    }
   cout << "Continue? type 1 for yes and 0 for no" << endl;
   cin >> c;
  }while(c=1);
   
  return 0;

}//Main


int rand_0toMAX(int max){
  
  return rand() % max;

}

