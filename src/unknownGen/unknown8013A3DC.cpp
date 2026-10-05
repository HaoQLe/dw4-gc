#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_801308D0();
void *fn_8013A2B0();
void fn_8013A2EC();
void fn_8013A494();
void fn_8013B97C();
extern char lbl_8049D568[];
extern void *lbl_80563E28;
void fn_8013A404();
void *fn_8013A474();
}
extern "C" {
void fn_8013A3DC(){
 fn_80066188((int)fn_8013A404);
}
void fn_8013A404(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563E28,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_8013A474,(int)lbl_8049D568,64,(int)fn_8013A2EC,(int)fn_8013A494,0,0);
}
void *fn_8013A474(){return fn_8013A2B0();}
}
#pragma pop
