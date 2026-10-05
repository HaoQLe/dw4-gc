#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_801308D0();
void fn_8013B97C();
void *fn_8014EE0C();
void fn_8014EE48();
void fn_8014F120();
extern char lbl_8049FCA4[];
extern void *lbl_80564488;
extern void *lbl_8056448C;
void fn_8014EF60();
void *fn_8014EFC8();
}
extern "C" {
void fn_8014EF38(){
 fn_80066188((int)fn_8014EF60);
}
void fn_8014EF60(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564488,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_8014EFC8,(int)lbl_8049FCA4,40,(int)fn_8014EE48,0,0,0);
}
void *fn_8014EFC8(){return fn_8014EE0C();}
void *fn_8014EFE8(){
 if(!lbl_8056448C || !(reinterpret_cast<unsigned int *>(lbl_8056448C)[0x24/4]&4)) fn_8014F120();
 return lbl_8056448C;
}
}
#pragma pop
