#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void fn_8013A9EC();
void fn_8013B1EC();
extern char lbl_8049D89C[];
extern void *lbl_805621F4;
extern void *lbl_80563E5C;
extern void *lbl_80563E88;
extern void *lbl_80563E8C;
void *fn_8013AEFC();
void fn_8013AF38();
void fn_8013AF60();
void *fn_8013AFC4();
void *fn_8013AFE4();
}
extern "C" {
void *fn_8013AEFC(){
 if(!lbl_80563E88 || !(reinterpret_cast<unsigned int *>(lbl_80563E88)[0x24/4]&4)) fn_8013AF38();
 return lbl_80563E88;
}
void fn_8013AF38(){
 fn_80066188((int)fn_8013AF60);
}
void fn_8013AF60(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_80563E88,(int)fn_8013A9EC,(int)fn_8013AFE4,(int)fn_8013AFC4,(int)lbl_8049D89C,52,0,0,0,0);
}
void *fn_8013AFC4(){return fn_8013AEFC();}
void *fn_8013AFE4(){return lbl_80563E5C;}
void *fn_8013AFEC(){
 if(!lbl_80563E8C) lbl_80563E8C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563E8C;
}
void *fn_8013B028(){
 if(!lbl_80563E8C || !(reinterpret_cast<unsigned int *>(lbl_80563E8C)[0x24/4]&4)) fn_8013B1EC();
 return lbl_80563E8C;
}
}
#pragma pop
