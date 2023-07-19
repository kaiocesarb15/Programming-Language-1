#include "invoice.h"

invoice::invoice(){}

float invoice::getInvoiceAmount(){
    return quantidade*preco;
}