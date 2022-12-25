//
//  Flower.h
//  laba5
//
//  Created by Анастасия Кедь on 15.11.2022.
//

#ifndef Flower_h

#define Flower_h

enum Color {
    RED,
    WHITE,
    BLUE,
    YELLOW,
    PINK,
    ORANGE,
    GREEN,
    PURPLE
};

class Flower {
private:
    int height;
    int size;
    Color color;
    float price;
    int quantity;
    double deliveryRate;
    
public:
    
    Flower();
    Flower(int height, int size, Color color, float price, int quantity, double deliveryRate);
    ~Flower();
    
    int getHeight();
    int getSize();
    Color getColor();
    float getPrice();
    int getQuantity();
    double getDeliveryRate();
    void size_of_flower();
};

#endif /* Flower_h */
