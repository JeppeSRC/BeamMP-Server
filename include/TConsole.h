#pragma once

#include "Cryptography.h"
#include "commandline.h"
#include <atomic>
#include <fstream>

class TLuaEngine;

class TConsole {
public:
    TConsole();

    void Write(const std::string& str);
    void WriteRaw(const std::string& str);
    void InitializeLuaConsole(TLuaEngine& Engine);
    void BackupOldLog();
    Commandline& Internal() { return mCommandline; }

private:
    Commandline mCommandline;
    TLuaEngine* mLuaEngine { nullptr };
    const std::string mStateId = "BEAMMP_SERVER_CONSOLE";
};
