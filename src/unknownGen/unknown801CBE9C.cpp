#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_801AA6DC();
void *fn_801CFB8C();
void *fn_801CFCA8();
void igAnimationBinding_fieldInit();
void igObjectList_register();
void igObject_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igAnimationBindingList_className[];
extern char igAnimationBinding_dependencies[];
extern char igAnimationBinding_className[];
extern char igAnimationBinding_vtable[];
extern char igAnimationBindingList_vtable[];
extern char lbl_804B5F28[];
extern char igAnimationBindingList_dependencies[8];
extern void *lbl_805621F4;
extern void *igAnimationBindingList_meta;
extern void *igAnimationBinding_meta;
void *igAnimationBindingList_getMeta();
void *igAnimationBindingList_vtableRead();
void igAnimationBindingList_arkRegister();
void igAnimationBindingList_register();
void *igAnimationBindingList_getMetaCall();
void *igAnimationBinding_getMeta();
void *igAnimationBinding_vtableRead();
void igAnimationBinding_arkRegister();
void igAnimationBinding_register();
void *igAnimationBinding_getMetaCall();
}
struct UnknownGenObject801CBF54_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801CC0EC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801CC0EC(){igObject_construct(this);}
};
struct UnknownGenObject801CC0EC : UnknownGenRoot801CC0EC {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[12];
 inline ~UnknownGenObject801CC0EC(){unknown00=igAnimationBinding_vtable;}
};
extern "C" {
void *fn_801CBE9C(){return fn_801CFB8C();}
void *fn_801CBEBC(){return fn_801CFCA8();}
void *fn_801CBEDC(){
 if(!igAnimationBindingList_meta) igAnimationBindingList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igAnimationBindingList_meta;
}
void *igAnimationBindingList_getMeta(){
 if(!igAnimationBindingList_meta || !(reinterpret_cast<unsigned int *>(igAnimationBindingList_meta)[0x24/4]&4)) igAnimationBindingList_arkRegister();
 return igAnimationBindingList_meta;
}
void *igAnimationBindingList_vtableRead(){
 UnknownGenObject801CBF54_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804B5F28;
 object.unknown00=igAnimationBindingList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igAnimationBindingList_arkRegister(){
 meta_registerNow((int)igAnimationBindingList_register);
}
void igAnimationBindingList_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igAnimationBindingList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igAnimationBindingList_getMetaCall,(int)igAnimationBindingList_className,20,(int)igAnimationBindingList_vtableRead,0,0,(int)igAnimationBindingList_dependencies);
}
void *igAnimationBindingList_getMetaCall(){return igAnimationBindingList_getMeta();}
void *igAnimationBinding_create(void *object){
 igAnimationBinding_arkRegister();
 return meta_createInstance(igAnimationBinding_meta,object);
}
void *igAnimationBinding_getMeta(){
 if(!igAnimationBinding_meta || !(reinterpret_cast<unsigned int *>(igAnimationBinding_meta)[0x24/4]&4)) igAnimationBinding_arkRegister();
 return igAnimationBinding_meta;
}
void *igAnimationBinding_vtableRead(){
 UnknownGenObject801CC0EC object;
 object.unknown00=igAnimationBinding_vtable;
 object.unknown08.value=0;
 object.unknown14.value=0;
 object.unknown18.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igAnimationBinding_arkRegister(){
 meta_registerNow((int)igAnimationBinding_register);
}
void igAnimationBinding_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igAnimationBinding_meta,(int)igObject_register,(int)fn_800237D0,(int)igAnimationBinding_getMetaCall,(int)igAnimationBinding_className,28,(int)igAnimationBinding_vtableRead,(int)igAnimationBinding_fieldInit,0,(int)igAnimationBinding_dependencies);
}
void *igAnimationBinding_getMetaCall(){return igAnimationBinding_getMeta();}
}
#pragma pop
