#include <iostream>
#include "2015143.h"

int main(int argc, const char * argv[]) {
    
    Stock hat;
    
    hat.acquire("Hat", 20, 12.50);
    hat.show();
    hat.buy(15, 18.5);
    hat.show();
    hat.sell(400, 20.00);
    hat.show();
    hat.buy(30000, 40.125);
    hat.show();
    hat.sell(30000, 0.125);
    hat.show();
    
    return 0;
}
