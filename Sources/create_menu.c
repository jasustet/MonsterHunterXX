#include "cheats.h"

#define ENTRY_COUNT 300

typedef struct s_menu
{
    int count;
    int status;
    u32 f[ENTRY_COUNT];
    u32 s[ENTRY_COUNT];
    int a[ENTRY_COUNT];
    const char *t[ENTRY_COUNT];
    const char *n[ENTRY_COUNT];
    void (*fp[ENTRY_COUNT])();
} t_menu;


typedef void (*FuncPointer)(void);
extern t_menu menu;


void new_super_unselectable_entry(char *str, FuncPointer function)
{
    int index;

    index = menu.count;
    if (index >= 300)
        return;
    new_unselectable_entry(str);
    menu.f[index] |= BIT(0) | BIT(1);
    menu.fp[index] = function;
}

void with_note_common(const char *name, const char *note, void (*cheatfunction)(void), int type)
{
    int index;

    if (type == 0)
        index = new_entry((char *)name, cheatfunction);
    else if (type == 1)
        index = new_radio_entry((char *)name, cheatfunction);
    else if (type == 2)
        index = new_spoiler((char *)name);
    else return;
    set_note(note, index);
}

inline void new_entry_with_note(const char *name, const char *note, void (*cheatfunction)(void))
{
    with_note_common(name, note, cheatfunction, 0);
}

inline void new_radio_entry_with_note(const char *name, const char *note, void (*cheatfunction)(void))
{
    with_note_common(name, note, cheatfunction, 1);
}

inline void new_spoiler_with_note(const char *name, const char *note)
{
    with_note_common(name, note, NULL, 2);
}

char *builder_name = "jasu";

	static const char * const shop_note = "Enable this cheat before loading a save. Currently not working.";
	static const char * const freesmith_note = "Enable this cheat before loading a save.";
	static const char * const zenny_note = "L+X= 9999999 z";
	static const char * const points_note = "L+X= 9999999 points";
	static const char * const talisman_note = "L+X= Scan Box for Talisman. Will make invalid talisman!";
	static const char * const maxitems_note = "L+X= Scan Pouch for Items.";
	static const char * const hpdisplay_note = "L+UP= On / L+DOWN= Off";
	static const char * const paralyze_note = "L+B= Paralyze all monster in current area. / R+B= Off";
	static const char * const speed_note = "L+RIGHT/x5= +0.25+/+4 / L+LEFT= Reset";
	static const char * const attack_note = "Y+UP/x5= +1/+200 / Y+DOWN= Reset";
	static const char * const defense_note = "X+UP/x5= +1/+200 / X+DOWN= Reset";
	static const char * const itemplacement_note = "Unlimited traps/bombs/meats placement. Disables manual trap destroy.";

void my_menus(void)
{
//	new_unselectable_entry("Codes by **ymyn**");
	new_unselectable_entry("Press Y to view Triggers/Notes");
//	new_entry_with_note("Expanded Shop",shop_note, shop);
	new_entry_with_note("Free Smith",freesmith_note, freesmith);
	new_entry_with_note("Max Zenny",zenny_note, zenny);
	new_entry_with_note("Max Wycademy Points", points_note, points);
	new_entry_with_note("Set All Talisman Slots to 3", talisman_note, talisman);
	new_entry_with_note("x99 Pouch Items", maxitems_note, maxitems);
	new_entry_with_note("Monster HP Display", hpdisplay_note, hpdisplay);
	new_entry_with_note("Paralyze All Monsters", paralyze_note, paralyze);
	new_entry_with_note("Speed Multiplier", speed_note, speed);
	new_entry_with_note("Attack Multiplier", attack_note, attack);
	new_entry_with_note("Defense Multiplier", defense_note, defense);
	new_spoiler_with_note("Unlimited Item Placement", itemplacement_note);
	new_radio_entry("Enable", itemplacement);
	new_radio_entry("Disable", offitemplacement);
	exit_spoiler();
	new_separator();
	new_spoiler("Invincible");
	new_radio_entry("Enable", iframes);
	new_radio_entry("Disable", offiframes);
	exit_spoiler();
	new_spoiler("Infinite Health");
	new_radio_entry("Enable", health);
	new_radio_entry("Disable", offhealth);
	exit_spoiler();
	new_spoiler("Infinite Carves/Gathers");
	new_radio_entry("Enable", carves);
	new_radio_entry("Disable", offcarves);
	exit_spoiler();
	new_entry("Infinite Stamina", stamina);
	new_entry("Infinite Sharpness", sharpness);
	new_entry("Super Armor", superarmor);
	new_entry("Max Hunter Arts Gauge", hagauge);
	new_entry("Max Prowler Support Gauge", psgauge);
	new_entry("Max Brave Gauge", bravegauge);
	new_entry("Max Spirit Bar", spiritbar);
	new_entry("Fast Great Sword Charge", greatsword);
	new_entry("Bowgun Auto Reload", bowgun);
	new_entry("Unlimited bullets squat mode", squat);
	new_entry("100% Affinity", affinity);
	new_entry("Infinite Items In-Quest", items);
	new_entry("Autotracker", autotracker);
	new_entry("Capture Guru", captureguru);
	new_entry("Map In-Quest", map);
	new_entry("Eazy Eggs/Stones Carry", egg);
	new_entry("Free Item Combo", combo);
	new_entry("3 Hunter Art Slots Available", haslot);
	new_entry("Hold 99 of Each Pouch Item", pouch);
	new_entry("Maximum Box Slots (1400)", box);
	new_entry("Complete Smithy Inventory", smith);
	new_entry("Prowler EXP x64", prowlerexp);
	new_entry("Armorskill Extender", armorskill);
}