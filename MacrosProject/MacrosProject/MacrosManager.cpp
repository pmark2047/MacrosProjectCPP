//
//  MacrosManager.cpp
//  MacrosProject
//
//  Created by Peyton Markus on 3/6/25.
//

#include "MacrosManager.h"

void MacrosManager::displayMenu()
{
   cout << "\n\n1.) Display\n"
        << "2.) Report Food\n"
        << "3.) Create Food\n"
        << "4.) Create Profile\n"
        << "5.) Quit\n";
}

void MacrosManager::displayProgress(vector<Food> foods, MifflinJeor profile)
{
   double totalCal = 0;
   double totalCarb = 0;
   double totalProtein = 0;
   double totalFat = 0;
   double calGoal = profile.calculateRMR();
   for (int i = 0; i < foods.size(); i++)
   {
      totalCal += foods[i].getCalories();
      totalCarb += foods[i].getCarbs();
      totalProtein += foods[i].getProteins();
      totalFat += foods[i].getFats();
   }
   
   cout << "                  " << totalCal << " / " << calGoal << " Calories      \n"
   << "Carbs " << totalCarb << "g/" << (calGoal * 0.5)/4 << "g      "
   << "Proteins " << totalProtein << "g/" << (calGoal * 0.2)/4 << "g      "
   << "Fats " << totalFat << "g/" << (calGoal * 0.3)/9 << "g      ";
}

void MacrosManager::displayFoods(vector<Food> foods)
{
   for (int i = 0; i < foods.size(); i++)
   {
      cout << "\n\n" << i+1 << ".) " << foods[i].getName() << ": \n"
      << "C: " << foods[i].getCarbs() << "g"
      << ", P: " << foods[i].getProteins() << "g"
      << ", F: " << foods[i].getFats() << "g\n"
      << "Cal: " << foods[i].getCalories();
   }
};

Food MacrosManager::reportFood(vector<Food> foodInventory)
{
   int choice;
   cout << "Enter the number of the food you would like to report ";
   displayFoods(foodInventory);
   cout << "\n\n#: ";
   cin >> choice;
   return foodInventory[choice-1];
}

Food MacrosManager::createFood()
{
   string name;
   double carbs;
   double proteins;
   double fats;
   
   cout << "What is the name of the food? ";
   cin >> name;
   
   cout << "How many grams of carbs? ";
   cin >> carbs;
   
   cout << "How many grams of protein? ";
   cin >> proteins;
   
   cout << "How manyt grams of fat? ";
   cin >> fats;
   
   Food newFood = Food(name, carbs, proteins, fats);
   
   return newFood;
}

MifflinJeor MacrosManager::createProfile()
{
   MifflinJeor Profile;
   string gender;
   int age;
   double height;
   double weight;
   int activity;
   MifflinJeor::ActivityLvl activityLvl;
   
   // get gender
   cout << "\n\nWhat is your gender (m/f) ";
   cin >> gender;
   
   // get age
   cout << "\nHow old are you? ";
   cin >> age;
   
   // get height
   cout << "\nHow tall are you in inches? ";
   cin >> height;
   
   // get weight
   cout << "\nHow much do you weight in lbs? ";
   cin >> weight;
   
   cout  << "\nWhat is your activity level?\n"
   << "1.) Little to no excercise\n"
   << "2.) 1-3 times per week\n"
   << "3.) 3-5 times per week\n"
   << "4.) 5-6 times per week\n"
   << "5.) 6-7 times per week or physical job\n";
   cin >> activity;
   switch (activity)
   {
      case 1:
         activityLvl = MifflinJeor::LOW;
      case 2:
         activityLvl = MifflinJeor::MODERATE;
      case 3:
         activityLvl = MifflinJeor::HIGH;
      case 4:
         activityLvl = MifflinJeor::VERY;
      case 5:
         activityLvl = MifflinJeor::INTENSE;
      default:
         activityLvl = MifflinJeor::MODERATE;
   }
   
   Profile.setAll((gender == "m"), age, height, weight, activityLvl);
   return Profile;
}
