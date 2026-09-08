#include "../include/menu.h"

namespace Menu
{
    static bool aberto = false;

    void Init()
    {
        aberto = false;
    }

    void Show()
    {
        aberto = true;
    }

    void Update()
    {
        if (!aberto)
        {
            Show();
        }
    }

    void Close()
    {
        aberto = false;
    }
}
