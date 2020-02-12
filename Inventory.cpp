#include <iostream>
#include <iomanip>
#include "Inventory.h"

using std::string;
using std::ostream;

// The Inventory constructor
Inventory::Inventory(string name, float price, int count)
{
  m_name = name;
  m_price = price;
  m_in_stock = count;
}

// Decrements the number in stock
void Inventory::sell()
{
  m_in_stock--;
}

// An overloaded << for easy display of item info
ostream& operator<<(ostream& stream, const Inventory& item)
{
  stream << item.m_name << " $"
         << std::fixed << std::setprecision(2) << item.m_price;
  return stream;
}
