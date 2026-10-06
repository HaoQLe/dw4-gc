#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802AA788();
void *fn_802AAB4C();
void fn_802AAB98();
void fn_802AAE9C();
void fn_802AB0B0();
extern char lbl_8041BB4C[];
extern char lbl_804CD950[];
extern char lbl_804CD958[];
extern char lbl_804CD960[];
extern char lbl_804CD968[];
extern void *lbl_80534358;
extern void *lbl_80534364;
extern void *lbl_80534368;
void fn_802AACB8();
void *fn_802AAD2C();
void *fn_802AAD4C();
void fn_802AAD5C();
}
extern "C" {
void fn_802AAC90(){
 fn_80066188((int)fn_802AACB8);
}
void fn_802AACB8(){
 fn_802AA788();
 fn_80066204(0,(int)&lbl_80534358,(int)fn_802AB0B0,(int)fn_802AAD4C,(int)fn_802AAD2C,(int)lbl_8041BB4C,20,(int)fn_802AAB98,(int)fn_802AAD5C,0,0);
}
void *fn_802AAD2C(){return fn_802AAB4C();}
void *fn_802AAD4C(){return lbl_80534368;}
void fn_802AAD5C(){
 void *meta=lbl_80534358;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804CD950,0x2);
 fn_800659C0(meta,lbl_804CD958,lbl_804CD960,lbl_804CD968,field);
}
void *fn_802AADDC(){
 if(!lbl_80534364 || !(reinterpret_cast<unsigned int *>(lbl_80534364)[0x24/4]&4)) fn_802AAE9C();
 return lbl_80534364;
}
}
#pragma pop
