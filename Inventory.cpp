#include <iostream>
#include <iomanip>
#include "Inventory.h"

using std::string;
using std::ostream;
  
Inventory::Inventory(string name, float price, int count)
{
  m_name = name;
  m_price = price;
  m_in_stock = count;
}

void Inventory::sell()
{
  m_in_stock--;
}

ostream& operator<<(ostream& stream, const Inventory& item)
{
  stream << item.m_name << " $"
         << std::fixed << std::setprecision(2) << item.m_price;
  return stream;
}