//
//  Bouquet.cpp
//  laba5
//
//  Created by Анастасия Кедь on 15.11.2022.
//
#include <iostream>
#include "Bouquet.h"

Bouquet::Bouquet ()
{
    
}

void Bouquet::add(Flower flower)
{
    flowers.push_back(flower);
}

float Bouquet::calculatePrice ()
{
    float sum = 0;
    for (int i=0; i<flowers.size() ; i++ )
    {
        sum += flowers[i].getPrice()*flowers[i].getQuantity();
    }
}
