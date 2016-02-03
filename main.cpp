#include <iostream>

using namespace std;

int main() {
    //Variables to hold the stock purchase and selling info.

    int StocksPurchased, StocksSold;
    double Commission, TotalPurchase, TotalSell, TotalBuyCommission, TotalSellCommission,PurchasePrice, SellingPrice, Profit;

    //Point in which user inputs variable date.

    cout << "Please input the number of stocks purchased.";
    cin >> StocksPurchased;
    cout << "Please input the purchase price per stock.";
    cin >> PurchasePrice;
    cout << "Please input the brokers commission rate";
    cin >> Commission;
    cout << "Please input number of stocks sold.";
    cin >> StocksSold;
    cout << "Please input stock selling price per stock.";
    cin >> SellingPrice;

    //Calculations section of program.

    TotalPurchase = StocksPurchased * PurchasePrice;
    TotalSell = StocksSold * SellingPrice;
    TotalBuyCommission = TotalPurchase * Commission;
    TotalSellCommission = TotalSell * Commission;
    Profit = ((TotalSell - TotalPurchase) - (TotalBuyCommission + TotalSellCommission));

    //Program output.

    cout << "The total amount paid for the stock purchase was: " << TotalPurchase << endl;
    cout << "The total amount paid in commission for the purchase was: " << TotalBuyCommission << endl;
    cout << "The total amount the stocks were sold for was: " << TotalSell << endl;
    cout << "The total amount paid in commission for the sale was: "  << TotalSellCommission << endl;
    cout << "The total profit made off of the stock transaction was: " << Profit << endl;

}