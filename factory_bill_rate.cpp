#include <iostream>
#include <fstream>
#include <iomanip>
#include <conio.h>

using namespace std;

class Product {
public:
    void displayProductOptions(int productType) {
        string products[23][4] = {
            {"Water Base Primer 1st (20L)", "Water Base Primer 1st (10L)", "Water Base Primer 1st (4L)", "Water Base Primer 1st (1L)"},
            {"Water Base Primer 2nd (20L)", "Water Base Primer 2nd (10L)", "Water Base Primer 2nd (4L)", "Water Base Primer 2nd (1L)"},
            {"Water Base Deluxe 1st (20L)", "Water Base Deluxe 1st (10L)", "Water Base Deluxe (4L)", "Water Base Deluxe 1st (1L)"},
            {"Flat Paint (20L)", "Flat Paint (10L)", "Flat Paint (4L)", "Flat Paint (1L)"},
            {"Flat Paint Spl (20L)", "Flat Paint Spl (10L)", "Flat Paint Spl (4L)", "Flat Paint Spl (1L)"},
            {"Ext. Emulsion 1st (20L)", "Ext. Emulsion 1st (10L)", "Ext. Emulsion 1st (4L)", "Ext. Emulsion 1st (1L)"},
            {"Ext. Emulsion 1st Spl (20L)", "Ext. Emulsion 1st Spl (10L)", "Ext. Emulsion 1st Spl (4L)", "Ext. Emulsion 1st Spl (1L)"},
            {"Ext. Emulsion 2nd (20L)", "Ext. Emulsion 2nd (10L)", "Ext. Emulsion 2nd (4L)", "Ext. Emulsion 2nd (1L)"},
            {"Ext. Emulsion 2nd Spl (20L)", "Ext. Emulsion 2nd Spl (10L)", "Ext. Emulsion 2nd Spl (4L)", "Ext. Emulsion 2nd Spl (1L)"},
            {"Semi Gloss (20L)", "Semi Gloss (10L)", "Semi Gloss (4L)", "Semi Gloss (1L)"},
            {"HI Sheen (20L)", "HI Sheen (10L)", "HI Sheen (4L)", "HI Sheen (1L)"},
            {"Int. Emulsion (20L)", "Int. Emulsion (10L)", "Int. Emulsion (4L)", "Int. Emulsion (1L)"},
            {"CEM (25kg)", "CEM (20kg)", "CEM (5kg)", "CEM TC(20kg)"},
            {"Wall Putty 1st (40kg)", "Wall Putty 1st (20kg)", "Wall Putty 1st (5kg)", ""},
            {"Wall Putty 2nd (40kg)", "Wall Putty 2nd (20kg)", "Wall Putty 2nd (5kg)", ""},
            {"Dolomite (50kg)", "Dolomite (25kg)", "", ""},
            {"Turkey Umber Loose (25kg)", "Turkey Umber pouch (400g)", "Turkey Umber case (400g)", ""},
            {"Geru (25kg)", "Geru (1kg)", "", ""},
            {"LY (25kg)", "LY (1kg)", "", ""},
            {"PBR (25kg)", "PBR (5kg)", "PBR (1kg)", ""},
            {"YP (25kg)", "YP (1kg)", "", ""},
            {"POP (2.5kg)", "POP (1kg)", "", ""},
            {"Oxide Color Case (1kg)", "Oxide Color Case (0.5kg)", "Green Oxide (1x12kg)", ""}
        };

        for (int i = 0; i < 4; i++) {
            if (!products[productType][i].empty()) {
                cout << i + 1 << ") " << products[productType][i] << endl;
            }
        }
    }
};

class Price {
public:
    int prices[23][4] = {
        {950, 485, 792, 315}, {850, 435, 712, 285}, {800, 410, 672, 270}, {1270, 645, 1048, 411},
        {1410, 715, 1160, 453}, {2300, 1160, 1872, 720}, {2600, 1310, 2128, 810}, {1800, 910, 1472, 570},
        {2000, 1010, 1632, 630}, {2600, 1310, 2112, 810}, {3600, 1810, 2912, 1110}, {1470, 645, 1128, 411},
        {270, 240, 280, 290}, {570, 290, 320, 0}, {460, 235, 265, 0}, {230, 120, 0, 0},
        {220, 330, 330, 0}, {200, 270, 0, 0}, {200, 270, 0, 0}, {200, 260, 270, 0},
        {250, 320, 0, 0}, {280, 280, 0, 0}, {684, 708, 480, 0}
    };
};

class Name {
public:
    string customerName; // Variable to store customer name
    string transactionDate; // Variable to store transaction date

    void getInput() {
        system("cls");
        cout<<"\t-------ENTER THE DETAILS------- \n\n";
        cout << "ENTER THE NAME :- ";

        // Capture customer name character by character until Enter is pressed
        char ch;
        while ((ch = getch()) != '\r') { // '\r' is the Enter key
            if (ch == '\b') { // '\b' is the Backspace key
                if (!customerName.empty()) {
                    cout << "\b \b"; // Move cursor back, erase character, move back again
                    customerName.pop_back(); // Remove last character from string
                }
            } else {
                cout << ch; // Echo character to console
                customerName.push_back(ch); // Append character to customerName
            }
        }
        cout << endl; // Move to next line after input

        cout << "ENTER THE DATE :- ";

        // Capture transaction date character by character until Enter is pressed
        while ((ch = getch()) != '\r') { // '\r' is the Enter key
            if (ch == '\b') { // '\b' is the Backspace key
                if (!transactionDate.empty()) {
                    cout << "\b \b"; // Move cursor back, erase character, move back again
                    transactionDate.pop_back(); // Remove last character from string
                }
            } else {
                cout << ch; // Echo character to console
                transactionDate.push_back(ch); // Append character to transactionDate
            }
        }
        cout << endl; // Move to next line after input
    }

    void display() {
        system("cls");
        cout<<"\t\t\t-----------PRODUCT LIST-----------\n\n";
        cout << "1)  WATER BASE PRIMER 1st        2)  WATER BASE PRIMER 2nd      3) WATER BASE PRIMER DELUXE" << endl;
        cout << "4)  FLAT PAINT                   5)  FLAT PAINT SPL             6) EXTERIOR EMULSION 1st" << endl;
        cout << "7)  EXTERIOR EMULSION 1st SPL    8)  EXTERIOR EMULSION 2nd      9) EXTERIOR EMULSION 2nd SPL" << endl;
        cout << "10) SEMI GLOSS                   11) HI SHEEN                  12) INTERIOR EMULSION 2nd SPL" << endl;
        cout << "13) CEM                          14) WALL PUTTY 1st            15) WALL PUTTY 2nd " << endl;
        cout << "16) DOLOMITE                     17) TURKEY UMBER              18) GERU " << endl;
        cout << "19) LY                           20) PBR                       21) YP " << endl;
        cout << "22) POP                          23) OXIDE COLOR               24) ADD NAME & ADD DATE "<< endl;
    }
};

int getQty() {
    int q;
    cout << "ENTER THE QTY :- ";
    cin >> q;
    cout << "\n\nPRODUCT ADDED SUCCESSFULLY\n";
    return q;
}

int calculatePrice(int productType, int productChoice) {
    int quantity = getQty();
    Price priceList;
    return quantity * priceList.prices[productType][productChoice - 1];
}

void selectProduct(int productType, int &totalCost, ofstream &file, Name &name) {
    Product product;
    string products[23][4] = {
        {"Water Base Primer 1st (20L)", "Water Base Primer 1st (10L)", "Water Base Primer 1st (4L)", "Water Base Primer 1st (1L)"},
        {"Water Base Primer 2nd (20L)", "Water Base Primer 2nd (10L)", "Water Base Primer 2nd (4L)", "Water Base Primer 2nd (1L)"},
        {"Water Base Deluxe 1st (20L)", "Water Base Deluxe 1st (10L)", "Water Base Deluxe (4L)", "Water Base Deluxe 1st (1L)"},
        {"Flat Paint (20L)", "Flat Paint (10L)", "Flat Paint (4L)", "Flat Paint (1L)"},
        {"Flat Paint Spl (20L)", "Flat Paint Spl (10L)", "Flat Paint Spl (4L)", "Flat Paint Spl (1L)"},
        {"Ext. Emulsion 1st (20L)", "Ext. Emulsion 1st (10L)", "Ext. Emulsion 1st (4L)", "Ext. Emulsion 1st (1L)"},
        {"Ext. Emulsion 1st Spl (20L)", "Ext. Emulsion 1st Spl (10L)", "Ext. Emulsion 1st Spl (4L)", "Ext. Emulsion 1st Spl (1L)"},
        {"Ext. Emulsion 2nd (20L)", "Ext. Emulsion 2nd (10L)", "Ext. Emulsion 2nd (4L)", "Ext. Emulsion 2nd (1L)"},
        {"Ext. Emulsion 2nd Spl (20L)", "Ext. Emulsion 2nd Spl (10L)", "Ext. Emulsion 2nd Spl (4L)", "Ext. Emulsion 2nd Spl (1L)"},
        {"Semi Gloss (20L)", "Semi Gloss (10L)", "Semi Gloss (4L)", "Semi Gloss (1L)"},
        {"HI Sheen (20L)", "HI Sheen (10L)", "HI Sheen (4L)", "HI Sheen (1L)"},
        {"Int. Emulsion (20L)", "Int. Emulsion (10L)", "Int. Emulsion (4L)", "Int. Emulsion (1L)"},
        {"CEM (25kg)", "CEM (20kg)", "CEM (5kg)", "CEM TC(20kg)"},
        {"Wall Putty 1st (40kg)", "Wall Putty 1st (20kg)", "Wall Putty 1st (5kg)", ""},
        {"Wall Putty 2nd (40kg)", "Wall Putty 2nd (20kg)", "Wall Putty 2nd (5kg)", ""},
        {"Dolomite (50kg)", "Dolomite (25kg)", "", ""},
        {"Turkey Umber Loose (25kg)", "Turkey Umber pouch (400g)", "Turkey Umber case (400g)", ""},
        {"Geru (25kg)", "Geru (1kg)", "", ""},
        {"LY (25kg)", "LY (1kg)", "", ""},
        {"PBR (25kg)", "PBR (5kg)", "PBR (1kg)", ""},
        {"YP (25kg)", "YP (1kg)", "", ""},
        {"POP (2.5kg)", "POP (1kg)", "", ""},
        {"Oxide Color Case (1kg)", "Oxide Color Case (0.5kg)", "Green Oxide (1x12kg)", ""}
    };
    product.displayProductOptions(productType);

    int productChoice;
    cout << "ENTER THE CHOICE :- ";
    cin >> productChoice;

    if (productChoice >= 1 && productChoice <= 4) {
        string productName = products[productType][productChoice - 1];
        int quantity = getQty();
        int price = quantity * Price().prices[productType][productChoice - 1];
        totalCost += price;
        cout << "TOTAL PRICE: " << price << endl;


        // Write product details to the file
        file << left << setw(35) << productName
             << right << setw(10) << quantity
             << right << setw(10) << Price().prices[productType][productChoice - 1]
             << right << setw(10) << price
             << right << setw(10) <<endl;
    } else {
        cout << "INVALID CHOICE" << endl;
    }
}

int main() {
    Name nameList;
    int totalCost = 0;
    int productType;

    // Get customer name and date
    nameList.getInput();

    // Open file to store product details
    ofstream file("product_details.txt");
    if (!file.is_open()) {
        cerr << "Error opening file!" << endl;
        return 1; // Exit with error
    }

    // Write headers to the file
    file << left << setw(35) << "Product"
         << right << setw(10) << "Qty"
         << right << setw(10) << "Price"
         << right << setw(10) << "Total" << endl;

    // Write customer name and date to the file
    file << "-----------------------------------------------------------------------------" << endl;
    file << left << setw(40) << right << nameList.customerName << endl;
    file << left << setw(35) << right << nameList.transactionDate << endl;
    file << "-----------------------------------------------------------------------------" << endl;

    do {
        nameList.display();
        cout << "\nENTER THE PRODUCT TYPE (1-23) OR -1 TO EXIT :- ";
        cin >> productType;

        if (productType == -1) {
            break;
        }

        if (productType >= 1 && productType <= 23) {
            selectProduct(productType - 1, totalCost, file, nameList);
        } else if (productType == 24) {
            Name name;
            name.getInput();
                    // Write customer name and date to the file
            file << "-----------------------------------------------------------------------------" << endl;
            file << left << setw(40) << right << name.customerName << endl;
            file << left << setw(35) << right << name.transactionDate << endl;
            file << "-----------------------------------------------------------------------------" << endl;
        } else {
            cout << "INVALID PRODUCT TYPE" << endl;
        }

        cout << "CURRENT TOTAL COST: " << totalCost << endl;
        cout << "\n\n\nPRESS ANY KEY TO CONTINUE!!!!!";
        getch();
        system("cls");

    } while (productType != -1);

    file << "\nFINAL TOTAL COST: " << totalCost << endl;
    cout << "\nFINAL TOTAL COST: " << totalCost << endl;
    cout << "Press any key to exit...";
    getch();

    file.close();

    return 0;
}
