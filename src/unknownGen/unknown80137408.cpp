#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_80035C70();
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *igImageHistogramBase_fieldInit();
void igUnsignedIntList_register();
extern char igDataList_vtable[];
extern char igUnsignedIntList_vtable[];
extern char lbl_80474900[];
extern char igImageHistogram_RGBA_className[];
extern char igImageHistogram_RGB_className[];
extern char igImageHistogram_LA_className[];
extern char igImageHistogramBase_dependencies[];
extern char igImageHistogramBase_className[];
extern char igImageHistogram_RGBA_vtable[];
extern char igImageHistogram_RGB_vtable[];
extern char igImageHistogram_LA_vtable[];
extern char lbl_804A404C[];
extern void *lbl_805621F4;
extern void *igImageHistogram_RGBA_meta;
extern void *igImageHistogram_RGB_meta;
extern void *igImageHistogram_LA_meta;
extern void *igImageHistogramBase_meta;
void *igImageHistogram_RGBA_getMeta();
void *igImageHistogram_RGBA_vtableRead();
void igImageHistogram_RGBA_arkRegister();
void igImageHistogram_RGBA_register();
void *igImageHistogram_RGBA_getMetaCall();
void *fn_801376D0();
void *igImageHistogram_RGB_getMeta();
void *igImageHistogram_RGB_vtableRead();
void igImageHistogram_RGB_arkRegister();
void igImageHistogram_RGB_register();
void *igImageHistogram_RGB_getMetaCall();
void *igImageHistogram_LA_getMeta();
void *igImageHistogram_LA_vtableRead();
void igImageHistogram_LA_arkRegister();
void igImageHistogram_LA_register();
void *igImageHistogram_LA_getMetaCall();
void *igImageHistogramBase_getMeta();
void igImageHistogramBase_arkRegister();
void igImageHistogramBase_register();
void *igImageHistogramBase_getMetaCall();
}
struct UnknownGenRoot8013747C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013747C(){igObject_construct(this);}
};
struct UnknownGenObject8013747C_0 : UnknownGenRoot8013747C {
 char unknown04[56];
 UnknownGenRefMember unknown3C;
 UnknownGenRefMember unknown40;
 UnknownGenRefMember unknown44;
 UnknownGenRefMember unknown48;
 UnknownGenRefMember unknown4C;
 inline ~UnknownGenObject8013747C_0(){unknown00=lbl_804A404C;}
};
struct UnknownGenObject8013747C : UnknownGenObject8013747C_0 {
 inline ~UnknownGenObject8013747C(){unknown00=igImageHistogram_RGBA_vtable;}
};
struct UnknownGenRoot8013774C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013774C(){igObject_construct(this);}
};
struct UnknownGenObject8013774C_0 : UnknownGenRoot8013774C {
 char unknown04[56];
 UnknownGenRefMember unknown3C;
 UnknownGenRefMember unknown40;
 UnknownGenRefMember unknown44;
 UnknownGenRefMember unknown48;
 UnknownGenRefMember unknown4C;
 inline ~UnknownGenObject8013774C_0(){unknown00=lbl_804A404C;}
};
struct UnknownGenObject8013774C : UnknownGenObject8013774C_0 {
 inline ~UnknownGenObject8013774C(){unknown00=igImageHistogram_RGB_vtable;}
};
struct UnknownGenRoot80137A14 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80137A14(){igObject_construct(this);}
};
struct UnknownGenObject80137A14_0 : UnknownGenRoot80137A14 {
 char unknown04[56];
 UnknownGenRefMember unknown3C;
 UnknownGenRefMember unknown40;
 UnknownGenRefMember unknown44;
 UnknownGenRefMember unknown48;
 UnknownGenRefMember unknown4C;
 inline ~UnknownGenObject80137A14_0(){unknown00=lbl_804A404C;}
};
struct UnknownGenObject80137A14 : UnknownGenObject80137A14_0 {
 inline ~UnknownGenObject80137A14(){unknown00=igImageHistogram_LA_vtable;}
};
extern "C" {
void *igImageHistogram_RGBA_create(void *object){
 igImageHistogram_RGBA_arkRegister();
 return meta_createInstance(igImageHistogram_RGBA_meta,object);
}
void *igImageHistogram_RGBA_getMeta(){
 if(!igImageHistogram_RGBA_meta || !(reinterpret_cast<unsigned int *>(igImageHistogram_RGBA_meta)[0x24/4]&4)) igImageHistogram_RGBA_arkRegister();
 return igImageHistogram_RGBA_meta;
}
void *igImageHistogram_RGBA_vtableRead(){
 UnknownGenObject8013747C object;
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80474900;
 object.unknown00=igUnsignedIntList_vtable;
 object.unknown00=lbl_804A404C;
 object.unknown3C.value=0;
 object.unknown40.value=0;
 object.unknown44.value=0;
 object.unknown48.value=0;
 object.unknown4C.value=0;
 object.unknown00=igImageHistogram_RGBA_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igImageHistogram_RGBA_arkRegister(){
 meta_registerNow((int)igImageHistogram_RGBA_register);
}
void igImageHistogram_RGBA_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igImageHistogram_RGBA_meta,(int)igImageHistogramBase_register,(int)fn_801376D0,(int)igImageHistogram_RGBA_getMetaCall,(int)igImageHistogram_RGBA_className,80,(int)igImageHistogram_RGBA_vtableRead,0,0,0);
}
void *igImageHistogram_RGBA_getMetaCall(){return igImageHistogram_RGBA_getMeta();}
void *fn_801376D0(){return igImageHistogramBase_meta;}
void *igImageHistogram_RGB_create(void *object){
 igImageHistogram_RGB_arkRegister();
 return meta_createInstance(igImageHistogram_RGB_meta,object);
}
void *igImageHistogram_RGB_getMeta(){
 if(!igImageHistogram_RGB_meta || !(reinterpret_cast<unsigned int *>(igImageHistogram_RGB_meta)[0x24/4]&4)) igImageHistogram_RGB_arkRegister();
 return igImageHistogram_RGB_meta;
}
void *igImageHistogram_RGB_vtableRead(){
 UnknownGenObject8013774C object;
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80474900;
 object.unknown00=igUnsignedIntList_vtable;
 object.unknown00=lbl_804A404C;
 object.unknown3C.value=0;
 object.unknown40.value=0;
 object.unknown44.value=0;
 object.unknown48.value=0;
 object.unknown4C.value=0;
 object.unknown00=igImageHistogram_RGB_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igImageHistogram_RGB_arkRegister(){
 meta_registerNow((int)igImageHistogram_RGB_register);
}
void igImageHistogram_RGB_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igImageHistogram_RGB_meta,(int)igImageHistogramBase_register,(int)fn_801376D0,(int)igImageHistogram_RGB_getMetaCall,(int)igImageHistogram_RGB_className,80,(int)igImageHistogram_RGB_vtableRead,0,0,0);
}
void *igImageHistogram_RGB_getMetaCall(){return igImageHistogram_RGB_getMeta();}
void *igImageHistogram_LA_create(void *object){
 igImageHistogram_LA_arkRegister();
 return meta_createInstance(igImageHistogram_LA_meta,object);
}
void *igImageHistogram_LA_getMeta(){
 if(!igImageHistogram_LA_meta || !(reinterpret_cast<unsigned int *>(igImageHistogram_LA_meta)[0x24/4]&4)) igImageHistogram_LA_arkRegister();
 return igImageHistogram_LA_meta;
}
void *igImageHistogram_LA_vtableRead(){
 UnknownGenObject80137A14 object;
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80474900;
 object.unknown00=igUnsignedIntList_vtable;
 object.unknown00=lbl_804A404C;
 object.unknown3C.value=0;
 object.unknown40.value=0;
 object.unknown44.value=0;
 object.unknown48.value=0;
 object.unknown4C.value=0;
 object.unknown00=igImageHistogram_LA_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igImageHistogram_LA_arkRegister(){
 meta_registerNow((int)igImageHistogram_LA_register);
}
void igImageHistogram_LA_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igImageHistogram_LA_meta,(int)igImageHistogramBase_register,(int)fn_801376D0,(int)igImageHistogram_LA_getMetaCall,(int)igImageHistogram_LA_className,80,(int)igImageHistogram_LA_vtableRead,0,0,0);
}
void *igImageHistogram_LA_getMetaCall(){return igImageHistogram_LA_getMeta();}
void *fn_80137C68(){
 if(!igImageHistogramBase_meta) igImageHistogramBase_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igImageHistogramBase_meta;
}
void *igImageHistogramBase_getMeta(){
 if(!igImageHistogramBase_meta || !(reinterpret_cast<unsigned int *>(igImageHistogramBase_meta)[0x24/4]&4)) igImageHistogramBase_arkRegister();
 return igImageHistogramBase_meta;
}
void igImageHistogramBase_arkRegister(){
 meta_registerNow((int)igImageHistogramBase_register);
}
void igImageHistogramBase_register(){
 fn_8012FC48();
 meta_registerClass(1,(int)&igImageHistogramBase_meta,(int)igUnsignedIntList_register,(int)fn_80035C70,(int)igImageHistogramBase_getMetaCall,(int)igImageHistogramBase_className,80,0,(int)igImageHistogramBase_fieldInit,0,(int)igImageHistogramBase_dependencies);
}
void *igImageHistogramBase_getMetaCall(){return igImageHistogramBase_getMeta();}
}
#pragma pop
