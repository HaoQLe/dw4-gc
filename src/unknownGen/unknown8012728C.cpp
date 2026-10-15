#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800607F4(void *);
void *igGetCenterFunctionList_create(void *);
void *igIsEmptyFunctionList_create(void *);
void *igEmptyFunctionList_create(void *);
void *igTransformFunctionList_create(void *);
void *igContainsVecFunctionList_create(void *);
void *igExtendByVecFunctionList_create(void *);
void *igContainsRayFunctionList_create(void *);
void *igExtendByRayFunctionList_create(void *);
void *igRayIntersectionFunctionList_create(void *);
void *igContainsFunctionList_create(void *);
void *igExtendByFunctionList_create(void *);
void *igIntersectionFunctionList_create(void *);
extern void *lbl_805621F0;
extern void *lbl_80563A50;
extern void *lbl_80563A54;
extern void *lbl_80563A58;
extern void *lbl_80563A5C;
extern void *lbl_80563A60;
extern void *lbl_80563A64;
extern void *lbl_80563A68;
extern void *lbl_80563A6C;
extern void *lbl_80563A70;
extern void *lbl_80563A74;
extern void *lbl_80563A78;
extern void *lbl_80563A7C;
}
extern "C" {
void fn_8012728C(){
 void *value0=fn_800607F4(lbl_805621F0);
 void *value1=igRayIntersectionFunctionList_create(value0);
 lbl_80563A5C=value1;
 void *value2=fn_800607F4(lbl_805621F0);
 void *value3=igExtendByRayFunctionList_create(value2);
 lbl_80563A60=value3;
 void *value4=fn_800607F4(lbl_805621F0);
 void *value5=igContainsRayFunctionList_create(value4);
 lbl_80563A64=value5;
 void *value6=fn_800607F4(lbl_805621F0);
 void *value7=igExtendByVecFunctionList_create(value6);
 lbl_80563A68=value7;
 void *value8=fn_800607F4(lbl_805621F0);
 void *value9=igContainsVecFunctionList_create(value8);
 lbl_80563A6C=value9;
 void *value10=fn_800607F4(lbl_805621F0);
 void *value11=igEmptyFunctionList_create(value10);
 lbl_80563A74=value11;
 void *value12=fn_800607F4(lbl_805621F0);
 void *value13=igIsEmptyFunctionList_create(value12);
 lbl_80563A78=value13;
 void *value14=fn_800607F4(lbl_805621F0);
 void *value15=igTransformFunctionList_create(value14);
 lbl_80563A70=value15;
 void *value16=fn_800607F4(lbl_805621F0);
 void *value17=igGetCenterFunctionList_create(value16);
 lbl_80563A7C=value17;
 void *value18=fn_800607F4(lbl_805621F0);
 void *value19=igIntersectionFunctionList_create(value18);
 lbl_80563A50=value19;
 void *value20=fn_800607F4(lbl_805621F0);
 void *value21=igExtendByFunctionList_create(value20);
 lbl_80563A54=value21;
 void *value22=fn_800607F4(lbl_805621F0);
 void *value23=igContainsFunctionList_create(value22);
 lbl_80563A58=value23;
}
}
#pragma pop
