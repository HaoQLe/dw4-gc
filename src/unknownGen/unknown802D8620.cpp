#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beGeneraterItemDataOne_getMeta();
void beGeneraterItemDataOne_vtableRead();
void *fn_80023CF4();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beGenerater_arkRegister();
void igNamedObject_register();
extern char lbl_8041CA68[];
extern char beGeneraterItemDataOne_className[];
extern char beGeneraterItemDataOne_fieldTypes[];
extern char beGeneraterItemDataOne_fieldNames[];
extern char beGeneraterItemDataOne_fieldStorage[];
extern char beGeneraterItemDataOne_fieldOffsets[];
extern char lbl_804D1F30[];
extern char lbl_804D1F50[];
extern void *beGeneraterItemDataOne_meta;
extern void *lbl_80535300;
extern void *beGenerater_meta;
extern void *lbl_805621F4;
void beGeneraterItemDataOne_register();
void *beGeneraterItemDataOne_getMetaCall();
void beGeneraterItemDataOne_fieldInit();
}
extern "C" {
void *fn_802D8620(){
 if(!lbl_80535300) lbl_80535300=fn_800635C8(lbl_8041CA68,lbl_804D1F30,lbl_804D1F50,0x8);
 return lbl_80535300;
}
}
#pragma pop
