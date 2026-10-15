#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_80216620();
void igMeanAndStandardDeviation_fieldInit();
void *igMersenneTwisterRandomNumber_getMetaCall();
void igObject_register();
void igRandomNumber_register();
extern char igMersenneTwisterRandomNumber_className[];
extern char igMeanAndStandardDeviation_className[];
extern char igMersenneTwisterRandomNumber_vtable[];
extern char igMeanAndStandardDeviation_vtable[];
extern char lbl_804BC590[];
extern char igMersenneTwisterRandomNumber_fieldTypes[8];
extern char igMersenneTwisterRandomNumber_fieldNames[8];
extern char igMersenneTwisterRandomNumber_fieldStorage[8];
extern char igMersenneTwisterRandomNumber_fieldOffsets[8];
extern void *igRandomNumber_meta;
extern void *igMersenneTwisterRandomNumber_meta;
extern void *igMeanAndStandardDeviation_meta;
void *igMersenneTwisterRandomNumber_vtableRead();
void igMersenneTwisterRandomNumber_arkRegister();
void igMersenneTwisterRandomNumber_register();
void *igMersenneTwisterRandomNumber_parentMeta();
void igMersenneTwisterRandomNumber_fieldInit();
void *igMeanAndStandardDeviation_getMeta();
void *igMeanAndStandardDeviation_vtableRead();
void igMeanAndStandardDeviation_arkRegister();
void igMeanAndStandardDeviation_register();
void *igMeanAndStandardDeviation_getMetaCall();
}
struct UnknownGenObject802177F0_0 {
 void *unknown00;
 char unknown04[2516];
};
struct UnknownGenObject80217994_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igMersenneTwisterRandomNumber_getMeta(){
 if(!igMersenneTwisterRandomNumber_meta || !(reinterpret_cast<unsigned int *>(igMersenneTwisterRandomNumber_meta)[0x24/4]&4)) igMersenneTwisterRandomNumber_arkRegister();
 return igMersenneTwisterRandomNumber_meta;
}
void *igMersenneTwisterRandomNumber_vtableRead(){
 UnknownGenObject802177F0_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_804BC590;
 object.unknown00=igMersenneTwisterRandomNumber_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igMersenneTwisterRandomNumber_arkRegister(){
 meta_registerNow((int)igMersenneTwisterRandomNumber_register);
}
void igMersenneTwisterRandomNumber_register(){
 fn_80216620();
 meta_registerClass(0,(int)&igMersenneTwisterRandomNumber_meta,(int)igRandomNumber_register,(int)igMersenneTwisterRandomNumber_parentMeta,(int)igMersenneTwisterRandomNumber_getMetaCall,(int)igMersenneTwisterRandomNumber_className,2508,(int)igMersenneTwisterRandomNumber_vtableRead,(int)igMersenneTwisterRandomNumber_fieldInit,0,0);
}
void *igMersenneTwisterRandomNumber_parentMeta(){return igRandomNumber_meta;}
void igMersenneTwisterRandomNumber_fieldInit(){
 void *value0=igMersenneTwisterRandomNumber_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igMersenneTwisterRandomNumber_fieldTypes,2);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+52)=(void *)624;
 meta_setupFields(value0,igMersenneTwisterRandomNumber_fieldNames,igMersenneTwisterRandomNumber_fieldStorage,igMersenneTwisterRandomNumber_fieldOffsets,value1);
}
void *igMeanAndStandardDeviation_getMeta(){
 if(!igMeanAndStandardDeviation_meta || !(reinterpret_cast<unsigned int *>(igMeanAndStandardDeviation_meta)[0x24/4]&4)) igMeanAndStandardDeviation_arkRegister();
 return igMeanAndStandardDeviation_meta;
}
void *igMeanAndStandardDeviation_vtableRead(){
 UnknownGenObject80217994_0 object;
 igObject_construct(&object);
 object.unknown00=igMeanAndStandardDeviation_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igMeanAndStandardDeviation_arkRegister(){
 meta_registerNow((int)igMeanAndStandardDeviation_register);
}
void igMeanAndStandardDeviation_register(){
 fn_80216620();
 meta_registerClass(0,(int)&igMeanAndStandardDeviation_meta,(int)igObject_register,(int)fn_800237D0,(int)igMeanAndStandardDeviation_getMetaCall,(int)igMeanAndStandardDeviation_className,20,(int)igMeanAndStandardDeviation_vtableRead,(int)igMeanAndStandardDeviation_fieldInit,0,0);
}
void *igMeanAndStandardDeviation_getMetaCall(){return igMeanAndStandardDeviation_getMeta();}
}
#pragma pop
