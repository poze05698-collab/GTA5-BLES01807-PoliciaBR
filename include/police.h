#ifndef POLICE_H
#define POLICE_H

namespace Police
{
    void Init();

    void EnterService();
    void ExitService();

    void SpawnVehicle();
    void Equipment();

    void ToggleSiren();

    void ApproachNPC();
    void StartPursuit();
    void ArrestSuspect();
    void FineSuspect();

    void WantedSystem();

    void PoliceCalls();
    void RequestBackup();

    void PoliceOperations();
    void FavelaOperations();

    void Radio();
    void Uniform();
    void PoliceStations();

    void RankSystem();
}

#endif
