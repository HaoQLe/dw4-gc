#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_800BB7B8();
void fn_8012FC48();
void *fn_8013496C();
void *fn_80135970();
void *fn_801B74F0();
void igItemBase_register();
extern char lbl_804A0298[];
extern char igAttrEdit_className[];
extern char igAttrContainer_className[];
extern char lbl_8055FD88[8];
extern char lbl_8055FD90[8];
extern char lbl_8055FD98[8];
extern char lbl_8055FDA0[8];
extern void *igAttrEdit_meta;
extern void *igAttrContainer_meta;
void *igAttrEdit_getMeta();
void igAttrEdit_registerNow();
void igAttrEdit_register();
void *igAttrEdit_getMetaCall();
void igAttrEdit_fieldInit();
void *igAttrContainer_getMeta();
void igAttrContainer_registerNow();
void igAttrContainer_register();
void *igAttrContainer_getMetaCall();
}
extern "C" {
void *igAttrEdit_getMeta(){
 if(!igAttrEdit_meta || !(reinterpret_cast<unsigned int *>(igAttrEdit_meta)[0x24/4]&4)) igAttrEdit_registerNow();
 return igAttrEdit_meta;
}
void igAttrEdit_registerNow(){
 meta_registerNow((int)igAttrEdit_register);
}
void igAttrEdit_register(){
 fn_8012FC48();
 meta_registerClass(1,(int)&igAttrEdit_meta,(int)igAttrContainer_register,(int)fn_80135970,(int)igAttrEdit_getMetaCall,(int)igAttrEdit_className,40,0,(int)igAttrEdit_fieldInit,0,(int)lbl_804A0298);
}
void *igAttrEdit_getMetaCall(){return igAttrEdit_getMeta();}
void igAttrEdit_fieldInit(){
 void *value0=igAttrEdit_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8055FD88,2);
 void *value2=meta_field(value0,value1);
 void *value3=fn_801B74F0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_800BB7B8();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 meta_setupFields(value0,lbl_8055FD90,lbl_8055FD98,lbl_8055FDA0,value1);
}
void *igAttrContainer_getMeta(){
 if(!igAttrContainer_meta || !(reinterpret_cast<unsigned int *>(igAttrContainer_meta)[0x24/4]&4)) igAttrContainer_registerNow();
 return igAttrContainer_meta;
}
void igAttrContainer_registerNow(){
 meta_registerNow((int)igAttrContainer_register);
}
void igAttrContainer_register(){
 fn_8012FC48();
 meta_registerClass(1,(int)&igAttrContainer_meta,(int)igItemBase_register,(int)fn_8013496C,(int)igAttrContainer_getMetaCall,(int)igAttrContainer_className,32,0,0,0,0);
}
void *igAttrContainer_getMetaCall(){return igAttrContainer_getMeta();}
void fn_80153864(){}
}
#pragma pop
