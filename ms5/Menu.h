/***********************************************************************
// OOP244 
// Version
// Date:
// Author:
// Description
//
// Revision History
// -----------------------------------------------------------
// Name            Date            Reason
//Agenor Junior    2024-05-08      MS5
/////////////////////////////////////////////////////////////////
***********************************************************************/

#ifndef SENECA_MENU_H
#define SENECA_MENU_H
#include <iostream>
#include <cstring>
#define MAX_MENU_ITEMS 20
namespace seneca {

    class MenuItem {
        char* m_itemName{};
        MenuItem();
        MenuItem(const char*);
        ~MenuItem();
        MenuItem(const MenuItem&) = delete;
        MenuItem& operator=(const MenuItem&) = delete;
        operator bool()const;
        operator const char* ()const;
        void display()const;
        friend class Menu;
    };
    class Menu {
        char* m_menuTitle{};
        MenuItem* m_menuItem[MAX_MENU_ITEMS]{};
        unsigned int noOfItems{};
    public:
        Menu();
        Menu(const std::string);
        ~Menu();
        Menu(const Menu&) = delete;
        Menu& operator=(const Menu&) = delete;
        Menu(MenuItem*) = delete;
        void display()const;
        unsigned int run()const;
        unsigned int operator~()const;
        Menu& operator<<(const char*);
        operator int()const;
        operator unsigned int()const;
        operator bool()const;
        const char* operator[](unsigned index) const;
        friend std::ostream& operator<<(std::ostream&, const Menu&);
    };
}

#endif

