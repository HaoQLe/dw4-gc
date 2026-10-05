#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_801308D0();
void fn_8013B97C();
void *fn_80147210();
void fn_8014724C();
void fn_80147848();
extern char lbl_8049EB40[];
extern void *lbl_805641F4;
extern void *lbl_805641F8;
void fn_80147364();
void *fn_801473CC();
}
extern "C" {
void fn_8014733C(){
 fn_80066188((int)fn_80147364);
}
void fn_80147364(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805641F4,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_801473CC,(int)lbl_8049EB40,40,(int)fn_8014724C,0,0,0);
}
void *fn_801473CC(){return fn_80147210();}
void *fn_801473EC(){
 if(!lbl_805641F8 || !(reinterpret_cast<unsigned int *>(lbl_805641F8)[0x24/4]&4)) fn_80147848();
 return lbl_805641F8;
}
}
#pragma pop
