#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8013B028();
void fn_8013B064();
void fn_8013B2B8();
void *fn_8013B3D8();
void fn_80142038();
extern char lbl_8049D8B0[];
extern char lbl_8049D8C4[];
extern void *lbl_80563E8C;
extern void *lbl_8056405C;
void fn_8013B214();
void *fn_8013B290();
void *fn_8013B2B0();
}
extern "C" {
void fn_8013B1EC(){
 fn_80066188((int)fn_8013B214);
}
void fn_8013B214(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563E8C,(int)fn_80142038,(int)fn_8013B2B0,(int)fn_8013B290,(int)lbl_8049D8C4,60,(int)fn_8013B064,(int)fn_8013B2B8,(int)fn_8013B3D8,(int)lbl_8049D8B0);
}
void *fn_8013B290(){return fn_8013B028();}
void *fn_8013B2B0(){return lbl_8056405C;}
}
#pragma pop
