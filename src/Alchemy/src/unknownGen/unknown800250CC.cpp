#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *fn_80037E48();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_register();
void *igStringObj_getMeta();
void igStringObj_vtableRead();
extern char igStringObj_className[];
extern char lbl_8055D0B8[8];
extern char lbl_8055D0D0[8];
extern char lbl_8055D0D8[8];
extern char lbl_8055D0E0[8];
extern void *igStringObj_meta;
void *igStringObj_getMetaCall();
void igStringObj_fieldInit();
}
extern "C" {
void igStringObj_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igStringObj_meta,(int)igObject_register,(int)fn_800237D0,(int)igStringObj_getMetaCall,(int)igStringObj_className,16,(int)igStringObj_vtableRead,(int)igStringObj_fieldInit,0,0);
}
void *igStringObj_getMetaCall(){return igStringObj_getMeta();}
void igStringObj_fieldInit(){
 void *value0=igStringObj_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8055D0B8,2);
 void *value2=meta_field(value0,value1);
 void *value3=fn_80037E48();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+60)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+53)=1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+64)=1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+65)=1;
 meta_setupFields(value0,lbl_8055D0D0,lbl_8055D0D8,lbl_8055D0E0,value1);
}
}
#pragma pop
