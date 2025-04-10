#pragma once

namespace data {
    struct Settings {
        int starsAmount = 500;
        int starSizeMin = 1;
        int starSizeMax = 2;
        
        bool generated = false;
    };

    struct Map {
        int width = 1280 - 1;
        int height = 800 - 1;

        int map[1280][800] = {};
    };
}