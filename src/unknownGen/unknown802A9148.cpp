#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8028FAF8();
void fn_8029D0D8(int);
void *fn_8029D2F0(void *,int);
void fn_802A8ED4();
void *fn_802A8ED8();
void *fn_802A906C();
void fn_803C4710();
}
extern "C" {
void *fn_802A9148(int p0){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 void *value4;
 value1=fn_802A8ED8();
 value0=value1;
 if(((unsigned char)(int)value1&&(unsigned char)p0)){
  value2=fn_802A906C();
  value0=value2;
 }
 fn_8029D0D8(0);
 value3=fn_8029D2F0((void *)fn_802A8ED4,0);
 value4=fn_8028FAF8();
 fn_803C4710();
 return value0;
}
}
#pragma pop
