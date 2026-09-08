#include "../include/config.h"
#include "../include/input.h"
#include "../include/menu.h"

int main()
{
    Menu::Init();

    while (true)
    {
        Menu::Update();
    }

    Menu::Close();

    return 0;
}
