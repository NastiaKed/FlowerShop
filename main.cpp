//
//  main.cpp
//  laba5
//
//  Created by Анастасия Кедь on 14.11.2022.
//

#include <iostream>
#include "Flower.h"
#include "FlowerShop.h"
#include "Bouquet.h"


int main() {
    Flower rose = Flower(70, 5, RED, 40, 3, 150);
    Flower cactus = Flower(10, 4, GREEN, 25, 16, 100);
    Flower chamomile = Flower(75, 12, WHITE, 15, 6, 80);

    Bouquet bouquet = Bouquet();
    bouquet.add(rose);
    bouquet.add(cactus);
    bouquet.add(chamomile);
    
    std::cout << bouquet.calculatePrice() << std::endl;
}

