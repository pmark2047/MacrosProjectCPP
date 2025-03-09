//
//  Food.h
//  MacrosProject
//
//  Created by Peyton Markus on 3/3/25.
//

#pragma once
#include <iostream>
using namespace std;


class Food {
   
public:
   // constructors
   Food()                             : name(""), carbs(0.0), proteins(0.0), fats(0.0) {}
   Food(string n, double c, double p, double f) : name(n), carbs(c), proteins(p), fats(f)
   {
      name = n;
      carbs = c;
      proteins = p;
      fats = f;
   }
   Food(const Food & rhs) : name(rhs.name), carbs(rhs.carbs), proteins(rhs.proteins), fats(rhs.fats) {}
   Food & operator = (const Food& rhs)
   {
      name = rhs.name;
      carbs = rhs.carbs;
      proteins = rhs.proteins;
      fats = rhs.fats;
      return *this;
   }
   
   // setters
   void setName(string n)           {name = n;           }
   void setCarbs(double c)          {carbs = c;          }
   void setProteins(double p)       {proteins = p;       }
   void setFats(double f)           {fats = f;           }
   
   // getters
   string getName()                 {return name;        }
   double getCarbs()                {return carbs;       }
   double getProteins()             {return proteins;    }
   double getFats()                 {return fats;        }
   double getCalories();
   
   
private:
   string name;
   double carbs;
   double proteins;
   double fats;
};
