#include "SDL.h"
#include <iostream>
#include "mf/core.h"
#include "mf/colors.h"
#include "mf/extra.h"
#include "mf/graphics.h"

#include "headers/data.h"

namespace logic {
    void DrawStars(core::MF_Window &window, data::Map map) {
        // Variables used for scaling elements
		float wFactor = extra::castToFloat(window.width) / 1280;
		float hFactor = extra::castToFloat(window.height) / 800;

        std::cout << wFactor << " " << hFactor << std::endl;

        for(int x = 0; x < map.width; x++) {
            for(int y = 0; y < map.height; y++) {
                if(map.map[x][y] == 1) {
                    draw::DrawRect(window.renderer, {extra::castToInt(x * wFactor), extra::castToInt(y * hFactor), extra::castToInt(1 * wFactor), extra::castToInt(1 * hFactor)}, colors::white);
                }
            }
        }
    }
}