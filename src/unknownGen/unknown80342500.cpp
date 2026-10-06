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
void *fn_80342460();
void fn_803424AC();
void fn_8034272C();
void fn_803438F4();
extern char lbl_80455108[];
extern char lbl_804E3D00[];
extern char lbl_804E3D04[];
extern char lbl_804E3D08[];
extern char lbl_804E3D0C[];
extern void *lbl_80536728;
extern void *lbl_80536730;
extern void *lbl_80536768;
void fn_80342528();
void *fn_8034259C();
void *fn_803425BC();
void fn_803425CC();
}
extern "C" {
void fn_80342500(){
 fn_80066188((int)fn_80342528);
}
void fn_80342528(){
 fn_803250AC();
 fn_80066204(0,(int)&lbl_80536728,(int)fn_803438F4,(int)fn_803425BC,(int)fn_8034259C,(int)lbl_80455108,24,(int)fn_803424AC,(int)fn_803425CC,0,0);
}
void *fn_8034259C(){return fn_80342460();}
void *fn_803425BC(){return lbl_80536768;}
void fn_803425CC(){
 void *meta=lbl_80536728;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E3D00,0x1);
 fn_800659C0(meta,lbl_804E3D04,lbl_804E3D08,lbl_804E3D0C,field);
}
void *fn_8034264C(void *object){
 fn_8034272C();
 return fn_8006546C(lbl_80536730,object);
}
void *fn_8034268C(){
 if(!lbl_80536730 || !(reinterpret_cast<unsigned int *>(lbl_80536730)[0x24/4]&4)) fn_8034272C();
 return lbl_80536730;
}
}
#pragma pop
