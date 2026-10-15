#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_80216620();
void *fn_80218670();
void igFloatHistogram_fieldInit();
void igHistogramBase_register();
void igObject_register();
extern char igFloatObject_className[];
extern char igFloatHistogram_className[];
extern char igFloatHistogram_vtable[];
extern char lbl_804BBD94[];
extern char igFloatObject_vtable[];
extern char igHistogramBase_vtable[];
extern char igFloatObject_fieldTypes[4];
extern char igFloatObject_fieldNames[4];
extern char igFloatObject_fieldStorage[4];
extern char igFloatObject_fieldOffsets[4];
extern void *igFloatObject_meta;
extern void *igFloatHistogram_meta;
void *igFloatObject_getMeta();
void *igFloatObject_vtableRead();
void igFloatObject_arkRegister();
void igFloatObject_register();
void *igFloatObject_getMetaCall();
void igFloatObject_fieldInit();
void *igFloatHistogram_getMeta();
void *igFloatHistogram_vtableRead();
void igFloatHistogram_arkRegister();
void igFloatHistogram_register();
void *igFloatHistogram_getMetaCall();
}
struct UnknownGenObject80218724_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot802188C0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802188C0(){igObject_construct(this);}
};
struct UnknownGenObject802188C0_0 : UnknownGenRoot802188C0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject802188C0_0(){unknown00=igHistogramBase_vtable;}
};
struct UnknownGenObject802188C0_1 : UnknownGenObject802188C0_0 {
 inline ~UnknownGenObject802188C0_1(){unknown00=lbl_804BBD94;}
};
struct UnknownGenObject802188C0 : UnknownGenObject802188C0_1 {
 char unknown0C[36];
 inline ~UnknownGenObject802188C0(){unknown00=igFloatHistogram_vtable;}
};
extern "C" {
void *igFloatObject_getMeta(){
 if(!igFloatObject_meta || !(reinterpret_cast<unsigned int *>(igFloatObject_meta)[0x24/4]&4)) igFloatObject_arkRegister();
 return igFloatObject_meta;
}
void *igFloatObject_vtableRead(){
 UnknownGenObject80218724_0 object;
 igObject_construct(&object);
 object.unknown00=igFloatObject_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igFloatObject_arkRegister(){
 meta_registerNow((int)igFloatObject_register);
}
void igFloatObject_register(){
 fn_80216620();
 meta_registerClass(0,(int)&igFloatObject_meta,(int)igObject_register,(int)fn_800237D0,(int)igFloatObject_getMetaCall,(int)igFloatObject_className,12,(int)igFloatObject_vtableRead,(int)igFloatObject_fieldInit,0,0);
}
void *igFloatObject_getMetaCall(){return igFloatObject_getMeta();}
void igFloatObject_fieldInit(){
 void *value0=igFloatObject_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igFloatObject_fieldTypes,1);
 meta_setupFields(value0,igFloatObject_fieldNames,igFloatObject_fieldStorage,igFloatObject_fieldOffsets,value1);
}
void *igFloatHistogram_getMeta(){
 if(!igFloatHistogram_meta || !(reinterpret_cast<unsigned int *>(igFloatHistogram_meta)[0x24/4]&4)) igFloatHistogram_arkRegister();
 return igFloatHistogram_meta;
}
void *igFloatHistogram_vtableRead(){
 UnknownGenObject802188C0 object;
 object.unknown00=igHistogramBase_vtable;
 object.unknown08.value=0;
 object.unknown00=lbl_804BBD94;
 object.unknown00=igFloatHistogram_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igFloatHistogram_arkRegister(){
 meta_registerNow((int)igFloatHistogram_register);
}
void igFloatHistogram_register(){
 fn_80216620();
 meta_registerClass(0,(int)&igFloatHistogram_meta,(int)igHistogramBase_register,(int)fn_80218670,(int)igFloatHistogram_getMetaCall,(int)igFloatHistogram_className,36,(int)igFloatHistogram_vtableRead,(int)igFloatHistogram_fieldInit,0,0);
}
void *igFloatHistogram_getMetaCall(){return igFloatHistogram_getMeta();}
}
#pragma pop
