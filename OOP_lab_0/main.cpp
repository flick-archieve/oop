#include <stdio.h>
#include <math.h>
#include <iostream>

struct price {
    int hryvnas;
    short int coins;

};

void roundCoins(price * price) {
    price->coins = round((price->coins/10.0))*10;
}

price add(price price1, price price2) {
    struct price sum;
    sum.hryvnas = price1.hryvnas + price2.hryvnas;
    sum.coins = (price1.coins + price2.coins) % 100;
    sum.hryvnas += (price1.coins + price2.coins) / 100;
    return sum;
}

price multiply(price price, int n) {
    struct price product;
    product.hryvnas = price.hryvnas * n;
    product.hryvnas += (price.coins*n)/100;
    product.coins = (price.coins*n)%100;
    return product;
}

int main(void) {
    struct price totalPrice ={0,0};
    struct price currentPrice ={0,0};
    int n = 0;


    FILE *myFile = fopen("file.txt", "r");
    while (fscanf(myFile,"%d %hu %d",&(currentPrice.hryvnas),&(currentPrice.coins),&n)!=EOF){
        currentPrice = multiply(currentPrice,n);
        totalPrice = add(totalPrice,currentPrice);
    }
    std::cout<<"Total sum:"<<totalPrice.hryvnas<<" hryvnas "<<totalPrice.coins<<" coins"<< std::endl;
    roundCoins(&totalPrice);
    std::cout<<"Sum to pay:"<<totalPrice.hryvnas<<" hryvnas "<<totalPrice.coins<<" coins"<< std::endl;

    fprintf(myFile, "test2");
    fclose(myFile);

}


