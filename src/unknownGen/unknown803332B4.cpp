#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
void *fn_80333068();
void fn_803330B4();
void fn_80333760();
void fn_80333F14();
extern char lbl_80453C74[];
extern char lbl_804E1FC8[];
extern char lbl_804E1FCC[];
extern char lbl_804E1FD0[];
extern char lbl_804E1FD4[];
extern void *lbl_80535F68;
extern void *lbl_80535F70;
void fn_803332DC();
void *fn_80333350();
void fn_80333370();
}
extern "C" {
void fn_803332B4(){
 fn_80066188((int)fn_803332DC);
}
void fn_803332DC(){
 fn_803250AC();
 fn_80066204(0,(int)&lbl_80535F68,(int)fn_80333F14,(int)fn_8032B8A4,(int)fn_80333350,(int)lbl_80453C74,88,(int)fn_803330B4,(int)fn_80333370,0,0);
}
void *fn_80333350(){return fn_80333068();}
void fn_80333370(){
 void *meta=lbl_80535F68;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E1FC8,0x1);
 fn_800659C0(meta,lbl_804E1FCC,lbl_804E1FD0,lbl_804E1FD4,field);
}
void *fn_803333F0(void *object){
 fn_80333760();
 return fn_8006546C(lbl_80535F70,object);
}
void *fn_80333430(){
 if(!lbl_80535F70 || !(reinterpret_cast<unsigned int *>(lbl_80535F70)[0x24/4]&4)) fn_80333760();
 return lbl_80535F70;
}
}
#pragma pop
