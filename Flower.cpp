//
//  Flower.cpp
//  laba5
//
//  Created by Анастасия Кедь on 15.11.2022.
//
#include <iostream>
#include "Flower.h"

Flower::Flower() : height(1), size(1), color(WHITE), price(0), quantity(0), deliveryRate(0) {
    
}

Flower::Flower(  int height, int size, Color color, float price, int quantity, double deliveryRate) :
height(height), size(size), color(color), price(price), quantity(quantity), deliveryRate(deliveryRate) {
    
}

Flower::~Flower() {
    
}

int Flower::getHeight() {
    return height;
}
int Flower::getSize() {
    return size;
}
Color Flower::getColor() {
    return color;
}
float Flower::getPrice() {
    return price;
}
int Flower::getQuantity() {
    return quantity;
}
double Flower::getDeliveryRate() {
    return deliveryRate;
}

