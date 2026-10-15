#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_80216620();
void igHistogramBase_register();
void igIntHistogram_fieldInit();
void *igMatrixObject_getMeta();
void igMatrixObject_vtableRead();
void igObject_register();
extern char igMatrixObject_className[];
extern char igIntObject_className[];
extern char igIntHistogram_className[];
extern char igIntObject_vtable[];
extern char igIntHistogram_vtable[];
extern char lbl_804BC70C[];
extern char igHistogramBase_vtable[];
extern char igMatrixObject_fieldTypes[4];
extern char igMatrixObject_fieldNames[4];
extern char igMatrixObject_fieldStorage[4];
extern char igMatrixObject_fieldOffsets[4];
extern char igIntObject_fieldTypes[4];
extern char igIntObject_fieldNames[4];
extern char igIntObject_fieldStorage[4];
extern char igIntObject_fieldOffsets[4];
extern void *igHistogramBase_meta;
extern void *igMatrixObject_meta;
extern void *igIntObject_meta;
extern void *igIntHistogram_meta;
void igMatrixObject_register();
void *igMatrixObject_getMetaCall();
void igMatrixObject_fieldInit();
void *igIntObject_getMeta();
void *igIntObject_vtableRead();
void igIntObject_arkRegister();
void igIntObject_register();
void *igIntObject_getMetaCall();
void igIntObject_fieldInit();
void *igIntHistogram_getMeta();
void *igIntHistogram_vtableRead();
void igIntHistogram_arkRegister();
void igIntHistogram_register();
void *igIntHistogram_getMetaCall();
void *fn_80218670();
}
struct UnknownGenObject8021833C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot80218510 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80218510(){igObject_construct(this);}
};
struct UnknownGenObject80218510_0 : UnknownGenRoot80218510 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject80218510_0(){unknown00=igHistogramBase_vtable;}
};
struct UnknownGenObject80218510_1 : UnknownGenObject80218510_0 {
 inline ~UnknownGenObject80218510_1(){unknown00=lbl_804BC70C;}
};
struct UnknownGenObject80218510 : UnknownGenObject80218510_1 {
 char unknown0C[36];
 inline ~UnknownGenObject80218510(){unknown00=igIntHistogram_vtable;}
};
extern "C" {
void igMatrixObject_arkRegister(){
 meta_registerNow((int)igMatrixObject_register);
}
void igMatrixObject_register(){
 fn_80216620();
 meta_registerClass(0,(int)&igMatrixObject_meta,(int)igObject_register,(int)fn_800237D0,(int)igMatrixObject_getMetaCall,(int)igMatrixObject_className,72,(int)igMatrixObject_vtableRead,(int)igMatrixObject_fieldInit,0,0);
}
void *igMatrixObject_getMetaCall(){return igMatrixObject_getMeta();}
void igMatrixObject_fieldInit(){
 void *value0=igMatrixObject_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igMatrixObject_fieldTypes,1);
 meta_setupFields(value0,igMatrixObject_fieldNames,igMatrixObject_fieldStorage,igMatrixObject_fieldOffsets,value1);
}
void *igIntObject_getMeta(){
 if(!igIntObject_meta || !(reinterpret_cast<unsigned int *>(igIntObject_meta)[0x24/4]&4)) igIntObject_arkRegister();
 return igIntObject_meta;
}
void *igIntObject_vtableRead(){
 UnknownGenObject8021833C_0 object;
 igObject_construct(&object);
 object.unknown00=igIntObject_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igIntObject_arkRegister(){
 meta_registerNow((int)igIntObject_register);
}
void igIntObject_register(){
 fn_80216620();
 meta_registerClass(0,(int)&igIntObject_meta,(int)igObject_register,(int)fn_800237D0,(int)igIntObject_getMetaCall,(int)igIntObject_className,12,(int)igIntObject_vtableRead,(int)igIntObject_fieldInit,0,0);
}
void *igIntObject_getMetaCall(){return igIntObject_getMeta();}
void igIntObject_fieldInit(){
 void *value0=igIntObject_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igIntObject_fieldTypes,1);
 meta_setupFields(value0,igIntObject_fieldNames,igIntObject_fieldStorage,igIntObject_fieldOffsets,value1);
}
void *igIntHistogram_create(void *object){
 igIntHistogram_arkRegister();
 return meta_createInstance(igIntHistogram_meta,object);
}
void *igIntHistogram_getMeta(){
 if(!igIntHistogram_meta || !(reinterpret_cast<unsigned int *>(igIntHistogram_meta)[0x24/4]&4)) igIntHistogram_arkRegister();
 return igIntHistogram_meta;
}
void *igIntHistogram_vtableRead(){
 UnknownGenObject80218510 object;
 object.unknown00=igHistogramBase_vtable;
 object.unknown08.value=0;
 object.unknown00=lbl_804BC70C;
 object.unknown00=igIntHistogram_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igIntHistogram_arkRegister(){
 meta_registerNow((int)igIntHistogram_register);
}
void igIntHistogram_register(){
 fn_80216620();
 meta_registerClass(0,(int)&igIntHistogram_meta,(int)igHistogramBase_register,(int)fn_80218670,(int)igIntHistogram_getMetaCall,(int)igIntHistogram_className,36,(int)igIntHistogram_vtableRead,(int)igIntHistogram_fieldInit,0,0);
}
void *igIntHistogram_getMetaCall(){return igIntHistogram_getMeta();}
void *fn_80218670(){return igHistogramBase_meta;}
}
#pragma pop
