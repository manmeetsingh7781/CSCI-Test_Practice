// Manmeet Singh
// This program prints a Perfect, Abundent, and Deficient numbers given by users value

#include <iostream>
using namespace std;

void isPerfect();
void isAbundent();
void isDeficient();
void getTotalPercentage(double);
int const LIMIT = 5000;

int main()
{
    // This function takes Type of number user and prints the Numbers up to limit, 
   isPerfect();
   cout << endl;
   
   isAbundent();
   cout << endl;

   isDeficient();
   cout << endl;
   return 0;
}

// Checks if the number is perfect
void isPerfect(){
    int startChecking, start_point, sum, counter;
    counter = 0;
    cout << "What numbers below " << LIMIT << " are perfect?\n";
    for(start_point  = 1; start_point <= LIMIT; start_point++){
      // Every Number will have its different sum
      sum = 0;
      // Start checking the perfect number 
      for(startChecking = 1; startChecking <= start_point/2; startChecking++){
        if(start_point % startChecking == 0)
          sum += startChecking;
      }
      // Checks the sum of the number;
      if(sum == start_point){
        counter+= 1; 
        cout << start_point << endl;
      } 
    }
    cout << "The Percentage of Perfect numbers are: ";getTotalPercentage(counter);
}

// Checks if the number is Abundent
void isAbundent(){
    int startChecking, start_point, sum, counter;
    counter = 0;
    cout << "What odd numbers below "<< LIMIT <<" are abundant?\n";
    for(start_point  = 1; start_point <= LIMIT; start_point++){
        // Every Number will have its different sum
      sum = 0;
      // Start checking the perfect number 
      for(startChecking = 1; startChecking <= start_point/2; startChecking++){
      if(start_point % startChecking == 0)
          sum += startChecking;
     
      }
        // Checks the sum of the number;
      if(sum > start_point){
        counter+= 1;
           if(start_point % 2 != 0){
            cout << start_point << endl;
          }
        }
    }
    cout << "The Percentage of Abdundent numbers are: ";getTotalPercentage(counter);
}

// checks if the number is Deficient
void isDeficient(){
    int startChecking, start_point, sum, counter;
    counter = 0;

    for(start_point  = 1; start_point <= LIMIT; start_point++){
    // Every Number will have its different sum
    sum = 0;
    // Start checking the perfect number 
    for(startChecking = 1; startChecking <= start_point/2; startChecking++){
      if(start_point % startChecking == 0)
        sum += startChecking;
      }
      // Checks the sum of the number;
      if (sum < start_point){
        counter+= 1;
      }
    }
  cout << "The Percentage of Deficient numbers are: ";getTotalPercentage(counter);
}

// This function calculates the total Percentage of Numbers
void getTotalPercentage(double num){
    double total;
    total = (num/LIMIT)*100;
    cout << total <<"%\n";

}
