//
//  treasure.h
//

#ifndef treasure_h
#define treasure_h

#include "physics.h"

#define TARGET_EXTENSION 1
#include "pd_api.h"

typedef struct {
	Vec2F pos;
	float radius;
	float t;
} GoldPiece;

void generateGold(void);
void processGold(Player player, int *score);
void drawGold(PlaydateAPI *pd, int offsetY);

#endif /* treasure_h */
