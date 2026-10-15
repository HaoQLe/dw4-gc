#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *fn_8012FEB0();
void igConvertImage_fieldInit();
void igOptVisitObject_register();
extern char igConvertImage_dependencies[];
extern char igConvertImage_className[];
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char igConvertImage_vtable[];
extern char lbl_804AAF48[];
extern void *igConvertImage_meta;
void *igConvertImage_getMeta();
void *igConvertImage_vtableRead();
void igConvertImage_arkRegister();
void igConvertImage_register();
void *igConvertImage_getMetaCall();
}
struct UnknownGenRoot8014E434 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014E434(){igObject_construct(this);}
};
struct UnknownGenObject8014E434_0 : UnknownGenRoot8014E434 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8014E434_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8014E434_1 : UnknownGenObject8014E434_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject8014E434_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject8014E434 : UnknownGenObject8014E434_1 {
 char unknown2C[20];
 UnknownGenRefMember unknown40;
 char unknown44[8];
 UnknownGenRefMember unknown4C;
 char unknown50[16];
 inline ~UnknownGenObject8014E434(){unknown00=igConvertImage_vtable;}
};
extern "C" {
void *igConvertImage_getMeta(){
 if(!igConvertImage_meta || !(reinterpret_cast<unsigned int *>(igConvertImage_meta)[0x24/4]&4)) igConvertImage_arkRegister();
 return igConvertImage_meta;
}
void *igConvertImage_vtableRead(){
 UnknownGenObject8014E434 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=igConvertImage_vtable;
 object.unknown40.value=0;
 object.unknown4C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igConvertImage_arkRegister(){
 meta_registerNow((int)igConvertImage_register);
}
void igConvertImage_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igConvertImage_meta,(int)igOptVisitObject_register,(int)fn_8012FEB0,(int)igConvertImage_getMetaCall,(int)igConvertImage_className,84,(int)igConvertImage_vtableRead,(int)igConvertImage_fieldInit,0,(int)igConvertImage_dependencies);
}
void *igConvertImage_getMetaCall(){return igConvertImage_getMeta();}
}
#pragma pop
