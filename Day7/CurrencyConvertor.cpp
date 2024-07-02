/*Simple Currency Converter:
Create a class named CurrencyConverter. Define a static variable named exchangeRate (e.g., USD to EUR exchange rate).g>Implement static methods:

convertToEur(double amount): Converts an amount from the base currency (USD) to EUR based on the exchange rate.
convertFromEur(double amount): Converts an amount from EUR to the base currency (USD). In your main function, prompt the user for an amount and a conversion direction (USD to EUR or EUR to USD). Use the appropriate static method from the CurrencyConverter class to perform the conversion and display the result.
*/
#include <iostream>
#include <string>
using namespace std;
class CurrencyConverter
{
    static  double exchangeRate;
    public:
    static double convertToEur(double amount){
        return amount *exchangeRate;
    }
    static double convertFromEur(double amount){
        return amount /exchangeRate;

}

};
double CurrencyConverter::exchangeRate=0.97;
int main(){
    double amount,change;
    string convert;
    cin>>amount>>convert;
    if(convert=="EUR"){
        change= CurrencyConverter::convertToEur(amount);
        cout<<change<<endl;
}
else if(convert=="USD"){
       change= CurrencyConverter::convertFromEur(amount);
        cout<<change<<endl;
}
else{
    cout<<" No Conversion";
}
}
