/*
 * prog1_acd21.cpp
 *  Created on: Sep 5, 2013
 *      Author: Adam C. De Leon
 *      Net ID: acd21
 *      Program 1
 *		Comparing snowboard price breakdown and calculations for three different sellers.
 *
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const float MSRP = 356.95;
    const float SALES_TAX = .0825;
    const float STATE_SALES_TAX = .0625;
    const float SHIPPING_FEE = 50.00;

    // Calculating All Things Snow prices.
    float coupon_1 = MSRP - ((MSRP * .15) + 10);
    float sales_tax_applied_to_coupon1 = coupon_1 * SALES_TAX;
    float selling_price_1 = coupon_1 + sales_tax_applied_to_coupon1;
    cout << setprecision(2) << fixed;
    cout << "All Things Snow" << endl;
    cout << "Discounted Price:  $" << coupon_1 << endl;
    cout << "Sales Tax:  $" << sales_tax_applied_to_coupon1 << endl;
    cout << "Selling Price:  $" << selling_price_1 << endl;
    cout << endl;

    // Calculating SnowBiz.com prices.
    float coupon_2 = MSRP - (MSRP * .2);
    float selling_price_2 = coupon_2 + SHIPPING_FEE;
    cout << setprecision(2) << fixed;
    cout << "SnowBiz.com" << endl;
    cout << "Discounted Price:  $" << coupon_2 << endl;
    cout << "Additional Cost:  $" << SHIPPING_FEE << endl;
    cout << "Selling Price:  $" << selling_price_2 << endl;
    cout << endl;

    // Calculating SnowWhat.com prices.
    float coupon_3 = MSRP - (MSRP * .15);
    float state_sales_tax_applied_to_coupon3 = coupon_3 * STATE_SALES_TAX;
    float selling_price_3 = coupon_3 + state_sales_tax_applied_to_coupon3;
    cout << setprecision(2) << fixed;
    cout << "SnowWhat.com" << endl;
    cout << "Discounted Price:  $" << coupon_3 << endl;
    cout << "Additional Cost:  $" << state_sales_tax_applied_to_coupon3 << endl;
    cout << "Selling Price:  $" << selling_price_3 << endl;

    return 0;
}


