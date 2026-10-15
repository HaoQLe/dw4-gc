#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *meta_newMetaObject(void *);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void igObject_register();
void igStringTable_fieldInit();
extern char igStringTable_dependencies[];
extern char igStringTable_className[];
extern char igStringTable_vtable[];
extern void *igStructMetaField_meta;
extern void *lbl_80561564;
extern void *igStringTable_meta;
extern void *lbl_805621F4;
void *igStringTable_getMeta();
void *igStringTable_vtableRead();
void igStringTable_arkRegister();
void igStringTable_register();
void *igStringTable_getMetaCall();
}
struct UnknownGenRoot8002492C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002492C(){igObject_construct(this);}
};
struct UnknownGenObject8002492C : UnknownGenRoot8002492C {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 char unknown18[8];
 inline ~UnknownGenObject8002492C(){unknown00=igStringTable_vtable;}
};
extern "C" {
void *fn_800248B4(){
 if(!igStringTable_meta) igStringTable_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igStringTable_meta;
}
void *igStringTable_getMeta(){
 if(!igStringTable_meta || !(reinterpret_cast<unsigned int *>(igStringTable_meta)[0x24/4]&4)) igStringTable_arkRegister();
 return igStringTable_meta;
}
void *igStringTable_vtableRead(){
 UnknownGenObject8002492C object;
 object.unknown00=igStringTable_vtable;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igStringTable_arkRegister(){
 meta_registerNow((int)igStringTable_register);
}
void igStringTable_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igStringTable_meta,(int)igObject_register,(int)fn_800237D0,(int)igStringTable_getMetaCall,(int)igStringTable_className,24,(int)igStringTable_vtableRead,(int)igStringTable_fieldInit,0,(int)igStringTable_dependencies);
}
void *igStringTable_getMetaCall(){return igStringTable_getMeta();}
}
#pragma pop
