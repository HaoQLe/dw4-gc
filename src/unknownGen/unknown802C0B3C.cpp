#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beResetNode_getMeta();
void beResetNode_vtableRead();
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_802B1AC8();
void bePoint01Info_arkRegister();
void *fn_80313004();
void igGroup_register();
extern char beResetNode_className[];
extern char beResetNode_fieldTypes[];
extern char beResetNode_fieldNames[];
extern char beResetNode_fieldStorage[];
extern char beResetNode_fieldOffsets[];
extern void *beResetNode_meta;
extern void *bePoint01Info_meta;
void beResetNode_register();
void *beResetNode_getMetaCall();
void beResetNode_fieldInit();
void *fn_802C0C80();
}
extern "C" {
void beResetNode_arkRegister(){
 meta_registerNow((int)beResetNode_register);
}
void beResetNode_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)&beResetNode_meta,(int)igGroup_register,(int)fn_8011148C,(int)beResetNode_getMetaCall,(int)beResetNode_className,36,(int)beResetNode_vtableRead,(int)beResetNode_fieldInit,(int)fn_802C0C80,0);
}
void *beResetNode_getMetaCall(){return beResetNode_getMeta();}
void beResetNode_fieldInit(){
 void *meta=beResetNode_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,beResetNode_fieldTypes,0x2);
 meta_setupFields(meta,beResetNode_fieldNames,beResetNode_fieldStorage,beResetNode_fieldOffsets,field);
}
void *fn_802C0C80(){return fn_80313004();}
void *bePoint01Info_getMeta(){
 if(!bePoint01Info_meta || !(reinterpret_cast<unsigned int *>(bePoint01Info_meta)[0x24/4]&4)) bePoint01Info_arkRegister();
 return bePoint01Info_meta;
}
}
#pragma pop
