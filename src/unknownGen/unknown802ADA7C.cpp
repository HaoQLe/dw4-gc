#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800667A4();
void fn_800667A8();
void fn_802AE9F0();
void fn_802AEA80();
void fn_803FAF7C(void *,void *,void *);
}
extern "C" {
void fn_802ADA7C(int p0){
 fn_800667A4();
 fn_803FAF7C((void *)fn_802AE9F0,(void *)fn_802AEA80,(void *)p0);
}
void fn_802ADAC0(){return fn_800667A8();}
int fn_802ADAE0(){return 1;}
}
#pragma pop
