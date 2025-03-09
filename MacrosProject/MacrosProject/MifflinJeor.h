//
//  MifflinJeor.h
//  MacrosProject
//
//  Created by Peyton Markus on 3/3/25.
//

#pragma once

class MifflinJeor {
   
public:
   // constructor
   MifflinJeor() : isMale(true), age(0), height(0.0), weight(0.0), activityLvl(LOW) {}
   
   // declare enumeration
   enum ActivityLvl {
      LOW = 1,
      MODERATE = 2,
      HIGH = 3,
      VERY = 4,
      INTENSE = 5
   };
   
   // setters
   void setIsMale(bool m)                            { isMale = m;            }
   void setAge(int a)                                { age = a;               }
   void setHeightIn(double h)                        { height = h * 2.54;     }
   void setWeightLbs(double w)                       { weight = w / 2.20462;  }
   void setActivityLVL(ActivityLvl lvl)              { activityLvl = lvl;     }
   
   void setAll(bool m, int a, double h, double w, ActivityLvl lvl)
   {
      isMale = m;
      age = a;
      height = h * 2.54;
      weight = w / 2.20462;
      activityLvl = lvl;
   }
   
   // getters
   bool getIsMale()        { return isMale; }
   int getAge()            { return age;    }
   double getHeight()      { return height; }
   double getWeidht()      { return weight; }
   double getActivityLVL() { return activityLvl; }
   
   
   double calculateRMR();
   

private:
   bool isMale;
   int age;
   double height;
   double weight;
   ActivityLvl activityLvl;
   
};
