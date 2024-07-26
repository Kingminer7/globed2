#pragma once

#include <Geode/Bindings.hpp>

class PlayerIconData;
enum class PlayerIconType : uint8_t;

namespace util::gd {
    void reorderDownloadedLevel(GJGameLevel* level);
    void openProfile(int accountId, int userId, const std::string& name);
    int calcLevelDifficulty(GJGameLevel* level);


    int getIconWithType(const PlayerIconData& data, PlayerIconType type);
    int getIconWithType(const PlayerIconData& data, IconType type);
}