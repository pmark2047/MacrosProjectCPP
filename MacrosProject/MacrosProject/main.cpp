//
//  main.cpp
//  MacrosProject
//
//  Created by Peyton Markus on 3/3/25.
//

#include "MacrosManager.h"
#include <cstdlib>

using namespace std;

int main() {
   
   // set variables
   vector<Food> foodInventory;
   
   // initialize example foods
   foodInventory.push_back(Food("Banana", 27, 1.3, 0.4));
   foodInventory.push_back(Food("PB&J", 62.3, 11.3, 12));
   foodInventory.push_back(Food("Protein Shake", 65.2, 50.6, 24.4));
   foodInventory.push_back(Food("2 Percent Milk (1 cup)", 14, 10, 5));
   
   vector<Food> foods;
   int option;
   MacrosManager mm;
   MifflinJeor profile;
   bool loop = true;
   while (loop)
   {
      while (true)
      {
         mm.displayMenu();
         cin >> option;
         // check if input is valid (int)
         if (cin.fail()) {
            cout << "\n\n\n\n\nPlease enter a valid option (1-5)\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
         }
         else
         {
            if (0 < option && option < 6)
            {
               break;
            }
            else
            {
               cout << "\n\n\n\n\nPlease enter a valid option" << endl;
               cin.clear();
            }
         }
      }
      switch (option) {
            
            // 1.) Display
            // 2.) Report Food
            // 3.) Create Food
            // 4.) Save Profile
            // 5.) Create Profile
            // 6.) Quit;
            
         case 1:
            mm.displayProgress(foods, profile);
            mm.displayFoods(foods);
            break;
         case 2:
            foods.push_back(mm.reportFood(foodInventory));
            break;
         case 3:
            foodInventory.push_back(mm.createFood());
            break;
         case 4:
            profile = mm.createProfile();
            break;
         case 5:
            loop = false;
            break;
         default:
            cout << "Invalid Option" << endl;
            break;
      }
   }
   return 0;
}
