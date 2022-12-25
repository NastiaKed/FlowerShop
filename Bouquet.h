//
//  Bouquet.h
//  laba5
//
//  Created by Анастасия Кедь on 15.11.2022.
//

#ifndef Bouquet_h
#define Bouquet_h
#include <vector>
#include "Flower.h"

class Bouquet {
private:
    std::vector<Flower> flowers;
    
public:
    Bouquet();
    void add_flower(Flower flower);
    float calculatePrice();
};
#endif /* Bouquet_h */
