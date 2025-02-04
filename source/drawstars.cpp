#include "SDL.h"

#include "mf/core.h"
#include "mf/colors.h"
#include "mf/graphics.h"

#include "headers/data.h"

namespace logic {
    void DrawStars(core::MF_Window &window, data::Map map) {
        draw::SetDrawColor(window.renderer, colors::white);

        for(int x = 0; x < map.width; x++) {
            for(int y = 0; y < map.height; y++) {
                if(map.map[x][y] == 1) {
                    draw::DrawPixel(window.renderer, x, y);
                }
            }
        }
    }
}