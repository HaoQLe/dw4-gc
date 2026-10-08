#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80128CF4(void *,void *);
}
struct UnknownGenL801285EC_8 {
 float m08;
 float m0C;
 float m10;
 float m14;
 float m18;
 float m1C;
 float m20;
 float m24;
 float m28;
 float m2C;
 float m30;
 float m34;
 float m38;
 float m3C;
 float m40;
 float m44;
};
extern "C" {
void fn_801285EC(int p0){
 UnknownGenL801285EC_8 local0;
 float value0=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+0);
 local0.m08=value0;
 float value1=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+16);
 local0.m0C=value1;
 float value2=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+32);
 local0.m10=value2;
 float value3=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+48);
 local0.m14=value3;
 float value4=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+4);
 local0.m18=value4;
 float value5=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+20);
 local0.m1C=value5;
 float value6=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+36);
 local0.m20=value6;
 float value7=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+52);
 local0.m24=value7;
 float value8=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+8);
 local0.m28=value8;
 float value9=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+24);
 local0.m2C=value9;
 float value10=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+40);
 local0.m30=value10;
 float value11=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+56);
 local0.m34=value11;
 float value12=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+12);
 local0.m38=value12;
 float value13=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+28);
 local0.m3C=value13;
 float value14=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+44);
 local0.m40=value14;
 float value15=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+60);
 local0.m44=value15;
 fn_80128CF4((void *)p0,&local0);
}
}
#pragma pop
