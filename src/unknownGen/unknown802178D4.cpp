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
void *igMersenneTwisterRandomNumber_parentMeta(){return igRandomNumber_meta;}
}
#pragma pop
