#include "mf/logic.h"

#include "data.h"
#include "logic.h"

namespace logic {
    void GenerateStars(data::Settings &settings, data::Map &map) {
        if(settings.generated == false) {
            logic::ClearMap(map);
            for(int i = 0; i < settings.starsAmount; i++) {
                int x = logic::GenRanNum(0, map.width);
                int y = logic::GenRanNum(0, map.height);

                int size = logic::GenRanNum(settings.starSizeMin, settings.starSizeMax);

                for(int xDraw = 0; xDraw <= size; xDraw++) {
                    for(int yDraw = 0; yDraw <= size; yDraw++) {
                        if(x + xDraw < map.width && y + yDraw < map.height) {
                            map.map[x + xDraw][y + yDraw] = 1;
                        }
                    }
                }
                //map.map[x][y] = 1;
            }

            settings.generated = true;
        }
    }
}