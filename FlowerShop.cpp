//
//  FlowerShop.cpp
//  laba5
//
//  Created by Анастасия Кедь on 15.11.2022.
//

#include "FlowerShop.h"

FlowerShop::FlowerShop () {
    
}

void FlowerShop::printMostExpensive() {
    for (int i=0; i<flowers.size(); i++) {
        for (int j=0; j<flowers.size() -1; j++) {
            if (flowers[j].getPrice() < flowers[j+1].getPrice()) {
                Flower temp = flowers[j];
                flowers[j] = flowers[j+1];
                flowers[j+1] = temp;
            }
        }
    }
}



void FlowerShop::remove(Flower flower) {
    flowers.pop_back();
}
