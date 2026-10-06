#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_801BF938();
void fn_802B1AC8();
void *fn_802C0960();
void fn_802C09AC();
void fn_802C0EA4();
void *fn_80313004();
extern char lbl_8041E3CC[];
extern char lbl_804CFFC4[];
extern char lbl_804CFFCC[];
extern char lbl_804CFFD4[];
extern char lbl_804CFFDC[];
extern void *lbl_80534A50;
extern void *lbl_80534A5C;
void fn_802C0B64();
void *fn_802C0BE0();
void fn_802C0C00();
void *fn_802C0C80();
}
extern "C" {
void fn_802C0B3C(){
 fn_80066188((int)fn_802C0B64);
}
void fn_802C0B64(){
 fn_802B1AC8();
 fn_80066204(0,(int)&lbl_80534A50,(int)fn_801BF938,(int)fn_8011148C,(int)fn_802C0BE0,(int)lbl_8041E3CC,36,(int)fn_802C09AC,(int)fn_802C0C00,(int)fn_802C0C80,0);
}
void *fn_802C0BE0(){return fn_802C0960();}
void fn_802C0C00(){
 void *meta=lbl_80534A50;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804CFFC4,0x2);
 fn_800659C0(meta,lbl_804CFFCC,lbl_804CFFD4,lbl_804CFFDC,field);
}
void *fn_802C0C80(){return fn_80313004();}
void *fn_802C0CA0(){
 if(!lbl_80534A5C || !(reinterpret_cast<unsigned int *>(lbl_80534A5C)[0x24/4]&4)) fn_802C0EA4();
 return lbl_80534A5C;
}
}
#pragma pop
