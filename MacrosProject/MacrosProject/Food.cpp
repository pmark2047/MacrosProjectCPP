//
//  Food.cpp
//  MacrosProject
//
//  Created by Peyton Markus on 3/3/25.
//

#include "Food.h"


double Food::getCalories()
{
   // add calories from other macronutrients
   double calories = getCarbs() * 4;
   calories += getProteins() * 4;
   calories += getFats() * 9;
   
   //return sum
   return calories;
}
