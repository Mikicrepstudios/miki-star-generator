#include "headers/data.h"

namespace logic {
    void ClearMap(data::Map &map) {
        for(int x = 0; x < map.width; x++) {
            for(int y = 0; y < map.height; y++) {
                map.map[x][y] = 0;
            }
        }
    }
}