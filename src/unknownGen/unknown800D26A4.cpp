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
void fn_8006665C(void *);
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
void igTrackedElementList_registerNow();
void igTrackedElementList_register();
void *igTrackedElementList_getMetaCall();
void fn_800D286C();
}
struct UnknownGenObject800D275C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igGamecubeImage_getMetaCall(){return igGamecubeImage_getMeta();}
void *fn_800D26C4(){return fn_800DA384();}
void *fn_800D26E4(){
 if(!igTrackedElementList_meta) igTrackedElementList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igTrackedElementList_meta;
}
void *igTrackedElementList_getMeta(){
 if(!igTrackedElementList_meta || !(reinterpret_cast<unsigned int *>(igTrackedElementList_meta)[0x24/4]&4)) igTrackedElementList_registerNow();
 return igTrackedElementList_meta;
}
void *igTrackedElementList_vtableRead(){
 UnknownGenObject800D275C_0 object;
 fn_8006665C(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80493C48;
 object.unknown00=igTrackedElementList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igTrackedElementList_registerNow(){
 meta_registerNow((int)igTrackedElementList_register);
}
void igTrackedElementList_register(){
 fn_800CE2F8();
 meta_registerClass(0,(int)&igTrackedElementList_meta,(int)igDataList_register,(int)fn_80024D1C,(int)igTrackedElementList_getMetaCall,(int)igTrackedElementList_className,20,(int)igTrackedElementList_vtableRead,(int)fn_800D286C,0,0);
}
void *igTrackedElementList_getMetaCall(){return igTrackedElementList_getMeta();}
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
