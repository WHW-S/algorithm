#ifndef SALES_DATA_H
#define SALES_DATA_H

#include<iostream>
#include<string>
class Sales_data
{
    friend Sales_data add(const Sales_data&,const Sales_data&);
    friend std::istream &read(std::istream&,Sales_data&);
    friend std::ostream &print(std::ostream&,const Sales_data&);
public:
    Sales_data()=default;
    std::string isbn() const {return bookNo;}
    Sales_data &combine(const Sales_data&);
    ~Sales_data() {}

private:
    std::string bookNo;
    unsigned units_sold=0;
    double revenue=0.0;
    double avg_price() const;
};

#endif 
