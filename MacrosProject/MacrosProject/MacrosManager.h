//
//  MacrosManager.h
//  MacrosProject
//
//  Created by Peyton Markus on 3/6/25.
//

#pragma once
#include <stdexcept>
#include <limits>
#include "MifflinJeor.h"
#include "Food.h"

using namespace std;

class MacrosManager
{
public:
   
   void displayMenu();
   
   void displayProgress(vector<Food> foods, MifflinJeor profile);
   
   void displayFoods(vector<Food> foods);
   
   Food reportFood(vector<Food> foodInventory);
   
   Food createFood();
   
   MifflinJeor createProfile();
   
};
