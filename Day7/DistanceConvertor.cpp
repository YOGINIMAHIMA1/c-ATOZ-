/* Distance Converter:
Create a class named DistanceConverter. Include the following static methods:

convertMilesToKm(double miles): Converts miles to kilometers (1 mile = 1.60934 kilometers).
convertKmToMiles(double kilometers): Converts kilometers to miles. In your main function, prompt the user for a distance and a unit (miles or kilometers). Use the appropriate 
static method from the DistanceConverter class to perform the conversion and display the result to the user.  */
#include <iostream>
using namespace std;

class DistanceConvertor{
    public:
    static double MilesToKm(double miles){
        return miles * 1.60934;
}
   static  double KmToMiles(double kilometeres){
       return kilometeres/1.60934;
   }
   
   
};
int main(){
    double distance; char Units;
    cin>>distance;
    cin>>Units;
    if(Units=='m'||Units=='M')
    {
        double  kilometres= DistanceConvertor::MilesToKm(distance);
        cout<<kilometres<<endl;
    }
   else if(Units=='k'||Units=='K')
    {
       double  miles= DistanceConvertor::KmToMiles(distance);
        cout<<miles<<endl;
    }
    else
    {
        cout<<"nothing to print"<<endl;
    }
 
}
