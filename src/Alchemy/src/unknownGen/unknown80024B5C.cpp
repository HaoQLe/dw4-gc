#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void arkRegister__Q33Gap4Core15igStringObjListFv();
void fn_80021B94();
void *fn_800256C0();
void *meta_newMetaObject(void *);
void *fn_80053998(void *,void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void fn_8006588C(void *,void *,void *);
UnknownGenFactory *fn_800658F8(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void igDataList_register();
extern char igStringRefList_className[];
extern char igStringRefList_vtable[];
extern char igDataList_vtable[];
extern char igStringObjList_vtable[];
extern char lbl_80476AF0[];
extern char lbl_80476B54[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char lbl_8055D0A0[6];
extern void *igStringRefList_meta;
extern char lbl_80561590[4];
extern void *igStringObjList_meta;
extern void *igDataList_meta;
extern void *lbl_805621F4;
void *igStringRefList_getMeta();
void *igStringRefList_vtableRead();
void igStringRefList_arkRegister();
void igStringRefList_register();
void *igStringRefList_getMetaCall();
void *fn_80024D1C();
void fn_80024D24();
}
struct UnknownGenObject80024C0C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80024E90_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igStringRefList_create(void *object){
 igStringRefList_arkRegister();
 return meta_createInstance(igStringRefList_meta,object);
}
void *fn_80024B94(){
 if(!igStringRefList_meta) igStringRefList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igStringRefList_meta;
}
void *igStringRefList_getMeta(){
 if(!igStringRefList_meta || !(reinterpret_cast<unsigned int *>(igStringRefList_meta)[0x24/4]&4)) igStringRefList_arkRegister();
 return igStringRefList_meta;
}
void *igStringRefList_vtableRead(){
 UnknownGenObject80024C0C_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476B54;
 object.unknown00=igStringRefList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igStringRefList_arkRegister(){
 meta_registerNow((int)igStringRefList_register);
}
void igStringRefList_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igStringRefList_meta,(int)igDataList_register,(int)fn_80024D1C,(int)igStringRefList_getMetaCall,(int)igStringRefList_className,20,(int)igStringRefList_vtableRead,(int)fn_80024D24,0,0);
}
void *igStringRefList_getMetaCall(){return igStringRefList_getMeta();}
void *fn_80024D1C(){return igDataList_meta;}
void fn_80024D24(){
 void *meta=igStringRefList_meta;
 UnknownGenField *field=reinterpret_cast<UnknownGenField *>(fn_800658F8(meta,lbl_8055D0A0));
 void *type=fn_80053998(reinterpret_cast<void **>(meta)[0x28/4],field);
 field=reinterpret_cast<UnknownGenFactory *>(field)->slot54(1);
 field->unknown3C=fn_800256C0();
 field->unknown38=0;
 field->unknown1C=lbl_80561590;
 fn_8006588C(meta,type,field);
 unknownGenDrop(reinterpret_cast<UnknownGenValue *>(field));
}
void *igStringObjList_create(void *object){
 arkRegister__Q33Gap4Core15igStringObjListFv();
 return meta_createInstance(igStringObjList_meta,object);
}
void *fn_80024E18(){
 if(!igStringObjList_meta) igStringObjList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igStringObjList_meta;
}
void *igStringObjList_getMeta(){
 if(!igStringObjList_meta || !(reinterpret_cast<unsigned int *>(igStringObjList_meta)[0x24/4]&4)) arkRegister__Q33Gap4Core15igStringObjListFv();
 return igStringObjList_meta;
}
void *igStringObjList_vtableRead(){
 UnknownGenObject80024E90_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_80476AF0;
 object.unknown00=igStringObjList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
