#include "../include/police.h"

namespace Police
{
    static bool emServico = false;

    void Init()
    {
        emServico = false;
    }

    void EnterService()
    {
        emServico = true;
    }

    void ExitService()
    {
        emServico = false;
    }
}
