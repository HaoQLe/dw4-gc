#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beResetNode_getMeta();
void beResetNode_vtableRead();
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_802B1AC8();
void bePoint01Info_registerNow();
void *fn_80313004();
void igGroup_register();
extern char beResetNode_className[];
extern char lbl_804CFFC4[];
extern char lbl_804CFFCC[];
extern char lbl_804CFFD4[];
extern char lbl_804CFFDC[];
extern void *beResetNode_meta;
extern void *bePoint01Info_meta;
void beResetNode_register();
void *beResetNode_getMetaCall();
void beResetNode_fieldInit();
void *fn_802C0C80();
}
extern "C" {
void beResetNode_registerNow(){
 meta_registerNow((int)beResetNode_register);
}
void beResetNode_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)&beResetNode_meta,(int)igGroup_register,(int)fn_8011148C,(int)beResetNode_getMetaCall,(int)beResetNode_className,36,(int)beResetNode_vtableRead,(int)beResetNode_fieldInit,(int)fn_802C0C80,0);
}
void *beResetNode_getMetaCall(){return beResetNode_getMeta();}
void beResetNode_fieldInit(){
 void *meta=beResetNode_meta;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804CFFC4,0x2);
 fn_800659C0(meta,lbl_804CFFCC,lbl_804CFFD4,lbl_804CFFDC,field);
}
void *fn_802C0C80(){return fn_80313004();}
void *bePoint01Info_getMeta(){
 if(!bePoint01Info_meta || !(reinterpret_cast<unsigned int *>(bePoint01Info_meta)[0x24/4]&4)) bePoint01Info_registerNow();
 return bePoint01Info_meta;
}
}
#pragma pop
