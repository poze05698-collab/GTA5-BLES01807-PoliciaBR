#include "../include/config.h"
#include "../include/input.h"
#include "../include/menu.h"
#include "../include/police.h"

int main()
{
    Police::Init();
    Menu::Init();

    while (true)
    {
        Menu::Update();
    }

    Menu::Close();

    return 0;
}
