#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_803425BC();
void *fn_80342820();
void fn_8034286C();
void fn_80342B30();
void fn_803438F4();
extern char lbl_80455134[];
extern char lbl_804E3D10[];
extern char lbl_804E3D14[];
extern char lbl_804E3D18[];
extern char lbl_804E3D1C[];
extern void *lbl_80536734;
extern void *lbl_8053673C;
extern void *lbl_805621F4;
void fn_803428E8();
void *fn_8034295C();
void fn_8034297C();
}
extern "C" {
void fn_803428C0(){
 fn_80066188((int)fn_803428E8);
}
void fn_803428E8(){
 fn_803250AC();
 fn_80066204(0,(int)&lbl_80536734,(int)fn_803438F4,(int)fn_803425BC,(int)fn_8034295C,(int)lbl_80455134,24,(int)fn_8034286C,(int)fn_8034297C,0,0);
}
void *fn_8034295C(){return fn_80342820();}
void fn_8034297C(){
 void *meta=lbl_80536734;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E3D10,0x1);
 fn_800659C0(meta,lbl_804E3D14,lbl_804E3D18,lbl_804E3D1C,field);
}
void *fn_803429FC(void *object){
 fn_80342B30();
 return fn_8006546C(lbl_8053673C,object);
}
void *fn_80342A3C(){
 if(!lbl_8053673C) lbl_8053673C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8053673C;
}
void *fn_80342A90(){
 if(!lbl_8053673C || !(reinterpret_cast<unsigned int *>(lbl_8053673C)[0x24/4]&4)) fn_80342B30();
 return lbl_8053673C;
}
}
#pragma pop
