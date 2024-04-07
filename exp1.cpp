// 1.	Define a class Customer that holds private fields for a customer's ID, first name, last name, address and credit limit.
// Define functions that set the fields of customer. For example setCustomerID(). 
// Define functions that show the fields of customer. For example getCustomerID().
// Use constructor to set the default values to each of the field.
// Overload at least six constructor of the customer class.
// Define a function that takes input from user and set the all fields of customer data.
// Define a function that displays the entire customer’s data. 
#include<iostream>
using namespace std;
class customer{
    private:
        int CustomerID;
        string CustomerFirstName;
        string CustomerLastName;
        string CustomerAddress;
        float Limit;
    public:
    void setValues(int id, string cfn,string cln, string cadd,int lim){
        CustomerID = id;
        CustomerFirstName = cfn;
        CustomerLastName = cln;
        CustomerAddress = cadd;
        Limit = lim;
    }
    int idReturn(){
        return CustomerID;
    }
    int LimitReturn(){
        return Limit;
    }
    string FirstNameReturn(){
        return CustomerFirstName;
    }
    string LastNameReturn(){
        return CustomerLastName;
    }
    string AddressReturn(){
        return CustomerAddress;
    }
};
void InputCustomerData(customer &customerObj){
    int id,lim;
    string cfn,cln,cadd;
    cout<<"Enter the Customer ID: ";
    cin>>id;
    cout<<"Enter the Customer First Name: ";
    cin>>cfn;
    cout<<"Enter the Customer Last Name: ";
    cin>>cln;
    cout<<"Enter the Customer Address: ";
    cin>>cadd;
    cout<<"Enter the Customer Limit: ";
    cin>>lim;
    customerObj.setValues(id,cfn,cln,cadd,lim);
}
void OutputCustomerData(customer &Customer){
    cout<<"The Customer ID: "<<Customer.idReturn()<<endl;
    cout<<"The Customer Fist Name: "<<Customer.FirstNameReturn()<<endl;
    cout<<"The Customer Last Name: "<<Customer.LastNameReturn()<<endl;
    cout<<"The Customer Address: "<<Customer.AddressReturn()<<endl;
    cout<<"The Customer Limit: "<<Customer.LimitReturn()<<endl;
}
int main()
{
    customer customer1,customer2;
    InputCustomerData(customer1);
    cout<<endl<<"<-------------------------The Output IS------------------------->"<<endl;
    OutputCustomerData(customer1);
    cout<<"<-------------------------THE END------------------------->"<<endl;
    InputCustomerData(customer2);
    cout<<endl<<"<-------------------------The Output IS------------------------->"<<endl;
    OutputCustomerData(customer2);
    cout<<"<-------------------------THE END------------------------->"<<endl;
    cout<<"The Customer ID: "<<customer1.idReturn()<<endl;
    return 0;
}