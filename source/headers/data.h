#pragma once

namespace data {
    struct Settings {
        int starsAmount = 100;
    };

    struct Map {
        int width = 1280 - 1;
        int height = 800 - 1;

        int map[1280][800] = {};
    };
}