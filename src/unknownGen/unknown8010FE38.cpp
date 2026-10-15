#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8010CBD4();
void igMouseCursor_fieldInit();
void igObject_register();
extern char igMouseCursor_className[];
extern char igMouseCursor_vtable[];
extern char lbl_8055F05C[8];
extern void *lbl_805621F4;
extern void *igMouseCursor_meta;
void *igMouseCursor_getMeta();
void *igMouseCursor_vtableRead();
void igMouseCursor_registerNow();
void igMouseCursor_register();
void *igMouseCursor_getMetaCall();
}
struct UnknownGenRoot8010FEB0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010FEB0(){fn_8006665C(this);}
};
struct UnknownGenObject8010FEB0 : UnknownGenRoot8010FEB0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[20];
 inline ~UnknownGenObject8010FEB0(){unknown00=igMouseCursor_vtable;}
};
extern "C" {
void *fn_8010FE38(){
 if(!igMouseCursor_meta) igMouseCursor_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igMouseCursor_meta;
}
void *igMouseCursor_getMeta(){
 if(!igMouseCursor_meta || !(reinterpret_cast<unsigned int *>(igMouseCursor_meta)[0x24/4]&4)) igMouseCursor_registerNow();
 return igMouseCursor_meta;
}
void *igMouseCursor_vtableRead(){
 UnknownGenObject8010FEB0 object;
 object.unknown00=igMouseCursor_vtable;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igMouseCursor_registerNow(){
 meta_registerNow((int)igMouseCursor_register);
}
void igMouseCursor_register(){
 fn_8010CBD4();
 meta_registerClass(0,(int)&igMouseCursor_meta,(int)igObject_register,(int)fn_800237D0,(int)igMouseCursor_getMetaCall,(int)igMouseCursor_className,20,(int)igMouseCursor_vtableRead,(int)igMouseCursor_fieldInit,0,(int)lbl_8055F05C);
}
void *igMouseCursor_getMetaCall(){return igMouseCursor_getMeta();}
}
#pragma pop
