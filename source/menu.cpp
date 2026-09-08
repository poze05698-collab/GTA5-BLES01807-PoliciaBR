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
        MainMenu();
    }

    void Update()
    {
        if (!aberto)
        {
            return;
        }

        // A navegação pelo controle será implementada
        // depois que definirmos a plataforma PS3.
    }

    void Close()
    {
        aberto = false;
    }

    void MainMenu()
    {
        // Menu principal da Polícia BR
    }

    void PoliceMenu()
    {
        // Serviço policial
    }

    void OperationsMenu()
    {
        // Operações policiais
    }

    void VehicleMenu()
    {
        // Viaturas
    }

    void EquipmentMenu()
    {
        // Equipamentos
    }

    void CallsMenu()
    {
        // Chamados policiais
    }

    void RankMenu()
    {
        // Patente e carreira
    }
}
