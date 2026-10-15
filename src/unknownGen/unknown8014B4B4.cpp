#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *fn_8013496C();
void igFieldSource_fieldInit();
void igItemBase_register();
extern char igFieldSource_dependencies[];
extern char igFieldSource_className[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char igFieldSource_vtable[];
extern char lbl_804AAF48[];
extern void *igFieldSource_meta;
void *igFieldSource_getMeta();
void *igFieldSource_vtableRead();
void igFieldSource_arkRegister();
void igFieldSource_register();
void *igFieldSource_getMetaCall();
}
struct UnknownGenRoot8014B4F0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014B4F0(){igObject_construct(this);}
};
struct UnknownGenObject8014B4F0 : UnknownGenRoot8014B4F0 {
 char unknown04[28];
 UnknownGenString unknown20;
 UnknownGenString unknown24;
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject8014B4F0(){unknown00=igFieldSource_vtable;}
};
extern "C" {
void *igFieldSource_getMeta(){
 if(!igFieldSource_meta || !(reinterpret_cast<unsigned int *>(igFieldSource_meta)[0x24/4]&4)) igFieldSource_arkRegister();
 return igFieldSource_meta;
}
void *igFieldSource_vtableRead(){
 UnknownGenObject8014B4F0 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=igFieldSource_vtable;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igFieldSource_arkRegister(){
 meta_registerNow((int)igFieldSource_register);
}
void igFieldSource_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igFieldSource_meta,(int)igItemBase_register,(int)fn_8013496C,(int)igFieldSource_getMetaCall,(int)igFieldSource_className,48,(int)igFieldSource_vtableRead,(int)igFieldSource_fieldInit,0,(int)igFieldSource_dependencies);
}
void *igFieldSource_getMetaCall(){return igFieldSource_getMeta();}
}
#pragma pop
