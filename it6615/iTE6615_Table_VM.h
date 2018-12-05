///*****************************************
//  Copyright (C) 2009-2018
//  ITE Tech. Inc. All Rights Reserved
//  Proprietary and Confidential
///*****************************************
//   @file   <iTE6615_Table_VM.h>
//   @author Kuro.Chung@ite.com.tw
//   @date   2018/07/04
//   @fileversion: iTE6615_MCUSRC_0.23
//******************************************/
#ifndef _iTE6615_VM_Table_H_
#define _iTE6615_VM_Table_H_

#if 0
#include "iTE6615_DEV_DEFINE.h"

_CODE iTE6615_VTiming iTE6615_VTable[] = {
    // Video Table
    {640,480,800,525,25175,16,96,48,10,2,33,59940,PROG,Vneg,Hneg,1,AR_4_3,"CEA Fmt1 640x480P@59.94Hz",1},

    {720,480,858,525,27000,16,62,60,9,6,30,59940,PROG,Vneg,Hneg,1,AR_4_3,"CEA Fmt2 720x480P@59.94Hz",2},
    {720,480,858,525,27000,16,62,60,9,6,30,59940,PROG,Vneg,Hneg,1,AR_16_9,"CEA Fmt3 720x480P@59.94Hz",3},

    {1280,720,1650,750,74250,110,40,220,5,5,20,60000,PROG,Vpos,Hpos,1,AR_16_9,"CEA Fmt4 1280x720P@60Hz",4},
    {1280,720,1650,750,74250,110,40,220,5,5,20,60000,PROG,Vpos,Hpos,1,AR_64_27,"CEA Fmt69 1280x720P@60Hz",69},

    {1920,540,2200,562,74250,88,44,148,2,5,15,60000,INTR,Vpos,Hpos,1,AR_16_9,"CEA Fmt5 1920x1080I@60Hz",5},

    {1440,240,1716,262,27000,38,124,114,4,3,15,59940,INTR,Vneg,Hneg,1,AR_4_3,"CEA Fmt6 1440x480I@59.94Hz",6},
    {1440/2,240,1716/2,262,27000/2,38/2,124/2,114/2,4,3,15,59940,INTR,Vneg,Hneg,2,AR_4_3,"CEA Fmt6 720x480I@59.94Hz",6},

    {1440,240,1716,262,27000,38,124,114,4,3,15,59940,INTR,Vneg,Hneg,1,AR_16_9,"CEA Fmt7 1440x480I@59.94Hz",7},
    {1440/2,240,1716/2,262,27000/2,38/2,124/2,114/2,4,3,15,59940,INTR,Vneg,Hneg,2,AR_16_9,"CEA Fmt7 720x480I@59.94Hz",7},

    {1440,240,1716,262,27000,38,124,114,4,3,15,60054,PROG,Vneg,Hneg,1,AR_4_3,"CEA Fmt8 (mode 1) 1440x240P@60.054Hz",8},
    {1440,240,1716,263,27000,38,124,114,5,3,15,59826,PROG,Vneg,Hneg,1,AR_4_3,"CEA Fmt8 (mode 2) 1440x240P@59.826Hz",8},
    {1440/2,240,1716/2,262,27000/2,38/2,124/2,114/2,4,3,15,60054,PROG,Vneg,Hneg,2,AR_4_3,"CEA Fmt8 (mode 1) 720x240P@60.054Hz",8},
    {1440/2,240,1716/2,263,27000/2,38/2,124/2,114/2,5,3,15,59826,PROG,Vneg,Hneg,2,AR_4_3,"CEA Fmt8 (mode 2) 720x240P@59.826Hz",8},

    {1440,240,1716,262,27000,38,124,114,4,3,15,60054,PROG,Vneg,Hneg,1,AR_16_9,"CEA Fmt9 (mode 1) 1440x240P@60.054Hz",9},
    {1440,240,1716,263,27000,38,124,114,5,3,15,59826,PROG,Vneg,Hneg,1,AR_16_9,"CEA Fmt9 (mode 2) 1440x240P@59.826Hz",9},
    {1440/2,240,1716/2,262,27000/2,38/2,124/2,114/2,4,3,15,60054,PROG,Vneg,Hneg,2,AR_16_9,"CEA Fmt9 (mode 1) 720x240P@60.054Hz",9},
    {1440/2,240,1716/2,263,27000/2,38/2,124/2,114/2,5,3,15,59826,PROG,Vneg,Hneg,2,AR_16_9,"CEA Fmt9 (mode 2) 720x240P@59.826Hz",9},

    {2880,240,3432,262,54000,76,248,228,4,3,15,59940,INTR,Vneg,Hneg,1,AR_4_3,"CEA Fmt10 2880x480I@59.94Hz",10},
    {2880/2,240,3432/2,262,54000/2,76/2,248/2,228/2,4,3,15,59940,INTR,Vneg,Hneg,2,AR_4_3,"CEA Fmt10 1440x480I@59.94Hz",10},
    {2880/4,240,3432/4,262,54000/4,76/4,248/4,228/4,4,3,15,59940,INTR,Vneg,Hneg,4,AR_4_3,"CEA Fmt10 720x480I@59.94Hz",10},

    {2880,240,3432,262,54000,76,248,228,4,3,15,59940,INTR,Vneg,Hneg,1,AR_16_9,"CEA Fmt11 2880x480I@59.94Hz",11},
    {2880/2,240,3432/2,262,54000/2,76/2,248/2,228/2,4,3,15,59940,INTR,Vneg,Hneg,2,AR_16_9,"CEA Fmt11 1440x480I@59.94Hz",11},
    {2880/4,240,3432/4,262,54000/4,76/4,248/4,228/4,4,3,15,59940,INTR,Vneg,Hneg,4,AR_16_9,"CEA Fmt11 720x480I@59.94Hz",11},

    {2880,240,3432,262,54000,76,248,228,4,3,15,60054,PROG,Vneg,Hneg,1,AR_4_3,"CEA Fmt12 (mode 1) 2880x240P@60.054Hz",12},
    {2880,240,3432,263,54000,76,248,228,5,3,15,59826,PROG,Vneg,Hneg,1,AR_4_3,"CEA Fmt12 (mode 2) 2880x240P@59.826Hz",12},
    {2880/2,240,3432/2,262,54000/2,76/2,248/2,228/2,4,3,15,60054,PROG,Vneg,Hneg,2,AR_4_3,"CEA Fmt12 (mode 1) 1440x240P@60.054Hz",12},
    {2880/2,240,3432/2,263,54000/2,76/2,248/2,228/2,5,3,15,59826,PROG,Vneg,Hneg,2,AR_4_3,"CEA Fmt12 (mode 2) 1440x240P@59.826Hz",12},
    {2880/4,240,3432/4,262,54000/4,76/4,248/4,228/4,4,3,15,60054,PROG,Vneg,Hneg,4,AR_4_3,"CEA Fmt12 (mode 1) 720x240P@60.054Hz",12},
    {2880/4,240,3432/4,263,54000/4,76/4,248/4,228/4,5,3,15,59826,PROG,Vneg,Hneg,4,AR_4_3,"CEA Fmt12 (mode 2) 720x240P@59.826Hz",12},

    {2880,240,3432,262,54000,76,248,228,4,3,15,60054,PROG,Vneg,Hneg,1,AR_16_9,"CEA Fmt13 (mode 1) 2880x240P@60.054Hz",13},
    {2880,240,3432,263,54000,76,248,228,5,3,15,59826,PROG,Vneg,Hneg,1,AR_16_9,"CEA Fmt13 (mode 2) 2880x240P@59.826Hz",13},
    {2880/2,240,3432/2,262,54000/2,76/2,248/2,228/2,4,3,15,60054,PROG,Vneg,Hneg,2,AR_16_9,"CEA Fmt13 (mode 1) 1440x240P@60.054Hz",13},
    {2880/2,240,3432/2,263,54000/2,76/2,248/2,228/2,5,3,15,59826,PROG,Vneg,Hneg,2,AR_16_9,"CEA Fmt13 (mode 2) 1440x240P@59.826Hz",13},
    {2880/4,240,3432/4,262,54000/4,76/4,248/4,228/4,4,3,15,60054,PROG,Vneg,Hneg,4,AR_16_9,"CEA Fmt13 (mode 1) 720x240P@60.054Hz",13},
    {2880/4,240,3432/4,263,54000/4,76/4,248/4,228/4,5,3,15,59826,PROG,Vneg,Hneg,4,AR_16_9,"CEA Fmt13 (mode 2) 720x240P@59.826Hz",13},

    {1440,480,1716,525,54000,32,124,120,9,6,30,59940,PROG,Vneg,Hneg,1,AR_4_3,"CEA Fmt14 1440x480P@59.94Hz",14},
    {1440/2,480,1716/2,525,54000/2,32/2,124/2,120/2,9,6,30,59940,PROG,Vneg,Hneg,2,AR_4_3,"CEA Fmt14 720x480P@59.94Hz",14},

    {1440,480,1716,525,54000,32,124,120,9,6,30,59940,PROG,Vneg,Hneg,1,AR_16_9,"CEA Fmt15 1440x480P@59.94Hz",15},
    {1440/2,480,1716/2,525,54000/2,32/2,124/2,120/2,9,6,30,59940,PROG,Vneg,Hneg,2,AR_16_9,"CEA Fmt15 720x480P@59.94Hz",15},

    {1920,1080,2200,1125,148500,88,44,148,4,5,36,60000,PROG,Vpos,Hpos,1,AR_16_9,"CEA Fmt16 1920x1080P@60Hz",16},
    {1920,1080,2200,1125,148500,88,44,148,4,5,36,60000,PROG,Vpos,Hpos,1,AR_64_27,"CEA Fmt76 1920x1080P@60Hz",76},

    {720,576,864,625,27000,12,64,68,5,5,39,50000,PROG,Vneg,Hneg,1,AR_4_3,"CEA Fmt17 720x576P@50Hz",17},
    {720,576,864,625,27000,12,64,68,5,5,39,50000,PROG,Vneg,Hneg,1,AR_16_9,"CEA Fmt18 720x576P@50Hz",18},

    {1280,720,1980,750,74250,440,40,220,5,5,20,50000,PROG,Vpos,Hpos,1,AR_16_9,"CEA Fmt19 1280x72P0@50Hz",19},
    {1280,720,1980,750,74250,440,40,220,5,5,20,50000,PROG,Vpos,Hpos,1,AR_64_27,"CEA Fmt68 1280x72P0@50Hz",68},

    {1920,540,2640,562,74250,528,44,148,2,5,15,50000,INTR,Vpos,Hpos,1,AR_16_9,"CEA Fmt20 1920x1080I@50Hz",20},

    {1440,288,1728,312,27000,24,126,138,2,3,19,50000,INTR,Vneg,Hneg,1,AR_4_3,"CEA Fmt21 1440x576I@50Hz",21},
    {1440/2,288,1728/2,312,27000/2,24/2,126/2,138/2,2,3,19,50000,INTR,Vneg,Hneg,2,AR_4_3,"CEA Fmt21 720x576I@50Hz",21},

    {1440,288,1728,312,27000,24,126,138,2,3,19,50000,INTR,Vneg,Hneg,1,AR_16_9,"CEA Fmt22 1440x576I@50Hz",22},
    {1440/2,288,1728/2,312,27000/2,24/2,126/2,138/2,2,3,19,50000,INTR,Vneg,Hneg,2,AR_16_9,"CEA Fmt22 720x576I@50Hz",22},

    {1440,288,1728,312,27000,24,126,138,2,3,19,50080,PROG,Vneg,Hneg,1,AR_4_3,"CEA Fmt23 (mode 1) 1440x288P@50.080Hz",23},
    {1440,288,1728,313,27000,24,126,138,3,3,19,49920,PROG,Vneg,Hneg,1,AR_4_3,"CEA Fmt23 (mode 2) 1440x288P@49.920Hz",23},
    {1440,288,1728,314,27000,24,126,138,4,3,19,49761,PROG,Vneg,Hneg,1,AR_4_3,"CEA Fmt23 (mode 3) 1440x288P@49.761Hz",23},
    {1440/2,288,1728/2,312,27000/2,24/2,126/2,138/2,2,3,19,50080,PROG,Vneg,Hneg,2,AR_4_3,"CEA Fmt23 (mode 1) 720x288P@50.080Hz",23},
    {1440/2,288,1728/2,313,27000/2,24/2,126/2,138/2,3,3,19,49920,PROG,Vneg,Hneg,2,AR_4_3,"CEA Fmt23 (mode 2) 720x288P@49.920Hz",23},
    {1440/2,288,1728/2,314,27000/2,24/2,126/2,138/2,4,3,19,49761,PROG,Vneg,Hneg,2,AR_4_3,"CEA Fmt23 (mode 3) 720x288P@49.761Hz",23},

    {1440,288,1728,312,27000,24,126,138,2,3,19,50080,PROG,Vneg,Hneg,1,AR_16_9,"CEA Fmt24 (mode 1) 1440x288P@50.080Hz",24},
    {1440,288,1728,313,27000,24,126,138,3,3,19,49920,PROG,Vneg,Hneg,1,AR_16_9,"CEA Fmt24 (mode 2) 1440x288P@49.920Hz",24},
    {1440,288,1728,314,27000,24,126,138,4,3,19,49761,PROG,Vneg,Hneg,1,AR_16_9,"CEA Fmt24 (mode 3) 1440x288P@49.761Hz",24},
    {1440/2,288,1728/2,312,27000/2,24/2,126/2,138/2,2,3,19,50080,PROG,Vneg,Hneg,2,AR_16_9,"CEA Fmt24 (mode 1) 720x288P@50.080Hz",24},
    {1440/2,288,1728/2,313,27000/2,24/2,126/2,138/2,3,3,19,49920,PROG,Vneg,Hneg,2,AR_16_9,"CEA Fmt24 (mode 2) 720x288P@49.920Hz",24},
    {1440/2,288,1728/2,314,27000/2,24/2,126/2,138/2,4,3,19,49761,PROG,Vneg,Hneg,2,AR_16_9,"CEA Fmt24 (mode 3) 720x288P@49.761Hz",24},

    {2880,288,3456,312,54000,48,252,276,2,3,19,50000,INTR,Vneg,Hneg,1,AR_4_3,"CEA Fmt25 2880x576I@50Hz",25},
    {2880/2,288,3456/2,312,54000/2,48/2,252/2,276/2,2,3,19,50000,INTR,Vneg,Hneg,2,AR_4_3,"CEA Fmt25 1440x576I@50Hz",25},
    {2880/4,288,3456/4,312,54000/4,48/4,252/4,276/4,2,3,19,50000,INTR,Vneg,Hneg,4,AR_4_3,"CEA Fmt25 720x576I@50Hz",25},

    {2880,288,3456,312,54000,48,252,276,2,3,19,50000,INTR,Vneg,Hneg,1,AR_16_9,"CEA Fmt26 2880x576I@50Hz",26},
    {2880/2,288,3456/2,312,54000/2,48/2,252/2,276/2,2,3,19,50000,INTR,Vneg,Hneg,2,AR_16_9,"CEA Fmt26 1440x576I@50Hz",26},
    {2880/4,288,3456/4,312,54000/4,48/4,252/4,276/4,2,3,19,50000,INTR,Vneg,Hneg,4,AR_16_9,"CEA Fmt26 720x576I@50Hz",26},

    {2880,288,3456,312,54000,48,252,276,2,3,19,50080,PROG,Vneg,Hneg,1,AR_4_3,"CEA Fmt27 (mode 1) 2880x288P@50.080Hz",27},
    {2880,288,3456,313,54000,48,252,276,3,3,19,49920,PROG,Vneg,Hneg,1,AR_4_3,"CEA Fmt27 (mode 2) 2880x288P@49.920Hz",27},
    {2880,288,3456,314,54000,48,252,276,4,3,19,49761,PROG,Vneg,Hneg,1,AR_4_3,"CEA Fmt27 (mode 3) 2880x288P@49.761Hz",27},
    {2880/2,288,3456/2,312,54000/2,48/2,252/2,276/2,2,3,19,50080,PROG,Vneg,Hneg,2,AR_4_3,"CEA Fmt27 (mode 1) 1440x288P@50.080Hz",27},
    {2880/2,288,3456/2,313,54000/2,48/2,252/2,276/2,3,3,19,49920,PROG,Vneg,Hneg,2,AR_4_3,"CEA Fmt27 (mode 2) 1440x288P@49.920Hz",27},
    {2880/2,288,3456/2,314,54000/2,48/2,252/2,276/2,4,3,19,49761,PROG,Vneg,Hneg,2,AR_4_3,"CEA Fmt27 (mode 3) 1440x288P@49.761Hz",27},
    {2880/4,288,3456/4,312,54000/4,48/4,252/4,276/4,2,3,19,50080,PROG,Vneg,Hneg,4,AR_4_3,"CEA Fmt27 (mode 1) 720x288P@50.080Hz",27},
    {2880/4,288,3456/4,313,54000/4,48/4,252/4,276/4,3,3,19,49920,PROG,Vneg,Hneg,4,AR_4_3,"CEA Fmt27 (mode 2) 720x288P@49.920Hz",27},
    {2880/4,288,3456/4,314,54000/4,48/4,252/4,276/4,4,3,19,49761,PROG,Vneg,Hneg,4,AR_4_3,"CEA Fmt27 (mode 3) 720x288P@49.761Hz",27},

    {2880,288,3456,312,54000,48,252,276,2,3,19,50080,PROG,Vneg,Hneg,1,AR_16_9,"CEA Fmt28 (mode 1) 2880x288P@50.080Hz",28},
    {2880,288,3456,313,54000,48,252,276,3,3,19,49920,PROG,Vneg,Hneg,1,AR_16_9,"CEA Fmt28 (mode 2) 2880x288P@49.920Hz",28},
    {2880,288,3456,314,54000,48,252,276,4,3,19,49761,PROG,Vneg,Hneg,1,AR_16_9,"CEA Fmt28 (mode 3) 2880x288P@49.761Hz",28},
    {2880/2,288,3456/2,312,54000/2,48/2,252/2,276/2,2,3,19,50080,PROG,Vneg,Hneg,2,AR_16_9,"CEA Fmt28 (mode 1) 1440x288P@50.080Hz",28},
    {2880/2,288,3456/2,313,54000/2,48/2,252/2,276/2,3,3,19,49920,PROG,Vneg,Hneg,2,AR_16_9,"CEA Fmt28 (mode 2) 1440x288P@49.920Hz",28},
    {2880/2,288,3456/2,314,54000/2,48/2,252/2,276/2,4,3,19,49761,PROG,Vneg,Hneg,2,AR_16_9,"CEA Fmt28 (mode 3) 1440x288P@49.761Hz",28},
    {2880/4,288,3456/4,312,54000/4,48/4,252/4,276/4,2,3,19,50080,PROG,Vneg,Hneg,4,AR_16_9,"CEA Fmt28 (mode 1) 720x288P@50.080Hz",28},
    {2880/4,288,3456/4,313,54000/4,48/4,252/4,276/4,3,3,19,49920,PROG,Vneg,Hneg,4,AR_16_9,"CEA Fmt28 (mode 2) 720x288P@49.920Hz",28},
    {2880/4,288,3456/4,314,54000/4,48/4,252/4,276/4,4,3,19,49761,PROG,Vneg,Hneg,4,AR_16_9,"CEA Fmt28 (mode 3) 720x288P@49.761Hz",28},

    {1440,576,1728,625,54000,24,128,136,5,5,39,50000,PROG,Vneg,Hneg,1,AR_4_3,"CEA Fmt29 1440x576P@50Hz",29},
    {1440/2,576,1728/2,625,54000/2,24/2,128/2,136/2,5,5,39,50000,PROG,Vneg,Hneg,2,AR_4_3,"CEA Fmt29 720x576P@50Hz",29},

    {1440,576,1728,625,54000,24,128,136,5,5,39,50000,PROG,Vneg,Hneg,1,AR_16_9,"CEA Fmt30 1440x576P@50Hz",30},
    {1440/2,576,1728/2,625,54000/2,24/2,128/2,136/2,5,5,39,50000,PROG,Vneg,Hneg,2,AR_16_9,"CEA Fmt30 720x576P@50Hz",30},

    {1920,1080,2640,1125,148500,528,44,148,4,5,36,50000,PROG,Vpos,Hpos,1,AR_16_9,"CEA Fmt31 1920x1080P@50Hz",31},
    {1920,1080,2640,1125,148500,528,44,148,4,5,36,50000,PROG,Vpos,Hpos,1,AR_64_27,"CEA Fmt75 1920x1080P@50Hz",75},

    {1920,1080,2750,1125,74250,638,44,148,4,5,36,24000,PROG,Vpos,Hpos,1,AR_16_9,"CEA Fmt32 1920x1080P@24Hz",32},
    {1920,1080,2750,1125,74250,638,44,148,4,5,36,24000,PROG,Vpos,Hpos,1,AR_64_27,"CEA Fmt72 1920x1080P@24Hz",72},

    {1920,1080,2640,1125,74250,528,44,148,4,5,36,25000,PROG,Vpos,Hpos,1,AR_16_9,"CEA Fmt33 1920x1080P@25Hz",33},
    {1920,1080,2640,1125,74250,528,44,148,4,5,36,25000,PROG,Vpos,Hpos,1,AR_64_27,"CEA Fmt73 1920x1080P@25Hz",73},

    {1920,1080,2200,1125,74250,88,44,148,4,5,36,30000,PROG,Vpos,Hpos,1,AR_16_9,"CEA Fmt34 1920x1080P@30Hz",34},
    {1920,1080,2200,1125,74250,88,44,148,4,5,36,30000,PROG,Vpos,Hpos,1,AR_64_27,"CEA Fmt74 1920x1080P@30Hz",74},

    {2880,480,3432,525,108000,64,248,240,9,6,30,59940,PROG,Vneg,Hneg,1,AR_4_3,"CEA Fmt35 2880x480P@59.94Hz",35},
    {2880/2,480,3432/2,525,108000/2,64/2,248/2,240/2,9,6,30,59940,PROG,Vneg,Hneg,2,AR_4_3,"CEA Fmt35 1440x480P@59.94Hz",35},
    {2880/4,480,3432/4,525,108000/4,64/4,248/4,240/4,9,6,30,59940,PROG,Vneg,Hneg,4,AR_4_3,"CEA Fmt35 720x480P@59.94Hz",35},

    {2880,480,3432,525,108000,64,248,240,9,6,30,59940,PROG,Vneg,Hneg,1,AR_16_9,"CEA Fmt36 2880x480P@59.94Hz",36},
    {2880/2,480,3432/2,525,108000/2,64/2,248/2,240/2,9,6,30,59940,PROG,Vneg,Hneg,2,AR_16_9,"CEA Fmt36 1440x480P@59.94Hz",36},
    {2880/4,480,3432/4,525,108000/4,64/4,248/4,240/4,9,6,30,59940,PROG,Vneg,Hneg,4,AR_16_9,"CEA Fmt36 720x480P@59.94Hz",36},

    {2880,576,3456,625,108000,48,256,272,5,5,39,50000,PROG,Vneg,Hneg,1,AR_4_3,"CEA Fmt37 2880x576P@50Hz",37},
    {2880/2,576,3456/2,625,108000/2,48/2,256/2,272/2,5,5,39,50000,PROG,Vneg,Hneg,2,AR_4_3,"CEA Fmt37 1440x576P@50Hz",37},
    {2880/4,576,3456/4,625,108000/4,48/4,256/4,272/4,5,5,39,50000,PROG,Vneg,Hneg,4,AR_4_3,"CEA Fmt37 720x576P@50Hz",37},

    {2880,576,3456,625,108000,48,256,272,5,5,39,50000,PROG,Vneg,Hneg,1,AR_16_9,"CEA Fmt38 2880x576P@50Hz",38},
    {2880/2,576,3456/2,625,108000/2,48/2,256/2,272/2,5,5,39,50000,PROG,Vneg,Hneg,2,AR_16_9,"CEA Fmt38 1440x576P@50Hz",38},
    {2880/4,576,3456/4,625,108000/4,48/4,256/4,272/4,5,5,39,50000,PROG,Vneg,Hneg,4,AR_16_9,"CEA Fmt38 720x576P@50Hz",38},

    {1920,540,2304,625,72000,32,168,184,23,5,57,50000,INTR,Vneg,Hpos,1,AR_16_9,"CEA Fmt39 1920x1080I@50Hz",39},

    {1920,540,2640,562,148500,528,44,148,2,5,15,100000,INTR,Vpos,Hpos,1,AR_16_9,"CEA Fmt40 1920x1080I@100Hz",40},

    {1280,720,1980,750,148500,440,40,220,5,5,20,100000,PROG,Vpos,Hpos,1,AR_16_9,"CEA Fmt41 1280x720P@100Hz",41},
    {1280,720,1980,750,148500,440,40,220,5,5,20,100000,PROG,Vpos,Hpos,1,AR_64_27,"CEA Fmt70 1280x720P@100Hz",70},

    {720,576,864,625,54000,12,64,68,5,5,39,100000,PROG,Vneg,Hneg,1,AR_4_3,"CEA Fmt42 720x576P@100Hz",42},
    {720,576,864,625,54000,12,64,68,5,5,39,100000,PROG,Vneg,Hneg,1,AR_16_9,"CEA Fmt43 720x576P@100Hz",43},

    {1440,288,1728,312,54000,24,126,138,2,3,19,100000,INTR,Vneg,Hneg,1,AR_4_3,"CEA Fmt44 1440x576I@100Hz",44},
    {1440/2,288,1728/2,312,54000/2,24/2,126/2,138/2,2,3,19,100000,INTR,Vneg,Hneg,2,AR_4_3,"CEA Fmt44 720x576I@100Hz",44},

    {1440,288,1728,312,54000,24,126,138,2,3,19,100000,INTR,Vneg,Hneg,1,AR_16_9,"CEA Fmt45 1440x576I@100Hz",45},
    {1440/2,288,1728/2,312,54000/2,24/2,126/2,138/2,2,3,19,100000,INTR,Vneg,Hneg,2,AR_16_9,"CEA Fmt45 720x576I@100Hz",45},

    {1920,540,2200,562,148500,88,44,148,2,5,15,120000,INTR,Vpos,Hpos,1,AR_16_9, "CEA Fmt46 1920x1080I@120Hz",46},

    {1280,720,1650,750,148500,110,40,220,5,5,20,120000,PROG,Vpos,Hpos,1,AR_16_9,"CEA Fmt47 1280x720P@120Hz",47},
    {1280,720,1650,750,148500,110,40,220,5,5,20,120000,PROG,Vpos,Hpos,1,AR_64_27,"CEA Fmt71 1280x720P@120Hz",71},

    {720,480,858,525,54000,16,62,60,9,6,30,119880,PROG,Vneg,Hneg,1,AR_4_3,"CEA Fmt48 720x480P@119.88HzHz",48},
    {720,480,858,525,54000,16,62,60,9,6,30,119880,PROG,Vneg,Hneg,1,AR_16_9,"CEA Fmt49 720x480P@119.88HzHz",49},

    {1440,240,1716,262,54000,38,124,114,4,3,15,119880,INTR,Vneg,Hneg,1,AR_4_3,"CEA Fmt50 1440x480I@119.88Hz",50},
    {1440/2,240,1716/2,262,54000/2,38/2,124/2,114/2,4,3,15,119880,INTR,Vneg,Hneg,2,AR_4_3,"CEA Fmt50 720x480I@119.88Hz",50},

    {1440,240,1716,262,54000,38,124,114,4,3,15,119880,INTR,Vneg,Hneg,1,AR_16_9,"CEA Fmt51 1440x480I@119.88Hz",51},
    {1440/2,240,1716/2,262,54000/2,38/2,124/2,114/2,4,3,15,119880,INTR,Vneg,Hneg,2,AR_16_9,"CEA Fmt51 720x480I@119.88Hz",51},

    {720,576,864,625,108000,12,64,68,5,5,39,200000,PROG,Vneg,Hneg,1,AR_4_3,"CEA Fmt52 720x576P@200Hz",52},
    {720,576,864,625,108000,12,64,68,5,5,39,200000,PROG,Vneg,Hneg,1,AR_16_9,"CEA Fmt53 720x576P@200Hz",53},

    {1440,288,1728,312,108000,24,126,138,2,3,19,200000,INTR,Vneg,Hneg,1,AR_4_3,"CEA Fmt54 1440x576I@200Hz",54},
    {1440/2,288,1728/2,312,108000/2,24/2,126/2,138/2,2,3,19,200000,INTR,Vneg,Hneg,2,AR_4_3,"CEA Fmt54 720x576I@200Hz",54},

    {1440,288,1728,312,108000,24,126,138,2,3,19,200000,INTR,Vneg,Hneg,1,AR_16_9,"CEA Fmt55 1440x576I@200Hz",55},
    {1440/2,288,1728/2,312,108000/2,24/2,126/2,138/2,2,3,19,200000,INTR,Vneg,Hneg,2,AR_16_9,"CEA Fmt55 720x576I@200Hz",55},

    {720,480,858,525,108000,16,62,60,9,6,30,239760,PROG,Vneg,Hneg,1,AR_4_3,"CEA Fmt56 720x480P@239.76HzHz",56},
    {720,480,858,525,108000,16,62,60,9,6,30,239760,PROG,Vneg,Hneg,1,AR_16_9,"CEA Fmt57 720x480P@239.76HzHz",57},

    {1440,240,1716,262,108000,38,124,114,4,3,15,239760,INTR,Vneg,Hneg,1,AR_4_3,"CEA Fmt58 1440x480I@239.76Hz",58},
    {1440/2,240,1716/2,262,108000/2,38/2,124/2,114/2,4,3,15,239760,INTR,Vneg,Hneg,2,AR_4_3,"CEA Fmt58 1440x480I@239.76Hz",58},

    {1440,240,1716,262,108000,38,124,114,4,3,15,239760,INTR,Vneg,Hneg,1,AR_16_9,"CEA Fmt59 1440x480I@239.76Hz",59},
    {1440/2,240,1716/2,262,108000/2,38/2,124/2,114/2,4,3,15,239760,INTR,Vneg,Hneg,2,AR_16_9,"CEA Fmt59 1440x480I@239.76Hz",59},

    {1280,720,3300,750,59400,1760,40,220,5,5,20,24000,PROG,Vpos,Hpos,1,AR_16_9,"CEA Fmt60 1280x720P@24Hz",60},
    {1280,720,3300,750,59400,1760,40,220,5,5,20,24000,PROG,Vpos,Hpos,1,AR_64_27,"CEA Fmt65 1280x720P@24Hz",65},

    {1280,720,3960,750,74250,2420,40,220,5,5,20,25000,PROG,Vpos,Hpos,1,AR_16_9,"CEA Fmt61 1280x720P@25Hz",61},
    {1280,720,3960,750,74250,2420,40,220,5,5,20,25000,PROG,Vpos,Hpos,1,AR_64_27,"CEA Fmt66 1280x720P@25Hz",66},

    {1280,720,3300,750,74250,1760,40,220,5,5,20,30000,PROG,Vpos,Hpos,1,AR_16_9,"CEA Fmt62 1280x720P@30Hz",62},
    {1280,720,3300,750,74250,1760,40,220,5,5,20,30000,PROG,Vpos,Hpos,1,AR_64_27,"CEA Fmt67 1280x720P@30Hz",67},

    {1920,1080,2200,1125,297000,88,44,148,4,5,36,119880,PROG,Vpos,Hpos,1,AR_16_9,"CEA Fmt63 1920x1080P@119.88Hz",63},
    {1920,1080,2200,1125,297000,88,44,148,4,5,36,119880,PROG,Vpos,Hpos,1,AR_64_27,"CEA Fmt78 1920x1080P@119.88Hz",78},

    {1920,1080,2640,1125,297000,528,44,148,4,5,36,100000,PROG,Vpos,Hpos,1,AR_16_9,"CEA Fmt64 1920x1080P@100Hz",64},
    {1920,1080,2640,1125,297000,528,44,148,4,5,36,100000,PROG,Vpos,Hpos,1,AR_64_27,"CEA Fmt77 1920x1080P@100Hz",77},

    {1680,720,3300,750,59400,1360,40,220,5,5,20,24000,PROG,Vpos,Hpos,1,AR_64_27,"CEA Fmt79 1680x720P@24Hz",79},
    {1680,720,3168,750,59400,1228,40,220,5,5,20,25000,PROG,Vpos,Hpos,1,AR_64_27,"CEA Fmt80 1680x720P@25Hz",80},
    {1680,720,2640,750,59400,700,40,220,5,5,20,30000,PROG,Vpos,Hpos,1,AR_64_27,"CEA Fmt81 1680x720P@30Hz",81},
    {1680,720,2200,750,82500,260,40,220,5,5,20,50000,PROG,Vpos,Hpos,1,AR_64_27,"CEA Fmt82 1680x720P@50Hz",82},
    {1680,720,2200,750,99000,260,40,220,5,5,20,60000,PROG,Vpos,Hpos,1,AR_64_27,"CEA Fmt83 1680x720P@60Hz",83},
    {1680,720,2000,825,165000,60,40,220,5,5,95,100000,PROG,Vpos,Hpos,1,AR_64_27,"CEA Fmt84 1680x720P@100Hz",84},
    {1680,720,2000,825,198000,60,40,220,5,5,95,120000,PROG,Vpos,Hpos,1,AR_64_27,"CEA Fmt85 1680x720P@120Hz",85},

    {2560,1080,3750,1100,99000,998,44,148,4,5,11,24000,PROG,Vpos,Hpos,1,AR_64_27,"CEA Fmt86 2560x1080P@24Hz",86},
    {2560,1080,3200,1125,90000,448,44,148,4,5,36,25000,PROG,Vpos,Hpos,1,AR_64_27,"CEA Fmt87 2560x1080P@25Hz",87},
    {2560,1080,3520,1125,118800,768,44,148,4,5,36,30000,PROG,Vpos,Hpos,1,AR_64_27,"CEA Fmt88 2560x1080P@30Hz",88},
    {2560,1080,3300,1125,185625,548,44,148,4,5,36,50000,PROG,Vpos,Hpos,1,AR_64_27,"CEA Fmt89 2560x1080P@50Hz",89},
    {2560,1080,3000,1100,198000,248,44,148,4,5,11,60000,PROG,Vpos,Hpos,1,AR_64_27,"CEA Fmt90 2560x1080P@60Hz",90},
    {2560,1080,2970,1250,371250,218,44,148,4,5,161,100000,PROG,Vpos,Hpos,1,AR_64_27,"CEA Fmt91 2560x1080P@100Hz",91},
    {2560,1080,3300,1250,495000,548,44,148,4,5,161,120000,PROG,Vpos,Hpos,1,AR_64_27,"CEA Fmt92 2560x1080P@120Hz",92},

    {3840,2160,5500,2250,297000,1276,88,296,8,10,72,24000,PROG,Vpos,Hpos,1,AR_16_9,"CEA Fmt93 3840x2160P@24Hz",93},
    {3840,2160,5280,2250,297000,1056,88,296,8,10,72,25000,PROG,Vpos,Hpos,1,AR_16_9,"CEA Fmt94 3840x2160P@25Hz",94},
    {3840,2160,4400,2250,297000,176,88,296,8,10,72,30000,PROG,Vpos,Hpos,1,AR_16_9,"CEA Fmt95 3840x2160P@30Hz",95},
    {3840,2160,5280,2250,594000,1056,88,296,8,10,72,50000,PROG,Vpos,Hpos,1,AR_16_9,"CEA Fmt96 3840x2160P@50Hz",96},
    {3840,2160,4400,2250,594000,176,88,296,8,10,72,60000,PROG,Vpos,Hpos,1,AR_16_9,"CEA Fmt97 3840x2160P@60Hz",97},

    {3840,2160,5500,2250,297000,1276,88,296,8,10,72,24000,PROG,Vpos,Hpos,1,AR_64_27,"CEA Fmt103 3840x2160P@24Hz",103},
    {3840,2160,5280,2250,297000,1056,88,296,8,10,72,25000,PROG,Vpos,Hpos,1,AR_64_27,"CEA Fmt104 3840x2160P@25Hz",104},
    {3840,2160,4400,2250,297000,176,88,296,8,10,72,30000,PROG,Vpos,Hpos,1,AR_64_27,"CEA Fmt105 3840x2160P@30Hz",105},
    {3840,2160,5280,2250,594000,1056,88,296,8,10,72,50000,PROG,Vpos,Hpos,1,AR_64_27,"CEA Fmt106 3840x2160P@50Hz",106},
    {3840,2160,4400,2250,594000,176,88,296,8,10,72,60000,PROG,Vpos,Hpos,1,AR_64_27,"CEA Fmt107 3840x2160P@60Hz",107},

    {4096,2160,5500,2250,297000,1020,88,296,8,10,72,24000,PROG,Vpos,Hpos,1,AR_256_135,"CEA Fmt98 4096x2160P@24Hz",98},
    {4096,2160,5280,2250,297000,968,88,128,8,10,72,25000,PROG,Vpos,Hpos,1,AR_256_135,"CEA Fmt99 4096x2160P@25Hz",99},
    {4096,2160,4400,2250,297000,88,88,128,8,10,72,30000,PROG,Vpos,Hpos,1,AR_256_135,"CEA Fmt100 4096x2160P@30Hz",100},
    {4096,2160,5280,2250,594000,968,88,128,8,10,72,50000,PROG,Vpos,Hpos,1,AR_256_135,"CEA Fmt101 4096x2160P@50Hz",101},
    {4096,2160,4400,2250,594000,88,88,128,8,10,72,60000,PROG,Vpos,Hpos,1,AR_256_135,"CEA Fmt102 4096x2160P@60Hz",102},

    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"Unknown Format Error !!!",0}
};

#define     VTableCount    (sizeof(iTE6615_VTable)/sizeof(iTE6615_VTiming))

piTE6615_VTiming    iTE6615_Get_VIC_Pointer(u16 vic);
         u16    iTE6615_Get_VIndex_ByTiming(piTE6615_VTiming ct);
          u8    _value_in_range( u32 value, u32 comp, u32 tor_percent );

piTE6615_VTiming    iTE6615_Get_VIC_Pointer(u16 vic)
{
    piTE6615_VTiming ret = NULL;
    u16 i;
    for( i=0 ; i<(int)VTableCount ; i++ )
    {
        if ( iTE6615_VTable[i].VIC == vic )
        {
            ret = &iTE6615_VTable[i];
            break;
        }
    }
    return ret;
}

u16 iTE6615_Get_VIndex_ByTiming(piTE6615_VTiming ct)
{
    piTE6615_VTiming vt;
    u16 i;
    for( i=0 ; i<(int)VTableCount ; i++ )
    {
        vt = &iTE6615_VTable[i];
        if ( ( vt->HTotal == ct->HTotal ) &&
             ( vt->HActive == ct->HActive ) &&
             ( vt->VTotal == ct->VTotal ) &&
             ( vt->VActive == ct->VActive ) &&
             ( vt->HSyncWidth == ct->HSyncWidth ) &&
             ( vt->VSyncWidth == ct->VSyncWidth ) &&
             ( vt->HFrontPorch == ct->HFrontPorch ) &&
             ( vt->VFrontPorch == ct->VFrontPorch ) &&
             ( _value_in_range(ct->PCLK, vt->PCLK,15))
            )
        {
            //return vt->VIC;
            return i;
        }
    }

    return 0;
}

u8 _value_in_range( u32 value, u32 comp, u32 tor_percent )
{
    u32 min = comp * (100-tor_percent);
    u32 max = comp * (100+tor_percent);

    value = value *100;
    if ( (value<=max) && (value>=min) )
    {
        return TRUE;
    }
    return FALSE;
}

#endif    // end of if 0
#endif
