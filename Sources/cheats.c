#include "cheats.h"
#include "hid.h"

u32 offset = 0;
u32 data = 0;


void	shop(void) // Not working
{
	if (READU32(0x00BE5CA4) == 0x00000000)
	{
		WRITEU32(0x00BE5CA0, 0x00000010);
	}
	if (READU32(0x00BE5CA0) != 0x00000000)
	{
		data = (READU32 (0x00BE5CA0)) - 0x01;
		WRITEU32(0x00BE5CA0, data);
	}
	if (READU32(0x00BE5CA0) == 0x00000001)
	{
		offset = READU32(0x00BE5CA4);
		if (READU32(offset + 0x00024DD8) == 0xE1A01006)
		{
			WRITEU32(offset + 0x00024DD8, 0xE3A01EBB);
		}
		if (READU32(offset + 0x0006DB04) == 0xE1D110BE)
		{
			WRITEU32(offset + 0x0006DAE8, 0xE08A9007);
			WRITEU32(offset + 0x0006DAF0, 0xE2899001);
			WRITEU32(offset + 0x0006DB04, 0xE08A1007);
		}
	}
	offset = READU32(0x00D85980);
	offset = READU32(offset + 0x70);
	for (int loop = 0; loop < 32; ++loop)
	{
		if (READU32 (offset + 0x0214) != 0x000EA000)
		{
			offset = offset + 0x30;
		}
	}
	data = (READU32 (offset + 0x0210));
	WRITEU32(0x00BE5CA4, data);
}

void	freesmith(void)
{
	WRITEU32(0x0017B600, 0xE3A00063);
	WRITEU32(0x0017C230, 0xE3A00001);
}
//{
//	WRITEU32(0x0017B600, 0xE3A00063);
//	WRITEU32(0x0017C230, 0xE3A00001);
//	if (READU32(0x00BE5CAC) == 0x00000000)
//	{
//		WRITEU32(0x00BE5CA8, 0x00000010);
//	}
//	if (READU32(0x00BE5CA8) != 0x00000000)
//	{
//		data = (READU32 (0x00BE5CA8)) - 0x01;
//		WRITEU32(0x00BE5CA8, data);
//	}
//	if (READU32(0x00BE5CA8) == 0x00000001)
//	{
//		offset = READU32(0x00BE5CAC);
//		if (READU32(offset + 0x00041CE4) == 0xE5D60004)
//		{
//			WRITEU32(offset + 0x00041CE4, 0xE3A00004);
//		}
//		if (READU32(offset + 0x0003DC28) == 0x0A000001)
//		{
//			WRITEU32(offset + 0x0003DC28, 0xE1A00000);
//		}
//		if (READU32(offset + 0x0004478C) == 0x0A000044)
//		{
//			WRITEU32(offset + 0x0004478C, 0xE1A00000);
//		}
//	}
//	offset = READU32(0x00D85980);
//	offset = READU32(offset + 0x70);
//	for (int loop = 0; loop < 32; ++loop)
//	{
//		if (READU32 (offset + 0x0214) != 0x000EA000)
//		{
//			offset = offset + 0x30;
//		}
//	}
//	data = (READU32 (offset + 0x0210));
//	WRITEU32(0x00BE5CAC, data);
//}

void	talisman(void)
{
	if (is_pressed(L + X))
	{
		offset = READU32(0x00D2D390);
		for (int loop = 0; loop < 1400; ++loop)
		{
			if ((READU8(offset + 0x18)) == 0x06)
			{
				WRITEU8(offset + 0x28, 0x03);
			}
			offset = offset + 0x2C;
		}
	}
}

void	maxitems(void)
{
	if (is_pressed(L + X))
	{
		offset = 0x0830DC34;
		for (int loop = 0; loop < 40; ++loop)
		{
			if ((READU8(offset)) > 0x00)
			{
				WRITEU8(offset, 0x63);
			}
			offset = offset + 0x04;
		}
	}
}

void	zenny(void)
{
	if (is_pressed(L + X))
	{
		offset = READU32(0x00D32660);
		WRITEU32(offset + 0x1C, 0x0098967F);
	}
}

void	points(void)
{
	if (is_pressed(L + X))
	{
		offset = READU32(0x00D32660);
		WRITEU32(offset + 0x24, 0x0098967F);
	}
}

void	hpdisplay(void)
{
	WRITEU32(0x00BE5D50, 0xE3A00001);
	WRITEU32(0x00BE5D54, 0xE584005C);
	WRITEU32(0x00BE5D58, 0xE59F002C);
	WRITEU32(0x00BE5D5C, 0xE5900000);
	WRITEU32(0x00BE5D60, 0xE200730F);
	WRITEU32(0x00BE5D64, 0xE3570203);
	WRITEU32(0x00BE5D68, 0x13A00000);
	WRITEU32(0x00BE5D6C, 0x05900360);
	WRITEU32(0x00BE5D70, 0xE3500601);
	WRITEU32(0x00BE5D74, 0x83A00000);
	WRITEU32(0x00BE5D78, 0xE12FFF1E);
	WRITEU32(0x00BE5D7C, 0xE58C0360);
	WRITEU32(0x00BE5D80, 0xE59F1004);
	WRITEU32(0x00BE5D84, 0xE581C000);
	WRITEU32(0x00BE5D88, 0xEAF378A8);
	WRITEU32(0x00BE5D8C, 0x00D24000);
	WRITEU32(0x008C402C, 0xEA0C8752);
	if (is_pressed(L + DU))
	{
		WRITEU32(0x002438B8, 0xEA000002);
		WRITEU32(0x00243A90, 0xE3A00004);
		WRITEU32(0x00243F14, 0xEB26878D);
	}
	if (is_pressed(L + DD))
	{
		WRITEU32(0x002438B8, 0xE3500000);
		WRITEU32(0x00243A90, 0xE7D00005);
		WRITEU32(0x00243F14, 0xE3E00000);
	}
}

void	paralyze(void)
{
	WRITEU32(0x00BE5D30, 0xE92D4005);
	WRITEU32(0x00BE5D34, 0xE2812B16);
	WRITEU32(0x00BE5D38, 0xE1D205BC);
	WRITEU32(0x00BE5D3C, 0xE2800010);
	WRITEU32(0x00BE5D40, 0xE1C205BE);
	WRITEU32(0x00BE5D44, 0xE2811F6B);
	WRITEU32(0x00BE5D48, 0xE8BD8005);
	if (is_pressed(L + B))
	{
		WRITEU32(0x008B0A4C, 0xEB0CD4B7);
	}
	if (is_pressed(R + B))
	{
		WRITEU32(0x008B0A4C, 0xE2811F6B);
	}
}

void	itemplacement(void)
{
	WRITEU32(0x00ADA2A0, 0xE3A00001);
	WRITEU32(0x00C53510, 0x000000FF);
	WRITEU32(0x00C53518, 0x000000FF);
	WRITEU32(0x00C53520, 0x000000FF);
	WRITEU32(0x00C53528, 0x000000FF);
}

void	iframes(void)
{
	WRITEU32(0x00A0573C, 0xE3A00000);
}

void	health(void)
{
	WRITEU32(0x0044156C, 0xE1D025F8);
	WRITEU32(0x00441588, 0xE1C025B6);
}

void	carves(void)
{
	WRITEU32(0x0083B868, 0xE2400000);
	WRITEU32(0x0083B970, 0xE2400000);
	WRITEU32(0x008C1EE0, 0xE3A00000);
}

void	offitemplacement(void)
{
	WRITEU32(0x00ADA2A0, 0xE3A00000);
	WRITEU32(0x00C53510, 0x00000003);
	WRITEU32(0x00C53518, 0x00000003);
	WRITEU32(0x00C53520, 0x00000002);
	WRITEU32(0x00C53528, 0x00000002);
}

void	offiframes(void)
{
	WRITEU32(0x00A0573C, 0xEBFE2921);
}

void	offhealth(void)
{
	WRITEU32(0x0044156C, 0xE1D025F6);
	WRITEU32(0x00441588, 0xE1D025F8);
}

void	offcarves(void)
{
	WRITEU32(0x0083B868, 0xE2400001);
	WRITEU32(0x0083B970, 0xE2400001);
	WRITEU32(0x008C1EE0, 0xEBFF658D);
}

void	stamina(void)
{
	WRITEU32(0x00A5E914, 0xE3A00001);
}

void	sharpness(void)
{
	WRITEU32(0x00351194, 0xE59013D4);
}

void	superarmor(void)
{
	WRITEU32(0x002F5F7C, 0xE3A05001);
	WRITEU32(0x0031AB00, 0xE3A00001);
}

void	hagauge(void)
{
	WRITEU32(0x00A62524, 0xE1D02BFE);
	WRITEU32(0x00A62528, 0xE1C02BB8);
	WRITEU32(0x00A6252C, 0xE1520002);
}

void	psgauge(void)
{
	WRITEU32(0x00A622D0, 0xE3A01B09);
	WRITEU32(0x00A622D4, 0xE58013DC);
	WRITEU32(0x00A622D8, 0xE3A00001);
	WRITEU32(0x00A622DC, 0xEA000000);
}

void	bravegauge(void)
{
	WRITEU32(0x002F3E40, 0xE3A00FFA);
	WRITEU32(0x002F3E44, 0xE58603EC);
	WRITEU32(0x002F3E48, 0xEA000000);
	WRITEU32(0x002F3EA0, 0xE3800501);
	WRITEU32(0x002F3EA4, 0xE58603A8);
}

void	spiritbar(void)
{
	WRITEU32(0x00309CE8, 0xE3A01064);
	WRITEU32(0x00A61310, 0xE3A00B09);
}

void	greatsword(void)
{
	WRITEU32(0x00BE5DF4, 0xE24F0000);
	WRITEU32(0x00BE5DF8, 0xEAF992E2);
	WRITEU32(0x00BE5DFC, 0xE92D0002);
	WRITEU32(0x00BE5E00, 0xE59F1014);
	WRITEU32(0x00BE5E04, 0xE151000E);
	WRITEU32(0x00BE5E08, 0x024F0014);
	WRITEU32(0x00BE5E0C, 0xEDD01A07);
	WRITEU32(0x00BE5E10, 0xE8BD0002);
	WRITEU32(0x00BE5E14, 0xEAF992E2);
	WRITEU32(0x00BE5E18, 0x41200000);
	WRITEU32(0x00BE5E1C, 0x0156AAE4);
	WRITEU32(0x002FC108, 0xEA23A739);
	WRITEU32(0x00A4A9A0, 0xEA066D15);
}

void	bowgun(void)
{
	WRITEU32(0x002F9798, 0xE5C407D2);
	WRITEU32(0x002F97A0, 0xE5C407D3);
}

void	squat(void)
{
	WRITEU32(0x00A7BEC8, 0xE5C0101A);
}

void	affinity(void)
{
	WRITEU32(0x008ED510, 0xE3A000C8);
	WRITEU32(0x008EF780, 0xE3A000C8);
	WRITEU32(0x008EF794, 0xE3A000C8);
}

void	items(void)
{
	WRITEU32(0x003530B0, 0xE3A08000);
}

void	autotracker(void)
{
	WRITEU32(0x008E5B54, 0xE3A00001);
	WRITEU32(0x0038FB00, 0xE3A00001);
}

void	captureguru(void)
{
	WRITEU32(0x0038FCC4, 0xE3A00001);
}

void	map(void)
{
	WRITEU32(0x002A9BF8, 0xE3A00001);
}

void	egg(void)
{
	WRITEU32(0x00ACB120, 0x93A00000);
}

void	combo(void)
{
	WRITEU32(0x00390620, 0xE3A00000);
	WRITEU32(0x009DDE7C, 0xE3A00000);
	WRITEU32(0x009DDEB0, 0xEA000000);
}

void	haslot(void)
{
	WRITEU32(0x00AE283C, 0xE3A00003);
	WRITEU32(0x00AE2840, 0xE12FFF1E);
}

void	pouch(void)
{
	WRITEU32(0x00BE5E20, 0xE5940418);
	WRITEU32(0x00BE5E24, 0xE92D4007);
	WRITEU32(0x00BE5E28, 0xE59F0044);
	WRITEU32(0x00BE5E2C, 0xE5900000);
	WRITEU32(0x00BE5E30, 0xE5900014);
	WRITEU32(0x00BE5E34, 0xE5900068);
	WRITEU32(0x00BE5E38, 0xE5901000);
	WRITEU32(0x00BE5E3C, 0xE59F2034);
	WRITEU32(0x00BE5E40, 0xE1510002);
	WRITEU32(0x00BE5E44, 0x18BD8007);
	WRITEU32(0x00BE5E48, 0xE5D0100E);
	WRITEU32(0x00BE5E4C, 0xE3510001);
	WRITEU32(0x00BE5E50, 0x18BD8007);
	WRITEU32(0x00BE5E54, 0xE280000E);
	WRITEU32(0x00BE5E58, 0xE59F101C);
	WRITEU32(0x00BE5E5C, 0xE0811000);
	WRITEU32(0x00BE5E60, 0xE3A02063);
	WRITEU32(0x00BE5E64, 0xE4C02038);
	WRITEU32(0x00BE5E68, 0xE1510000);
	WRITEU32(0x00BE5E6C, 0x1AFFFFFC);
	WRITEU32(0x00BE5E70, 0xE8BD8007);
	WRITEU32(0x00BE5E74, 0x00D2D608);
	WRITEU32(0x00BE5E78, 0x00CECFBC);
	WRITEU32(0x00BE5E7C, 0x00028E48);
	WRITEU32(0x00127ECC, 0xEB2AF7D3);
}

void	box(void)
{
	WRITEU32(0x009BFAE8, 0xE3811606);
	WRITEU32(0x009BFAEC, 0xE5801950);
	WRITEU32(0x009BFAF0, 0xE3A02002);
	WRITEU32(0x009BFAF4, 0xE1A00000);
}

void	smith(void)
{
	WRITEU32(0x00AF37A8, 0xE3A00001);
	WRITEU32(0x00AF36DC, 0xE3A00001);
	WRITEU32(0x00ACB6B0, 0xE3A00001);
}

void	prowlerexp(void)
{
	WRITEU32(0x008EFA90, 0xE0814300);
}

void	attack(void)
{
	static u32 huntattdata = 0xE3A04001;
	static u32 prowattdata = 0xE3A03001;
	static int attcounter = 0;

	if (is_pressed(Y + DU) && attcounter < 5)
	{
		attcounter = attcounter + 1;
		huntattdata = huntattdata + 0x01;
		prowattdata = prowattdata + 0x01;
		WRITEU32(0x00BE5CE0, 0xE92D4018);
		WRITEU32(0x00BE5CE4, huntattdata);
		WRITEU32(0x00BE5CE8, 0xE1D130BE);
		WRITEU32(0x00BE5CEC, 0xE0030493);
		WRITEU32(0x00BE5CF0, 0xE3530C7D);
		WRITEU32(0x00BE5CF4, 0xA3A03C7D);
		WRITEU32(0x00BE5CF8, 0xE1C130BE);
		WRITEU32(0x00BE5CFC, 0xE3A01000);
		WRITEU32(0x00BE5D00, 0xE8BD8018);
		WRITEU32(0x008EBB90, 0xEB0BE852);
		WRITEU32(0x00BE5D94, prowattdata);
		WRITEU32(0x00BE5DC8, 0x00000005);
		WRITEU32(0x0035D844, 0xEA000002);		
		if (attcounter == 5)
		{
			WRITEU32(0x00BE5CE4, 0xE3A040C8);
			WRITEU32(0x00BE5D94, 0xE3A030C8);
			WRITEU32(0x00BE5DC8, 0x00000005);
			WRITEU32(0x0035D844, 0xEA000002);
		}
		wait_keys_released(DU);
	}
	if (is_pressed(Y + DD))
	{
		attcounter = 0;
		huntattdata = 0xE3A04001;
		prowattdata = 0xE3A03001;
		WRITEU32(0x00BE5CE4, 0xE3A04001);
		WRITEU32(0x00BE5D94, 0xE3A03001);
		WRITEU32(0x00BE5DC8, 0x00000005);
		WRITEU32(0x0035D844, 0xEA000002);
	}
	if (READU32(0x008EE738) == 0xE3A01010)
	{
		WRITEU32(0x00BE5D90, 0xE92D400C);
		WRITEU32(0x00BE5D94, 0xE3A03001);
		WRITEU32(0x00BE5D98, 0xE1D520BE);
		WRITEU32(0x00BE5D9C, 0xE0020392);
		WRITEU32(0x00BE5DA0, 0xE3520C7D);
		WRITEU32(0x00BE5DA4, 0xA3A02C7D);
		WRITEU32(0x00BE5DA8, 0xE1C520BE);
		WRITEU32(0x00BE5DAC, 0xE1D522B6);
		WRITEU32(0x00BE5DB0, 0xE0020392);
		WRITEU32(0x00BE5DB4, 0xE3520C7D);
		WRITEU32(0x00BE5DB8, 0xA3A02C7D);
		WRITEU32(0x00BE5DBC, 0xE1C522B6);
		WRITEU32(0x00BE5DC0, 0xE3A01010);
		WRITEU32(0x00BE5DC4, 0xE8BD800C);
		WRITEU32(0x008EE738, 0xEB0BDD94);
	}
	if (READU32(0x00BE5DC8) != 0x00000000)
	{
		data = (READU32 (0x00BE5DC8)) - 0x01;
		WRITEU32(0x00BE5DC8, data);
	}
	if (READU32(0x00BE5DC8) == 0x00000001)
	{
		WRITEU32(0x0035D844, 0x0A000002);
	}
}

void	defense(void)
{
	static u32 huntdefdata = 0xE3A02001;
	static u32 prowdefdata = 0xE3A02001;
	static int defcounter = 0;

	if (is_pressed(X + DU) && defcounter < 5)
	{
		defcounter = defcounter + 1;
		huntdefdata = huntdefdata + 0x01;
		prowdefdata = prowdefdata + 0x01;
		WRITEU32(0x00BE5D10, 0xE92D4004);
		WRITEU32(0x00BE5D14, huntdefdata);
		WRITEU32(0x00BE5D18, 0xE0000290);
		WRITEU32(0x00BE5D1C, 0xE3500C7D);
		WRITEU32(0x00BE5D20, 0xA3A00C7D);
		WRITEU32(0x00BE5D24, 0xE18100B5);
		WRITEU32(0x00BE5D28, 0xE8BD8004);
		WRITEU32(0x008ECD18, 0xEB0BE3FC);
		WRITEU32(0x00BE5DD4, prowdefdata);
		WRITEU32(0x00BE5DEC, 0x00000005);
		WRITEU32(0x0035D844, 0xEA000002);
		if (defcounter == 5)
		{
			WRITEU32(0x00BE5D14, 0xE3A020C8);
			WRITEU32(0x00BE5DD4, 0xE3A020C8);
			WRITEU32(0x00BE5DEC, 0x00000005);
			WRITEU32(0x0035D844, 0xEA000002);
		}
		wait_keys_released(DU);
	}
	if (is_pressed(X + DD))
	{
		defcounter = 0;
		huntdefdata = 0xE3A02001;
		prowdefdata = 0xE3A02001;
		WRITEU32(0x00BE5D14, 0xE3A02001);
		WRITEU32(0x00BE5DD4, 0xE3A02001);
		WRITEU32(0x00BE5DEC, 0x00000005);
		WRITEU32(0x0035D844, 0xEA000002);
	}
	if (READU32(0x008EF224) == 0xE18100B5)
	{
		WRITEU32(0x00BE5DD0, 0xE92D4004);
		WRITEU32(0x00BE5DD4, 0xE3A02001);
		WRITEU32(0x00BE5DD8, 0xE0000290);
		WRITEU32(0x00BE5DDC, 0xE3500C7D);
		WRITEU32(0x00BE5DE0, 0xA3A00C7D);
		WRITEU32(0x00BE5DE4, 0xE18100B5);
		WRITEU32(0x00BE5DE8, 0xE8BD8004);
		WRITEU32(0x008EF224, 0xEB0BDAE9);
	}
	if (READU32(0x00BE5DEC) != 0x00000000)
	{
		data = (READU32 (0x00BE5DEC)) - 0x01;
		WRITEU32(0x00BE5DEC, data);
	}
	if (READU32(0x00BE5DEC) == 0x00000001)
	{
		WRITEU32(0x0035D844, 0x0A000002);
	}
}

void	speed(void)
{
	static u32 speeddata = 0x3F800000;
	static int speedcounter = 0;

	if (is_pressed(L + DR) && speedcounter < 5)
	{
		speedcounter = speedcounter + 1;
		speeddata = speeddata + 0x00200000;
		WRITEU32(0x00BE5CB0, 0xED9F1A04);
		WRITEU32(0x00BE5CB4, 0xED9F2A04);
		WRITEU32(0x00BE5CB8, 0xEE311A02);
		WRITEU32(0x00BE5CBC, 0xEE000A01);
		WRITEU32(0x00BE5CC0, 0xE1A00004);
		WRITEU32(0x00BE5CC4, 0xE12FFF1E);
		WRITEU32(0x00BE5CC8, 0xBF800000);
		WRITEU32(0x00BE5CCC, speeddata);
		WRITEU32(0x00BE5CD0, 0xE51F000C);
		WRITEU32(0x00BE5CD4, 0xE5860130);
		WRITEU32(0x00BE5CD8, 0xE3A00000);
		WRITEU32(0x00BE5CDC, 0xE12FFF1E);
		WRITEU32(0x002EE1C8, 0xEB23DEB8);
		WRITEU32(0x002DACC8, 0xEB242C00);
		if (speedcounter == 5)
		{
			WRITEU32(0x00BE5CCC, 0x41000000);
		}
		wait_keys_released(DR);
	}
	if (is_pressed(L + DL))
	{
		speedcounter = 0;
		speeddata = 0x3F800000;
		WRITEU32(0x00BE5CCC, 0x3F800000);
	}
}


void	armorskill(void)
{
	WRITEU32(0x008EA434, 0xE3A01029);
	WRITEU32(0x008EA444, 0x13A04096);
	WRITEU32(0x008EA4C8, 0xE3A0102A);
	WRITEU32(0x008EA4D8, 0x13A04078);
	
	if (READU32(0x00AD44F4) == 0xE1A002A1)
	{
		WRITEU32(0x00BE5EC0, 0xE92D41FC);
		WRITEU32(0x00BE5EC4, 0xE3A06001);
		WRITEU32(0x00BE5EC8, 0xE3A08000);
		WRITEU32(0x00BE5ECC, 0xE3A02000);
		WRITEU32(0x00BE5ED0, 0xE08031A2);
		WRITEU32(0x00BE5ED4, 0xE2024007);
		WRITEU32(0x00BE5ED8, 0xE5D35000);
		WRITEU32(0x00BE5EDC, 0xE1A07416);
		WRITEU32(0x00BE5EE0, 0xE1150007);
		WRITEU32(0x00BE5EE4, 0x0A000003);
		WRITEU32(0x00BE5EE8, 0xE1510008);
		WRITEU32(0x00BE5EEC, 0x01A00002);
		WRITEU32(0x00BE5EF0, 0x08BD81FC);
		WRITEU32(0x00BE5EF4, 0x12888001);
		WRITEU32(0x00BE5EF8, 0xE2822001);
		WRITEU32(0x00BE5EFC, 0xE3520F52);
		WRITEU32(0x00BE5F00, 0x1AFFFFF2);
		WRITEU32(0x00BE5F04, 0xE3A00000);
		WRITEU32(0x00BE5F08, 0xE8BD81FC);
		WRITEU32(0x00BE5F0C, 0xE92D4001);
		WRITEU32(0x00BE5F10, 0xE2880FF7);
		WRITEU32(0x00BE5F14, 0xE1A01007);
		WRITEU32(0x00BE5F18, 0xEBFFFFE8);
		WRITEU32(0x00BE5F1C, 0xE1A01000);
		WRITEU32(0x00BE5F20, 0xE8BD8001);
		WRITEU32(0x00BE5F24, 0xE92D4000);
		WRITEU32(0x00BE5F28, 0xE2880FF7);
		WRITEU32(0x00BE5F2C, 0xE1A01003);
		WRITEU32(0x00BE5F30, 0xEBFFFFE2);
		WRITEU32(0x00BE5F34, 0xE8BD8000);
		WRITEU32(0x00BE5F38, 0xE92D4000);
		WRITEU32(0x00BE5F3C, 0xE5900188);
		WRITEU32(0x00BE5F40, 0xE2800FF7);
		WRITEU32(0x00BE5F44, 0xEBFFFFDD);
		WRITEU32(0x00BE5F48, 0xE8BD8000);
		WRITEU32(0x00BE5F4C, 0xE1A002A1);
		WRITEU32(0x00BE5F50, 0xE92D00FE);
		WRITEU32(0x00BE5F54, 0xE3A06001);
		WRITEU32(0x00BE5F58, 0xE28F3030);
		WRITEU32(0x00BE5F5C, 0xE2834030);
		WRITEU32(0x00BE5F60, 0xE0D310B2);
		WRITEU32(0x00BE5F64, 0xE3510000);
		WRITEU32(0x00BE5F68, 0x0A000004);
		WRITEU32(0x00BE5F6C, 0xE08251A1);
		WRITEU32(0x00BE5F70, 0xE2011007);
		WRITEU32(0x00BE5F74, 0xE5D573DC);
		WRITEU32(0x00BE5F78, 0xE1877116);
		WRITEU32(0x00BE5F7C, 0xE5C573DC);
		WRITEU32(0x00BE5F80, 0xE1540003);
		WRITEU32(0x00BE5F84, 0x1AFFFFF5);
		WRITEU32(0x00BE5F88, 0xE8BD00FE);
		WRITEU32(0x00BE5F8C, 0xEAFBB959);
		WRITEU32(0x004E13E8, 0xEB1C12C7);
		WRITEU32(0x004E15BC, 0xEB1C1258);
		WRITEU32(0x004E16C8, 0xEB1C121A);
		WRITEU32(0x00AD44F4, 0xEA044694);
	}
	
	WRITEU16(0x00BE5F90, 0x0000011C);
	WRITEU16(0x00BE5F92, 0x0000011D);
	WRITEU16(0x00BE5F94, 0x0000011E);
	WRITEU16(0x00BE5F96, 0x0000011F);
	WRITEU16(0x00BE5F98, 0x00000120);
	WRITEU16(0x00BE5F9A, 0x00000121);
	WRITEU16(0x00BE5F9C, 0x00000123);
	WRITEU16(0x00BE5F9E, 0x00000124);
	WRITEU16(0x00BE5FA0, 0x00000125);
	WRITEU16(0x00BE5FA2, 0x00000126);
	WRITEU16(0x00BE5FA4, 0x00000127);
	WRITEU16(0x00BE5FA6, 0x00000128);
	WRITEU16(0x00BE5FA8, 0x00000129);
	WRITEU16(0x00BE5FAA, 0x0000012A);
	WRITEU16(0x00BE5FAC, 0x0000012B);
	WRITEU16(0x00BE5FAE, 0x0000012C);
	WRITEU16(0x00BE5FB0, 0x0000012D);
	WRITEU16(0x00BE5FB2, 0x00000142);
	WRITEU16(0x00BE5FB4, 0x00000143);
	WRITEU16(0x00BE5FB6, 0x00000144);
	WRITEU16(0x00BE5FB8, 0x00000130);
	WRITEU16(0x00BE5FBA, 0x00000137);
	WRITEU16(0x00BE5FBC, 0x00000130);
	WRITEU16(0x00BE5FBE, 0x00000134);
}