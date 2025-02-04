#pragma once

#include "mf/core.h"

#include "data.h"

namespace logic {
    void ClearMap(data::Map &map);
    void GenerateStars(data::Settings &settings, data::Map &map);
    void DrawStars(core::MF_Window &window, data::Map map);
}