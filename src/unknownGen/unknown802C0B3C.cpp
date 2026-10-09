#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beResetNode_getMeta();
void beResetNode_vtableRead();
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_802B1AC8();
void fn_802C0EA4();
void *fn_80313004();
void igGroup_register();
extern char lbl_8041E3CC[];
extern char lbl_804CFFC4[];
extern char lbl_804CFFCC[];
extern char lbl_804CFFD4[];
extern char lbl_804CFFDC[];
extern void *lbl_80534A50;
extern void *lbl_80534A5C;
void beResetNode_register();
void *beResetNode_getMetaCall();
void beResetNode_fieldInit();
void *fn_802C0C80();
}
extern "C" {
void fn_802C0B3C(){
 fn_80066188((int)beResetNode_register);
}
void beResetNode_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)&lbl_80534A50,(int)igGroup_register,(int)fn_8011148C,(int)beResetNode_getMetaCall,(int)lbl_8041E3CC,36,(int)beResetNode_vtableRead,(int)beResetNode_fieldInit,(int)fn_802C0C80,0);
}
void *beResetNode_getMetaCall(){return beResetNode_getMeta();}
void beResetNode_fieldInit(){
 void *meta=lbl_80534A50;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804CFFC4,0x2);
 fn_800659C0(meta,lbl_804CFFCC,lbl_804CFFD4,lbl_804CFFDC,field);
}
void *fn_802C0C80(){return fn_80313004();}
void *bePoint01Info_getMeta(){
 if(!lbl_80534A5C || !(reinterpret_cast<unsigned int *>(lbl_80534A5C)[0x24/4]&4)) fn_802C0EA4();
 return lbl_80534A5C;
}
}
#pragma pop
