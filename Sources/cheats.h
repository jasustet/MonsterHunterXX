#ifndef CHEATS_H
#define CHEATS_H

#include "plugin.h"

#ifndef ADDSUBFLOAT
    #define ADDTOFLOAT(addr, add_value) *(float *)(addr) += (float)(add_value)
    #define SUBTOFLOAT(addr, sub_value) *(float *)(addr) -= (float)(sub_value)
#endif

#ifndef READWRITEFLOAT
    #define READFLOAT(addr) *(float *)(addr)
    #define WRITEFLOAT(addr, data) *(float *)(addr) = data
#endif

#ifndef ADDSUBTOUNSIGNED
    #define ADDTOUNSIGNED(addr, value) *(u32 *)(addr) += value
    #define SUBTOUNSIGNED(addr, value) *(u32 *)(addr) -= value
#endif

void	shop(void);
void	freesmith(void);
void	talisman(void);
void	maxitems(void);
void	zenny(void);
void	points(void);
void	hpdisplay(void);
void	paralyze(void);
void	itemplacement(void);
void	iframes(void);
void	health(void);
void	carves(void);
void	offitemplacement(void);
void	offiframes(void);
void	offcarves(void);
void	offhealth(void);
void	stamina(void);
void	sharpness(void);
void	superarmor(void);
void	hagauge(void);
void	psgauge(void);
void	bravegauge(void);
void	spiritbar(void);
void	greatsword(void);
void	bowgun(void);
void	affinity(void);
void	items(void);
void	autotracker(void);
void	captureguru(void);
void	map(void);
void	egg(void);
void	combo(void);
void	haslot(void);
void	pouch(void);
void	box(void);
void	smith(void);
void	prowlerexp(void);
void	attack(void);
void	defense(void);
void	speed(void);
void	armorskill(void);

#endif
