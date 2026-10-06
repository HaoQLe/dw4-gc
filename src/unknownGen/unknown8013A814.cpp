#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029F84();
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_801308D0();
void fn_8013AA7C();
void fn_8013B97C();
extern char lbl_8049D6F4[];
extern char lbl_8049D770[];
extern char lbl_8055F798[8];
extern char lbl_8055F7A0[4];
extern char lbl_8055F7A4[4];
extern char lbl_8055F7A8[4];
extern char lbl_8055F7AC[4];
extern char lbl_8055F7B0[8];
extern void *lbl_80563E54;
extern void *lbl_80563E5C;
void *fn_8013A814();
void fn_8013A850();
void fn_8013A878();
void *fn_8013A8E8();
void fn_8013A908();
void *fn_8013A988();
void fn_8013A9C4();
void fn_8013A9EC();
void *fn_8013AA5C();
}
extern "C" {
void *fn_8013A814(){
 if(!lbl_80563E54 || !(reinterpret_cast<unsigned int *>(lbl_80563E54)[0x24/4]&4)) fn_8013A850();
 return lbl_80563E54;
}
void fn_8013A850(){
 fn_80066188((int)fn_8013A878);
}
void fn_8013A878(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_80563E54,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_8013A8E8,(int)lbl_8049D6F4,44,0,(int)fn_8013A908,0,(int)lbl_8055F798);
}
void *fn_8013A8E8(){return fn_8013A814();}
void fn_8013A908(){
 void *value0=lbl_80563E54;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055F7A0,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80029F84();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_8055F7A4,lbl_8055F7A8,lbl_8055F7AC,value1);
}
void *fn_8013A988(){
 if(!lbl_80563E5C || !(reinterpret_cast<unsigned int *>(lbl_80563E5C)[0x24/4]&4)) fn_8013A9C4();
 return lbl_80563E5C;
}
void fn_8013A9C4(){
 fn_80066188((int)fn_8013A9EC);
}
void fn_8013A9EC(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_80563E5C,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_8013AA5C,(int)lbl_8049D770,52,0,(int)fn_8013AA7C,0,(int)lbl_8055F7B0);
}
void *fn_8013AA5C(){return fn_8013A988();}
}
#pragma pop
