#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

/* Write your code here and DO NOT change anything in main function*/
class Item{
    
    public:
    string name;
    int price;

    Item(string name = "", int price = 0)
    {
        this->name = name;
        this->price = price;
    }
};

class ShoppingCart{
    public:
    
    int count;
    int bill;
    Item items[10];
    int item_quantity[10];
    
    
    ShoppingCart()
    {
        count = 0;
        bill = 0;
        item_quantity[10] = {0};
    }
    
    
    void add_item(Item item, int quantity)
    {
        int i = 0;
        
        for(i=0; i<count; i++)
        {
           if(item.name == this->items[i].name)
           {
               break;
           }
        }
        
        if(i >= count)
        {
            this->items[count] = item;
            item_quantity[count] = quantity;
            this->count++;
        }
        
        else
        {
            item_quantity[i] += quantity;   
        }
    }
    
    int calculate_bill()
    {
        for(int i=0; i<count; i++)
        {
            this->bill += (items[i].price * item_quantity[i]);
        }
        return bill;
    }
    
    void print()
    {
        for(int i=0; i<count; i++)
            cout<<endl<<items[i].name <<" "<< item_quantity[i];
    }
};


int main() {
    
    Item items[10];
    int input_items_count, price;
    string name;
    cin >> input_items_count;
    for(int i = 0; i < input_items_count; i++) {
        getchar();
        cin >> name >> price;
        items[i] = Item(name, price);
    }

    ShoppingCart sc;
    int purchase_entries, quantity;
    cin >> purchase_entries;
    for(int i = 0; i < purchase_entries; i++) {
        getchar();
        cin >> name >> quantity;
        int j;
        for(j = 0; j < input_items_count; j++) {
            if(items[j].name == name)
                break;
        }
        sc.add_item(items[j], quantity);
    }

    cout << sc.calculate_bill();
    sc.print();

    return 0;
}