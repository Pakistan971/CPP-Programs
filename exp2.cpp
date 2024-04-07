// //2.	Create a class Country. Country is identified by its name, location on earth (which means the longitude & latitude values), area, population & capital.
// All the data members should be private. User should be able to set the value of all of its parameters either at the time of instance creation or later on be able to individually change the values of all these identifiers whenever user want to.
// Calling member function DispalyAllInfo() should display all the information pertaining to a country instance. User should also be able to individually call functions such as DisplayName(), DisplayCapital etc.
#include<iostream>
using namespace std;
class Country{
    private:
        string country_name;
        string country_capital;
        float longitude;
        float latitude;
        float country_population;
        float country_area;
    public:
    void setValues(string cn, string CoC, float lon, float lat, float pop, float area){
        country_name = cn;
        country_capital = CoC;
        longitude = lon;
        latitude = lat;
        country_population = pop;
        country_area = area;
    }
    string nameReturn(){
        return country_name;
    }
    string capitalReturn(){
        return country_capital;
    }
    float latReturn(){
        return latitude;
    }
    float areaReturn(){
        return country_area;
    }
    float popReturn(){
        return country_population;
    }
    float lonReturn(){
        return longitude;
    }
};
void inputCountryData(Country &countryObject){
    string cn,CoC;
    float lon,lat,pop,area;

    cout<<"Enter the country name: ";
    cin>>cn;
    cout<<"Enter the Country Capital: ";
    cin>>CoC;
    cout<<"Enter the Country Population: ";
    cin>>pop;
    cout<<"Enter the Latitude: ";
    cin>>lat;
    cout<<"Enter the Longitude: ";
    cin>>lon;
    cout<<"Enter the Country Area: ";
    cin>>area;
    countryObject.setValues(cn,CoC,lon,lat,pop,area);
};
void DisplayAllInfo(Country &countryObject){
    cout<<"Country Name: "<<countryObject.nameReturn()<<endl;
    cout<<"Country Capital: "<<countryObject.capitalReturn()<<endl;
    cout<<"Country Population"<<countryObject.popReturn()<<endl;
    cout<<"Location: Longitude "<<countryObject.lonReturn()<<" and Latitude "<<countryObject.latReturn()<<endl;
    cout<<"The Country has Area: "<<countryObject.areaReturn()<<endl;
};
int main()
{   
    Country country1,country2,country3;
    inputCountryData(country1);
    inputCountryData(country2);
    inputCountryData(country3);
    cout<<country1.capitalReturn()<<" "<<country2.capitalReturn()<<" "<<country3.capitalReturn();
    return 0;
}