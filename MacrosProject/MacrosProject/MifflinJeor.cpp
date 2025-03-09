//
//  MifflinJeor.cpp
//  MacrosProject
//
//  Created by Peyton Markus on 3/3/25.
//

#include "MifflinJeor.h"


double MifflinJeor::calculateRMR()
{
   double value;
   if (isMale)
   {
      value = ((10 * weight) + (6.25 * height) - (5 * age) + 5);
   }
   else
   {
      value = ((10 * weight) + (6.25 * height) - (5 * age) - 161);
   }
   
   switch (activityLvl)
   {
      case LOW:
         return value * 1.2;
      case MODERATE:
         return value * 1.375;
      case HIGH:
         return value * 1.55;
      case VERY:
         return value * 1.725;
      case INTENSE:
         return value * 1.9;
   }
};
