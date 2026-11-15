
#include <mod/amlmod.h>
#include <mod/logger.h>
#include <mod/config.h>

// GANG HANGOUT
// GTA SA Android 2.00 ARM32
// AML Plugin

MYMODCFG(net.ganghangout.gtasa, GANG HANGOUT, 0.1, OpenAI)

ON_MOD_LOAD()
{
    logger->SetTag("GANG_HANGOUT");

    logger->Info("================================");
    logger->Info("GANG HANGOUT LOADED");
    logger->Info("GTA SA ANDROID 2.00 ARM32");
    logger->Info("Ambient Mode: Planned");
    logger->Info("Proximity Mode: Planned");
    logger->Info("Gang Turf System: Planned");
    logger->Info("Vehicle Lean Animation: Planned");
    logger->Info("Gang Conversation: Planned");
    logger->Info("================================");
}
