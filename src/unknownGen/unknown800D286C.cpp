#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024D1C();
void *meta_newMetaObject(void *);
void *fn_80053998(void *,void *);
void *fn_800607F4(void *);
void fn_8006588C(void *,void *,void *);
UnknownGenFactory *fn_800658F8(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800CE2F8();
void *fn_800D2BD4();
void *fn_800DA384();
void igDataList_register();
void *igGamecubeImage_getMeta();
extern char igDataList_vtable[];
extern char igTrackedElementList_className[];
extern char igTrackedElementList_vtable[];
extern char lbl_80493C48[];
extern char lbl_8055EA6C[6];
extern void *lbl_805621F4;
extern void *igTrackedElementList_meta;
extern char lbl_80562FD4[4];
void *igTrackedElementList_getMeta();
void *igTrackedElementList_vtableRead();
void igTrackedElementList_arkRegister();
void igTrackedElementList_register();
void *igTrackedElementList_getMetaCall();
void fn_800D286C();
}
struct UnknownGenObject800D275C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void fn_800D286C(){
 void *meta=igTrackedElementList_meta;
 UnknownGenField *field=reinterpret_cast<UnknownGenField *>(fn_800658F8(meta,lbl_8055EA6C));
 void *type=fn_80053998(reinterpret_cast<void **>(meta)[0x28/4],field);
 field=reinterpret_cast<UnknownGenFactory *>(field)->slot54(1);
 field->unknown3C=fn_800D2BD4();
 field->unknown38=0;
 field->unknown1C=lbl_80562FD4;
 fn_8006588C(meta,type,field);
 unknownGenDrop(reinterpret_cast<UnknownGenValue *>(field));
}
}
#pragma pop
