#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80128DAC(void *,void *);
extern char lbl_80535914[];
}
struct UnknownGenL802EDF84_8 {
 float m08;
 float m0C;
 float m10;
};
extern "C" {
float fn_802EDF84(float f0,float f1,float f2){
 UnknownGenL802EDF84_8 local0;
 fn_80128DAC(*reinterpret_cast<void **>((lbl_80535914+8)),&local0);
 return (((local0.m10-f2)*(local0.m10-f2))+(((local0.m08-f0)*(local0.m08-f0))+((local0.m0C-f1)*(local0.m0C-f1))));
}
}
#pragma pop
