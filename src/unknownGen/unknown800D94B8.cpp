#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8004C430(void *,void *);
void fn_800D8B90(void *,void *,int);
void igExternalDirEntry_virtual2C(void *);
extern char lbl_80413774[];
extern char lbl_804F5870[];
}
extern "C" {
void igExternalImageEntry_virtual2C(int p0){
 igExternalDirEntry_virtual2C((void *)p0);
 fn_8004C430((void *)p0,lbl_80413774);
}
int igGenericCapabilityManager_virtual120(){return 0;}
void igGenericCapabilityManager_virtualC0(int p0,int p1,int p2,int p3,int p4,int p5){
 fn_800D8B90((void *)p1,lbl_804F5870,28);
}
int igGenericCapabilityManager_virtual5C(){return 1;}
}
#pragma pop
