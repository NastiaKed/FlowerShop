//
//  FlowerShop.h
//  laba5
//
//  Created by Анастасия Кедь on 15.11.2022.
//

#ifndef FlowerShop_h
#define FlowerShop_h
#include <vector>
#include "Flower.h"

class FlowerShop {
    
private:
    std::vector<Flower> flowers;
    
public:
    FlowerShop ();
    void printMostExpensive();
    void add(Flower flower);
  void remove(Flower flower);
};

#endif /* FlowerShop_h */
